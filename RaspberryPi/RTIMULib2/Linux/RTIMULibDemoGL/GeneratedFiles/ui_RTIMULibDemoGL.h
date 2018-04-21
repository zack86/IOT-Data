/********************************************************************************
** Form generated from reading UI file 'RTIMULibDemoGL.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTIMULIBDEMOGL_H
#define UI_RTIMULIBDEMOGL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RTIMULibDemoGLClass
{
public:
    QAction *actionSelectIMU;
    QAction *actionSelectFusionAlgorithm;
    QAction *actionCalibrateMagnetometers;
    QAction *actionCalibrateAccelerometers;
    QAction *actionExit;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuActions;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *RTIMULibDemoGLClass)
    {
        if (RTIMULibDemoGLClass->objectName().isEmpty())
            RTIMULibDemoGLClass->setObjectName(QStringLiteral("RTIMULibDemoGLClass"));
        RTIMULibDemoGLClass->resize(658, 562);
        RTIMULibDemoGLClass->setMinimumSize(QSize(0, 0));
        actionSelectIMU = new QAction(RTIMULibDemoGLClass);
        actionSelectIMU->setObjectName(QStringLiteral("actionSelectIMU"));
        actionSelectFusionAlgorithm = new QAction(RTIMULibDemoGLClass);
        actionSelectFusionAlgorithm->setObjectName(QStringLiteral("actionSelectFusionAlgorithm"));
        actionCalibrateMagnetometers = new QAction(RTIMULibDemoGLClass);
        actionCalibrateMagnetometers->setObjectName(QStringLiteral("actionCalibrateMagnetometers"));
        actionCalibrateAccelerometers = new QAction(RTIMULibDemoGLClass);
        actionCalibrateAccelerometers->setObjectName(QStringLiteral("actionCalibrateAccelerometers"));
        actionExit = new QAction(RTIMULibDemoGLClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(RTIMULibDemoGLClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(400, 300));
        RTIMULibDemoGLClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RTIMULibDemoGLClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 25));
        menuActions = new QMenu(menuBar);
        menuActions->setObjectName(QStringLiteral("menuActions"));
        RTIMULibDemoGLClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(RTIMULibDemoGLClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RTIMULibDemoGLClass->setStatusBar(statusBar);
        toolBar = new QToolBar(RTIMULibDemoGLClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        RTIMULibDemoGLClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuActions->menuAction());
        menuActions->addAction(actionSelectFusionAlgorithm);
        menuActions->addAction(actionSelectIMU);
        menuActions->addAction(actionCalibrateAccelerometers);
        menuActions->addAction(actionCalibrateMagnetometers);
        menuActions->addAction(actionExit);
        toolBar->addAction(actionSelectIMU);
        toolBar->addSeparator();
        toolBar->addAction(actionSelectFusionAlgorithm);
        toolBar->addSeparator();
        toolBar->addAction(actionCalibrateAccelerometers);
        toolBar->addSeparator();
        toolBar->addAction(actionCalibrateMagnetometers);
        toolBar->addSeparator();
        toolBar->addAction(actionExit);
        toolBar->addSeparator();

        retranslateUi(RTIMULibDemoGLClass);

        QMetaObject::connectSlotsByName(RTIMULibDemoGLClass);
    } // setupUi

    void retranslateUi(QMainWindow *RTIMULibDemoGLClass)
    {
        RTIMULibDemoGLClass->setWindowTitle(QApplication::translate("RTIMULibDemoGLClass", "RTIMULibDemoGL", 0));
        actionSelectIMU->setText(QApplication::translate("RTIMULibDemoGLClass", "Select IMU", 0));
        actionSelectFusionAlgorithm->setText(QApplication::translate("RTIMULibDemoGLClass", "Select fusion algorithm", 0));
        actionCalibrateMagnetometers->setText(QApplication::translate("RTIMULibDemoGLClass", "Calibrate magnetometers", 0));
        actionCalibrateAccelerometers->setText(QApplication::translate("RTIMULibDemoGLClass", "Calibrate accelerometers", 0));
        actionExit->setText(QApplication::translate("RTIMULibDemoGLClass", "Exit", 0));
        menuActions->setTitle(QApplication::translate("RTIMULibDemoGLClass", "Actions", 0));
        toolBar->setWindowTitle(QApplication::translate("RTIMULibDemoGLClass", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class RTIMULibDemoGLClass: public Ui_RTIMULibDemoGLClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTIMULIBDEMOGL_H
