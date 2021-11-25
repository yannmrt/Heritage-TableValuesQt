/********************************************************************************
** Form generated from reading UI file 'tableValuesQt.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEVALUESQT_H
#define UI_TABLEVALUESQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tableValuesQtClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *tableValuesQtClass)
    {
        if (tableValuesQtClass->objectName().isEmpty())
            tableValuesQtClass->setObjectName(QString::fromUtf8("tableValuesQtClass"));
        tableValuesQtClass->resize(725, 455);
        centralWidget = new QWidget(tableValuesQtClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tableValuesQtClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(tableValuesQtClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 725, 21));
        tableValuesQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(tableValuesQtClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        tableValuesQtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(tableValuesQtClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        tableValuesQtClass->setStatusBar(statusBar);

        retranslateUi(tableValuesQtClass);

        QMetaObject::connectSlotsByName(tableValuesQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *tableValuesQtClass)
    {
        tableValuesQtClass->setWindowTitle(QCoreApplication::translate("tableValuesQtClass", "tableValuesQt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tableValuesQtClass: public Ui_tableValuesQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEVALUESQT_H
