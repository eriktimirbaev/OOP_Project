/********************************************************************************
** Form generated from reading UI file 'timirbaevmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMIRBAEVMAINWINDOW_H
#define UI_TIMIRBAEVMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimirbaevMainWindow
{
public:
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionClear;
    QAction *actionEdit;
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TimirbaevMainWindow)
    {
        if (TimirbaevMainWindow->objectName().isEmpty())
            TimirbaevMainWindow->setObjectName("TimirbaevMainWindow");
        TimirbaevMainWindow->resize(802, 600);
        actionLoad = new QAction(TimirbaevMainWindow);
        actionLoad->setObjectName("actionLoad");
        actionSave = new QAction(TimirbaevMainWindow);
        actionSave->setObjectName("actionSave");
        actionClear = new QAction(TimirbaevMainWindow);
        actionClear->setObjectName("actionClear");
        actionEdit = new QAction(TimirbaevMainWindow);
        actionEdit->setObjectName("actionEdit");
        centralwidget = new QWidget(TimirbaevMainWindow);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 10, 781, 341));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 779, 339));
        scrollArea->setWidget(scrollAreaWidgetContents);
        TimirbaevMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TimirbaevMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 802, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        TimirbaevMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TimirbaevMainWindow);
        statusbar->setObjectName("statusbar");
        TimirbaevMainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionLoad);
        menu->addAction(actionSave);
        menu->addAction(actionClear);
        menu->addAction(actionEdit);

        retranslateUi(TimirbaevMainWindow);

        QMetaObject::connectSlotsByName(TimirbaevMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TimirbaevMainWindow)
    {
        TimirbaevMainWindow->setWindowTitle(QCoreApplication::translate("TimirbaevMainWindow", "TimirbaevMainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("TimirbaevMainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        actionSave->setText(QCoreApplication::translate("TimirbaevMainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        actionClear->setText(QCoreApplication::translate("TimirbaevMainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        actionEdit->setText(QCoreApplication::translate("TimirbaevMainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("TimirbaevMainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimirbaevMainWindow: public Ui_TimirbaevMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMIRBAEVMAINWINDOW_H
