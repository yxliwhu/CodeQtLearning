#ifndef QWMAINWIND_H
#define QWMAINWIND_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>

namespace Ui {
class QWMainWind;
}

class QWMainWind : public QMainWindow
{
    Q_OBJECT

public:
    explicit QWMainWind(QWidget *parent = nullptr);
    ~QWMainWind();

private slots:
    void on_actionBlod_triggered(bool checked);

    void on_actionItalic_triggered(bool checked);

    void on_actionUnder_triggered(bool checked);

    void on_txtEdit_copyAvailable(bool b);

    void on_txtEdit_selectionChanged();

    void on_spinBoxFontSize_valueChanged(int aFontSize);

    void on_comboFont_currentIndexChanged(const QString &arg1);

private:
    Ui::QWMainWind *ui;
    QLabel *fLabCurFile;
    QProgressBar *progressBar1;
    QSpinBox *spinFontSize;
    QFontComboBox *comboFont;
    void iniUI();
    void inisignalSlots();

};

#endif // QWMAINWIND_H
