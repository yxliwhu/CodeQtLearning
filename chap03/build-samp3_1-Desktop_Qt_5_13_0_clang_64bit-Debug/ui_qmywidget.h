/********************************************************************************
** Form generated from reading UI file 'qmywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMYWIDGET_H
#define UI_QMYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qmyWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClassInfo;
    QLabel *label_2;
    QSpinBox *spinGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *textEdit;

    void setupUi(QWidget *qmyWidget)
    {
        if (qmyWidget->objectName().isEmpty())
            qmyWidget->setObjectName(QString::fromUtf8("qmyWidget"));
        qmyWidget->resize(421, 320);
        verticalLayout = new QVBoxLayout(qmyWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(qmyWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoy = new QSpinBox(qmyWidget);
        spinBoy->setObjectName(QString::fromUtf8("spinBoy"));
        spinBoy->setMinimum(0);
        spinBoy->setMaximum(200);
        spinBoy->setValue(10);

        gridLayout->addWidget(spinBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(qmyWidget);
        btnBoyInc->setObjectName(QString::fromUtf8("btnBoyInc"));

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClassInfo = new QPushButton(qmyWidget);
        btnClassInfo->setObjectName(QString::fromUtf8("btnClassInfo"));

        gridLayout->addWidget(btnClassInfo, 0, 3, 1, 1);

        label_2 = new QLabel(qmyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinGirl = new QSpinBox(qmyWidget);
        spinGirl->setObjectName(QString::fromUtf8("spinGirl"));
        spinGirl->setMaximum(200);
        spinGirl->setValue(20);

        gridLayout->addWidget(spinGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(qmyWidget);
        btnGirlInc->setObjectName(QString::fromUtf8("btnGirlInc"));

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(qmyWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        textEdit = new QPlainTextEdit(qmyWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(qmyWidget);

        QMetaObject::connectSlotsByName(qmyWidget);
    } // setupUi

    void retranslateUi(QWidget *qmyWidget)
    {
        qmyWidget->setWindowTitle(QCoreApplication::translate("qmyWidget", "MetaObject\347\232\204\344\275\277\347\224\250", nullptr));
        label->setText(QCoreApplication::translate("qmyWidget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        btnBoyInc->setText(QCoreApplication::translate("qmyWidget", "boy\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClassInfo->setText(QCoreApplication::translate("qmyWidget", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("qmyWidget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        btnGirlInc->setText(QCoreApplication::translate("qmyWidget", "girl\351\225\277\345\244\247\344\270\200\345\262\201", nullptr));
        btnClear->setText(QCoreApplication::translate("qmyWidget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qmyWidget: public Ui_qmyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMYWIDGET_H
