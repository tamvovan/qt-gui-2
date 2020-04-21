/********************************************************************************
** Form generated from reading UI file 'demoqtgui2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOQTGUI2_H
#define UI_DEMOQTGUI2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoqtgui2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demoqtgui2Class)
    {
        if (demoqtgui2Class->objectName().isEmpty())
            demoqtgui2Class->setObjectName(QString::fromUtf8("demoqtgui2Class"));
        demoqtgui2Class->resize(600, 400);
        menuBar = new QMenuBar(demoqtgui2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        demoqtgui2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demoqtgui2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        demoqtgui2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(demoqtgui2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        demoqtgui2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(demoqtgui2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        demoqtgui2Class->setStatusBar(statusBar);

        retranslateUi(demoqtgui2Class);

        QMetaObject::connectSlotsByName(demoqtgui2Class);
    } // setupUi

    void retranslateUi(QMainWindow *demoqtgui2Class)
    {
        demoqtgui2Class->setWindowTitle(QCoreApplication::translate("demoqtgui2Class", "demoqtgui2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demoqtgui2Class: public Ui_demoqtgui2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOQTGUI2_H
