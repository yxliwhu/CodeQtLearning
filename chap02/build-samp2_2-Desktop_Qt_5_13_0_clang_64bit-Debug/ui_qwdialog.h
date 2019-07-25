/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkBoxUnder;
    QCheckBox *cheBoxBlod;
    QCheckBox *chkBoxItalic;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rBtnBlue;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBalck;
    QLabel *contentlabel;
    QPlainTextEdit *txtEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOK;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QString::fromUtf8("QWDialog"));
        QWDialog->resize(628, 451);
        verticalLayout_2 = new QVBoxLayout(QWDialog);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QString::fromUtf8("chkBoxUnder"));

        horizontalLayout_4->addWidget(chkBoxUnder);

        cheBoxBlod = new QCheckBox(groupBox);
        cheBoxBlod->setObjectName(QString::fromUtf8("cheBoxBlod"));

        horizontalLayout_4->addWidget(cheBoxBlod);

        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QString::fromUtf8("chkBoxItalic"));

        horizontalLayout_4->addWidget(chkBoxItalic);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QString::fromUtf8("rBtnBlue"));

        horizontalLayout_2->addWidget(rBtnBlue);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QString::fromUtf8("rBtnRed"));

        horizontalLayout_2->addWidget(rBtnRed);

        rBtnBalck = new QRadioButton(groupBox_2);
        rBtnBalck->setObjectName(QString::fromUtf8("rBtnBalck"));

        horizontalLayout_2->addWidget(rBtnBalck);


        verticalLayout->addWidget(groupBox_2);

        contentlabel = new QLabel(QWDialog);
        contentlabel->setObjectName(QString::fromUtf8("contentlabel"));
        contentlabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(contentlabel);

        txtEdit = new QPlainTextEdit(QWDialog);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));
        QFont font;
        font.setPointSize(20);
        txtEdit->setFont(font);

        verticalLayout->addWidget(txtEdit);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnClose = new QPushButton(QWDialog);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(QWDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnOK = new QPushButton(QWDialog);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);


        verticalLayout_2->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        contentlabel->setBuddy(txtEdit);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(chkBoxUnder, cheBoxBlod);
        QWidget::setTabOrder(cheBoxBlod, chkBoxItalic);
        QWidget::setTabOrder(chkBoxItalic, txtEdit);
        QWidget::setTabOrder(txtEdit, rBtnBlue);
        QWidget::setTabOrder(rBtnBlue, rBtnBalck);
        QWidget::setTabOrder(rBtnBalck, rBtnRed);
        QWidget::setTabOrder(rBtnRed, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnClose);

        retranslateUi(QWDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QCoreApplication::translate("QWDialog", "QWDialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QWDialog", "GroupBox", nullptr));
        chkBoxUnder->setText(QCoreApplication::translate("QWDialog", "Underline", nullptr));
        cheBoxBlod->setText(QCoreApplication::translate("QWDialog", "Bold", nullptr));
        chkBoxItalic->setText(QCoreApplication::translate("QWDialog", "Italic", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QWDialog", "GroupBox", nullptr));
        rBtnBlue->setText(QCoreApplication::translate("QWDialog", "Blue", nullptr));
        rBtnRed->setText(QCoreApplication::translate("QWDialog", "Red", nullptr));
        rBtnBalck->setText(QCoreApplication::translate("QWDialog", "Balck", nullptr));
        contentlabel->setText(QCoreApplication::translate("QWDialog", "Content(&C)", nullptr));
        txtEdit->setPlainText(QCoreApplication::translate("QWDialog", "Hello world,\n"
"It is my demo.", nullptr));
        btnClose->setText(QCoreApplication::translate("QWDialog", "Exit", nullptr));
        btnCancel->setText(QCoreApplication::translate("QWDialog", "Cancel", nullptr));
        btnOK->setText(QCoreApplication::translate("QWDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
