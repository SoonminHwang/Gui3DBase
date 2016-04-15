/********************************************************************************
** Form generated from reading UI file 'VisualizerPassat.ui'
**
** Created: Fri Apr 15 22:35:30 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALIZERPASSAT_H
#define UI_VISUALIZERPASSAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisualizerPassatClass
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *cbVeloTurn;

    void setupUi(QWidget *VisualizerPassatClass)
    {
        if (VisualizerPassatClass->objectName().isEmpty())
            VisualizerPassatClass->setObjectName(QString::fromUtf8("VisualizerPassatClass"));
        VisualizerPassatClass->resize(306, 29);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(VisualizerPassatClass->sizePolicy().hasHeightForWidth());
        VisualizerPassatClass->setSizePolicy(sizePolicy);
        VisualizerPassatClass->setMinimumSize(QSize(0, 0));
        VisualizerPassatClass->setBaseSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(VisualizerPassatClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbVeloTurn = new QCheckBox(VisualizerPassatClass);
        cbVeloTurn->setObjectName(QString::fromUtf8("cbVeloTurn"));

        verticalLayout->addWidget(cbVeloTurn);


        retranslateUi(VisualizerPassatClass);

        QMetaObject::connectSlotsByName(VisualizerPassatClass);
    } // setupUi

    void retranslateUi(QWidget *VisualizerPassatClass)
    {
        VisualizerPassatClass->setWindowTitle(QApplication::translate("VisualizerPassatClass", "Lidar Image Processing", 0, QApplication::UnicodeUTF8));
        cbVeloTurn->setText(QApplication::translate("VisualizerPassatClass", "Turn Velodyne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisualizerPassatClass: public Ui_VisualizerPassatClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALIZERPASSAT_H
