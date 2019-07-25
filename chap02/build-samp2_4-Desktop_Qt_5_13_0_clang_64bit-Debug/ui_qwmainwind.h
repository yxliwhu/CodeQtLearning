/********************************************************************************
** Form generated from reading UI file 'qwmainwind.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWIND_H
#define UI_QWMAINWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWind
{
public:
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionBlod;
    QAction *actionItalic;
    QAction *actionUnder;
    QAction *actionClose;
    QAction *actionOpen;
    QAction *actionClear;
    QAction *actionFont;
    QAction *actionNew;
    QAction *actionToobarLab;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *txtEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuModify;
    QMenu *menuFormat;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWind)
    {
        if (QWMainWind->objectName().isEmpty())
            QWMainWind->setObjectName(QString::fromUtf8("QWMainWind"));
        QWMainWind->resize(598, 507);
        actionCut = new QAction(QWMainWind);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon);
        actionCopy = new QAction(QWMainWind);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Images/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon1);
        actionPaste = new QAction(QWMainWind);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon2);
        actionBlod = new QAction(QWMainWind);
        actionBlod->setObjectName(QString::fromUtf8("actionBlod"));
        actionBlod->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Images/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionBlod->setIcon(icon3);
        actionItalic = new QAction(QWMainWind);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/Images/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon4);
        actionUnder = new QAction(QWMainWind);
        actionUnder->setObjectName(QString::fromUtf8("actionUnder"));
        actionUnder->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Images/UNDRLN.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnder->setIcon(icon5);
        actionClose = new QAction(QWMainWind);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon6);
        actionOpen = new QAction(QWMainWind);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon7);
        actionClear = new QAction(QWMainWind);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon8);
        actionFont = new QAction(QWMainWind);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/Images/20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon9);
        actionNew = new QAction(QWMainWind);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/Images/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon10);
        actionToobarLab = new QAction(QWMainWind);
        actionToobarLab->setObjectName(QString::fromUtf8("actionToobarLab"));
        actionToobarLab->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/Images/430.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actionToobarLab->setIcon(icon11);
        centralWidget = new QWidget(QWMainWind);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        txtEdit = new QTextEdit(centralWidget);
        txtEdit->setObjectName(QString::fromUtf8("txtEdit"));

        horizontalLayout->addWidget(txtEdit);

        QWMainWind->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWind);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 598, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuModify = new QMenu(menuBar);
        menuModify->setObjectName(QString::fromUtf8("menuModify"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        QWMainWind->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWind);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QWMainWind->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWind);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QWMainWind->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuModify->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionClose);
        menuModify->addAction(actionCut);
        menuModify->addAction(actionCopy);
        menuModify->addAction(actionPaste);
        menuModify->addSeparator();
        menuModify->addAction(actionClear);
        menuFormat->addAction(actionBlod);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionUnder);
        menuFormat->addSeparator();
        menuFormat->addAction(actionToobarLab);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);
        mainToolBar->addAction(actionNew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionBlod);
        mainToolBar->addAction(actionItalic);
        mainToolBar->addAction(actionUnder);
        mainToolBar->addAction(actionToobarLab);
        mainToolBar->addSeparator();

        retranslateUi(QWMainWind);
        QObject::connect(actionClose, SIGNAL(triggered()), QWMainWind, SLOT(close()));
        QObject::connect(actionPaste, SIGNAL(triggered()), txtEdit, SLOT(paste()));
        QObject::connect(actionCut, SIGNAL(triggered()), txtEdit, SLOT(cut()));
        QObject::connect(actionCopy, SIGNAL(triggered()), txtEdit, SLOT(copy()));
        QObject::connect(actionClear, SIGNAL(triggered()), txtEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(QWMainWind);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWind)
    {
        QWMainWind->setWindowTitle(QCoreApplication::translate("QWMainWind", "QWMainWind", nullptr));
        actionCut->setText(QCoreApplication::translate("QWMainWind", "Cut", nullptr));
#if QT_CONFIG(tooltip)
        actionCut->setToolTip(QCoreApplication::translate("QWMainWind", "Cut", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("QWMainWind", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("QWMainWind", "Paste", nullptr));
#if QT_CONFIG(tooltip)
        actionPaste->setToolTip(QCoreApplication::translate("QWMainWind", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBlod->setText(QCoreApplication::translate("QWMainWind", "Blod", nullptr));
#if QT_CONFIG(tooltip)
        actionBlod->setToolTip(QCoreApplication::translate("QWMainWind", "Blod", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionBlod->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("QWMainWind", "Italic", nullptr));
#if QT_CONFIG(tooltip)
        actionItalic->setToolTip(QCoreApplication::translate("QWMainWind", "Italic", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnder->setText(QCoreApplication::translate("QWMainWind", "Under", nullptr));
#if QT_CONFIG(tooltip)
        actionUnder->setToolTip(QCoreApplication::translate("QWMainWind", "Under", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionUnder->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("QWMainWind", "Close", nullptr));
#if QT_CONFIG(tooltip)
        actionClose->setToolTip(QCoreApplication::translate("QWMainWind", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("QWMainWind", "Open", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen->setToolTip(QCoreApplication::translate("QWMainWind", "Open", nullptr));
#endif // QT_CONFIG(tooltip)
        actionClear->setText(QCoreApplication::translate("QWMainWind", "Clear", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("QWMainWind", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont->setText(QCoreApplication::translate("QWMainWind", "Font", nullptr));
#if QT_CONFIG(tooltip)
        actionFont->setToolTip(QCoreApplication::translate("QWMainWind", "Front", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNew->setText(QCoreApplication::translate("QWMainWind", "New", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("QWMainWind", "New", nullptr));
#endif // QT_CONFIG(tooltip)
        actionToobarLab->setText(QCoreApplication::translate("QWMainWind", "ToobarLab", nullptr));
#if QT_CONFIG(tooltip)
        actionToobarLab->setToolTip(QCoreApplication::translate("QWMainWind", "ToobarLab", nullptr));
#endif // QT_CONFIG(tooltip)
        menuFile->setTitle(QCoreApplication::translate("QWMainWind", "File", nullptr));
        menuModify->setTitle(QCoreApplication::translate("QWMainWind", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("QWMainWind", "Format", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWind: public Ui_QWMainWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWIND_H
