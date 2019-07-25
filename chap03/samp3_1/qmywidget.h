#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>
#include "qperson.h"


namespace Ui {
class qmyWidget;
}

class qmyWidget : public QWidget
{
    Q_OBJECT
private:
    QPerson *boy;
    QPerson *girl;

public:
    explicit qmyWidget(QWidget *parent = nullptr);
    ~qmyWidget();

private:
    Ui::qmyWidget *ui;
private slots:
    void on_ageChanged(int value);
    void on_spin_valueChanged(int arg1);

    void on_btnClear_clicked();
    void on_btnBoyInc_clicked();
    void on_btnGirlInc_clicked();
    void on_btnClassInfo_clicked();

};

#endif // QMYWIDGET_H
