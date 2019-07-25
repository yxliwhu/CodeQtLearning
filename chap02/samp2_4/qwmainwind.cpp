#include "qwmainwind.h"
#include "ui_qwmainwind.h"

QWMainWind::QWMainWind(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    iniUI();
    inisignalSlots();
}

void QWMainWind::iniUI()
{
    //状态栏
    fLabCurFile=new QLabel;  //用于显示当前文件名的标签
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusBar->addWidget(fLabCurFile);//添加到状态栏

    progressBar1=new QProgressBar;//状态栏上的进度条
    progressBar1->setMaximumWidth(200);//设置组件最大宽度
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());//初始值
    ui->statusBar->addWidget(progressBar1); //添加到状态栏

    //工具栏
    spinFontSize = new QSpinBox;// 工具栏上的文字大小 SpinBox
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());//初始值
    spinFontSize->setMinimumWidth(50);//设置组件最小宽度

    ui->mainToolBar->addWidget(new QLabel("字体大小 ")); //不引用的Label无需定义变量
    ui->mainToolBar->addWidget(spinFontSize); //SpinBox添加到工具栏

    ui->mainToolBar->addSeparator(); //工具栏上增加分隔条
    ui->mainToolBar->addWidget(new QLabel(" 字体 "));
    comboFont = new QFontComboBox;//字体名称ComboBox
    comboFont->setMinimumWidth(150); //设置组件最小宽度
    ui->mainToolBar->addWidget(comboFont);//添加到工具栏

    //
    setCentralWidget(ui->txtEdit); //将txtEdit设置为中心组件，自动填充整个工作区
}

void QWMainWind::inisignalSlots()
{
    connect(spinFontSize,SIGNAL(valueChanged(int)),this,SLOT(on_spinBoxFontSize_valueChanged(int)));

    connect(comboFont,SIGNAL(currentIndexChanged(const QString &)),this,SLOT(on_comboFont_currentIndexChanged(const QString &)));
}


void QWMainWind::on_actionBlod_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    if (checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actionItalic_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actionUnder_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->txtEdit->mergeCurrentCharFormat(fmt);

}

void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
    ui->actionCut->setEnabled(b);
    ui->actionCopy->setEnabled(b);
    ui->actionPaste->setEnabled(b);
}

void QWMainWind::on_txtEdit_selectionChanged()
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    ui->actionBlod->setChecked(fmt.font().bold());
    ui->actionUnder->setChecked(fmt.fontUnderline());
    ui->actionItalic->setChecked(fmt.fontItalic());
}

void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{
    QTextCharFormat fmt;
    fmt.setFontPointSize(aFontSize); //设置字体大小
    ui->txtEdit->mergeCurrentCharFormat(fmt);
    progressBar1->setValue(aFontSize);

}

void QWMainWind::on_comboFont_currentIndexChanged(const QString &arg1)
{
    QTextCharFormat fmt;
    fmt.setFontFamily(arg1);//设置字体名称
    ui->txtEdit->mergeCurrentCharFormat(fmt);

}
QWMainWind::~QWMainWind()
{
    delete ui;
}
