/********************************************************************************
** Form generated from reading UI file 'smarttetris.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMARTTETRIS_H
#define UI_SMARTTETRIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartTetrisClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SmartTetrisClass)
    {
        if (SmartTetrisClass->objectName().isEmpty())
            SmartTetrisClass->setObjectName(QStringLiteral("SmartTetrisClass"));
        SmartTetrisClass->resize(600, 400);
        menuBar = new QMenuBar(SmartTetrisClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SmartTetrisClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SmartTetrisClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SmartTetrisClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SmartTetrisClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SmartTetrisClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SmartTetrisClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SmartTetrisClass->setStatusBar(statusBar);

        retranslateUi(SmartTetrisClass);

        QMetaObject::connectSlotsByName(SmartTetrisClass);
    } // setupUi

    void retranslateUi(QMainWindow *SmartTetrisClass)
    {
        SmartTetrisClass->setWindowTitle(QApplication::translate("SmartTetrisClass", "SmartTetris", 0));
    } // retranslateUi

};

namespace Ui {
    class SmartTetrisClass: public Ui_SmartTetrisClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMARTTETRIS_H
