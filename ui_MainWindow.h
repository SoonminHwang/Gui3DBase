/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Fri Apr 15 22:35:30 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionWhiteBackground;
    QAction *actionBlackBackground;
    QAction *actionSetOutputDirectory;
    QAction *actionSetFilePattern;
    QAction *actionGrab;
    QAction *actionShot;
    QAction *actionShowHideControlPanel;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionChangeView;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitterVisualizers;
    QSplitter *splitter2D3D;
    QTabWidget *tabWidget;
    QWidget *tab3D;
    QWidget *tab2D;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *imgScrollArea;
    QWidget *imgScrollAreaContents;
    QHBoxLayout *horizontalLayout;
    QLabel *imgPlaceholder;
    QFrame *sd;
    QHBoxLayout *horizontalLayout_2;
    QLabel *imgPlaceholder2;
    QFrame *controlsPlaceholder;
    QMenuBar *menubar;
    QMenu *menuView;
    QMenu *menuGrab;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(1175, 1133);
        actionWhiteBackground = new QAction(MainWindowClass);
        actionWhiteBackground->setObjectName(QString::fromUtf8("actionWhiteBackground"));
        actionBlackBackground = new QAction(MainWindowClass);
        actionBlackBackground->setObjectName(QString::fromUtf8("actionBlackBackground"));
        actionSetOutputDirectory = new QAction(MainWindowClass);
        actionSetOutputDirectory->setObjectName(QString::fromUtf8("actionSetOutputDirectory"));
        actionSetFilePattern = new QAction(MainWindowClass);
        actionSetFilePattern->setObjectName(QString::fromUtf8("actionSetFilePattern"));
        actionGrab = new QAction(MainWindowClass);
        actionGrab->setObjectName(QString::fromUtf8("actionGrab"));
        actionGrab->setCheckable(true);
        actionShot = new QAction(MainWindowClass);
        actionShot->setObjectName(QString::fromUtf8("actionShot"));
        actionShowHideControlPanel = new QAction(MainWindowClass);
        actionShowHideControlPanel->setObjectName(QString::fromUtf8("actionShowHideControlPanel"));
        actionZoomIn = new QAction(MainWindowClass);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setEnabled(false);
        actionZoomOut = new QAction(MainWindowClass);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionZoomOut->setEnabled(false);
        actionChangeView = new QAction(MainWindowClass);
        actionChangeView->setObjectName(QString::fromUtf8("actionChangeView"));
        centralwidget = new QWidget(MainWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitterVisualizers = new QSplitter(centralwidget);
        splitterVisualizers->setObjectName(QString::fromUtf8("splitterVisualizers"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitterVisualizers->sizePolicy().hasHeightForWidth());
        splitterVisualizers->setSizePolicy(sizePolicy);
        splitterVisualizers->setOrientation(Qt::Horizontal);
        splitter2D3D = new QSplitter(splitterVisualizers);
        splitter2D3D->setObjectName(QString::fromUtf8("splitter2D3D"));
        splitter2D3D->setMinimumSize(QSize(900, 0));
        splitter2D3D->setOrientation(Qt::Vertical);
        tabWidget = new QTabWidget(splitter2D3D);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 600));
        tab3D = new QWidget();
        tab3D->setObjectName(QString::fromUtf8("tab3D"));
        tabWidget->addTab(tab3D, QString());
        tab2D = new QWidget();
        tab2D->setObjectName(QString::fromUtf8("tab2D"));
        horizontalLayout_3 = new QHBoxLayout(tab2D);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        imgScrollArea = new QScrollArea(tab2D);
        imgScrollArea->setObjectName(QString::fromUtf8("imgScrollArea"));
        imgScrollArea->setWidgetResizable(true);
        imgScrollAreaContents = new QWidget();
        imgScrollAreaContents->setObjectName(QString::fromUtf8("imgScrollAreaContents"));
        imgScrollAreaContents->setGeometry(QRect(0, 0, 98, 35));
        horizontalLayout = new QHBoxLayout(imgScrollAreaContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        imgPlaceholder = new QLabel(imgScrollAreaContents);
        imgPlaceholder->setObjectName(QString::fromUtf8("imgPlaceholder"));
        imgPlaceholder->setLineWidth(0);

        horizontalLayout->addWidget(imgPlaceholder);

        imgScrollArea->setWidget(imgScrollAreaContents);

        horizontalLayout_3->addWidget(imgScrollArea);

        tabWidget->addTab(tab2D, QString());
        splitter2D3D->addWidget(tabWidget);
        sd = new QFrame(splitter2D3D);
        sd->setObjectName(QString::fromUtf8("sd"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sd->sizePolicy().hasHeightForWidth());
        sd->setSizePolicy(sizePolicy2);
        sd->setMinimumSize(QSize(640, 480));
        sd->setMaximumSize(QSize(100000, 100000));
        sd->setFrameShape(QFrame::StyledPanel);
        sd->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(sd);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        imgPlaceholder2 = new QLabel(sd);
        imgPlaceholder2->setObjectName(QString::fromUtf8("imgPlaceholder2"));
        sizePolicy2.setHeightForWidth(imgPlaceholder2->sizePolicy().hasHeightForWidth());
        imgPlaceholder2->setSizePolicy(sizePolicy2);
        imgPlaceholder2->setMinimumSize(QSize(640, 480));

        horizontalLayout_2->addWidget(imgPlaceholder2);

        splitter2D3D->addWidget(sd);
        splitterVisualizers->addWidget(splitter2D3D);
        controlsPlaceholder = new QFrame(splitterVisualizers);
        controlsPlaceholder->setObjectName(QString::fromUtf8("controlsPlaceholder"));
        controlsPlaceholder->setFrameShape(QFrame::NoFrame);
        controlsPlaceholder->setFrameShadow(QFrame::Raised);
        controlsPlaceholder->setLineWidth(1);
        splitterVisualizers->addWidget(controlsPlaceholder);

        verticalLayout->addWidget(splitterVisualizers);

        MainWindowClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1175, 25));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuGrab = new QMenu(menubar);
        menuGrab->setObjectName(QString::fromUtf8("menuGrab"));
        MainWindowClass->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowClass->setStatusBar(statusbar);

        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuGrab->menuAction());
        menuView->addAction(actionChangeView);
        menuView->addAction(actionShowHideControlPanel);
        menuView->addSeparator();
        menuView->addAction(actionWhiteBackground);
        menuView->addAction(actionBlackBackground);
        menuView->addSeparator();
        menuView->addAction(actionZoomIn);
        menuView->addAction(actionZoomOut);
        menuGrab->addAction(actionSetOutputDirectory);
        menuGrab->addAction(actionSetFilePattern);
        menuGrab->addSeparator();
        menuGrab->addAction(actionGrab);
        menuGrab->addAction(actionShot);

        retranslateUi(MainWindowClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionWhiteBackground->setText(QApplication::translate("MainWindowClass", "Set White Background", 0, QApplication::UnicodeUTF8));
        actionBlackBackground->setText(QApplication::translate("MainWindowClass", "Set Black Background", 0, QApplication::UnicodeUTF8));
        actionSetOutputDirectory->setText(QApplication::translate("MainWindowClass", "Set Output Directory", 0, QApplication::UnicodeUTF8));
        actionSetFilePattern->setText(QApplication::translate("MainWindowClass", "Set File Pattern", 0, QApplication::UnicodeUTF8));
        actionGrab->setText(QApplication::translate("MainWindowClass", "Grab", 0, QApplication::UnicodeUTF8));
        actionGrab->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionShot->setText(QApplication::translate("MainWindowClass", "Shot", 0, QApplication::UnicodeUTF8));
        actionShot->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionShowHideControlPanel->setText(QApplication::translate("MainWindowClass", "Show/Hide Control Panel", 0, QApplication::UnicodeUTF8));
        actionShowHideControlPanel->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionZoomIn->setText(QApplication::translate("MainWindowClass", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoomIn->setShortcut(QApplication::translate("MainWindowClass", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionZoomOut->setText(QApplication::translate("MainWindowClass", "Zoom Out", 0, QApplication::UnicodeUTF8));
        actionZoomOut->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        actionChangeView->setText(QApplication::translate("MainWindowClass", "Change View", 0, QApplication::UnicodeUTF8));
        actionChangeView->setShortcut(QApplication::translate("MainWindowClass", "Ctrl+Tab", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab3D), QApplication::translate("MainWindowClass", "3D View", 0, QApplication::UnicodeUTF8));
        imgPlaceholder->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab2D), QApplication::translate("MainWindowClass", "Image View", 0, QApplication::UnicodeUTF8));
        imgPlaceholder2->setText(QString());
        menuView->setTitle(QApplication::translate("MainWindowClass", "&View", 0, QApplication::UnicodeUTF8));
        menuGrab->setTitle(QApplication::translate("MainWindowClass", "&Grab", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
