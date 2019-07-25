#include "qwdlgmanual.h"



QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
    iniUI();
    iniSignalSlots();
    setWindowTitle("From Created Mannually");
}

void QWDlgManual::iniUI()
{
    chkBoxUnder = new QCheckBox(tr("Underline"));
    chkBoxItalic = new QCheckBox(tr("Italic"));
    chkBoxBlod = new QCheckBox(tr("Blod"));
    QHBoxLayout *HLay1 = new QHBoxLayout;
    HLay1->addWidget(chkBoxBlod);
    HLay1->addWidget(chkBoxUnder);
    HLay1->addWidget(chkBoxItalic);

    rBtnBlack = new QRadioButton(tr("Black"));
    rBtnRed = new QRadioButton(tr("Red"));
    rBtnBlue = new QRadioButton(tr("Blue"));
    QHBoxLayout *HLay2 = new QHBoxLayout;
    HLay2->addWidget(rBtnBlack);
    HLay2->addWidget(rBtnRed);
    HLay2->addWidget(rBtnBlue);

    btnOK = new QPushButton(tr("OK"));
    btnClose = new QPushButton(tr("Close"));
    btnCancel = new QPushButton(tr("Cancel"));
    QHBoxLayout *HLay3 = new QHBoxLayout;
    HLay3->addStretch();
    HLay3->addWidget(btnOK);
    HLay3->addStretch();
    HLay3->addWidget(btnClose);
    HLay3->addStretch();
    HLay3->addWidget(btnCancel);
    HLay3->addStretch();

    txtEdit = new QPlainTextEdit;
    txtEdit->setPlainText("Hello World\n\nIt is my Dome.");
    QFont font = txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);

    QVBoxLayout *VLay = new QVBoxLayout;
    VLay->addLayout(HLay1);
    VLay->addLayout(HLay2);
    VLay->addWidget(txtEdit);
    VLay->addLayout(HLay3);
    setLayout(VLay);
}

void QWDlgManual::iniSignalSlots()
{
    connect(rBtnBlue,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnRed,SIGNAL(clicked()),this,SLOT(setTextFontColor()));
    connect(rBtnBlack,SIGNAL(clicked()),this,SLOT(setTextFontColor()));

    connect(chkBoxUnder,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxItalic(bool)));
    connect(chkBoxBlod,SIGNAL(clicked(bool)),this,SLOT(on_chkBoxBlod(bool)));

    connect(btnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(btnClose,SIGNAL(clicked()),this,SLOT(close()));
    connect(btnCancel,SIGNAL(clicked()),this,SLOT(reject()));

}

void QWDlgManual::on_chkBoxUnder(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);

}

void QWDlgManual::on_chkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxBlod(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}

void QWDlgManual::setTextFontColor()
{
    QPalette plet = txtEdit->palette();
        if (rBtnBlue->isChecked())
            plet.setColor(QPalette::Text,Qt::blue);
        else if (rBtnRed->isChecked())
            plet.setColor(QPalette::Text,Qt::red);
        else if (rBtnBlack->isChecked())
            plet.setColor(QPalette::Text,Qt::black);
        else
            plet.setColor(QPalette::Text,Qt::black);
        txtEdit->setPalette(plet);
}
QWDlgManual::~QWDlgManual()
{

}
