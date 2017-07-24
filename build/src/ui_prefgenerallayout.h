/********************************************************************************
** Form generated from reading UI file 'prefgenerallayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFGENERALLAYOUT_H
#define UI_PREFGENERALLAYOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>
#include <qcolorbutton.h>

QT_BEGIN_NAMESPACE

class Ui_PrefGeneralLayout
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer3;
    QGroupBox *groupBox3;
    QGridLayout *gridLayout1;
    QLabel *textLabel2;
    QLabel *textLabel1_2;
    QLabel *textLabel2_2;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel1;
    QColorButton *backgroundColorButton;
    QCheckBox *headerCheckBox;
    QSpinBox *clusterPositionSpinBox;
    QSpinBox *eventPositionSpinBox;
    QLabel *textLabel1_2_2;
    QCheckBox *useWhiteColorPrinting;

    void setupUi(QWidget *PrefGeneralLayout)
    {
        if (PrefGeneralLayout->objectName().isEmpty())
            PrefGeneralLayout->setObjectName(QString::fromUtf8("PrefGeneralLayout"));
        PrefGeneralLayout->resize(372, 260);
        gridLayout = new QGridLayout(PrefGeneralLayout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacer3 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer3, 1, 0, 1, 1);

        groupBox3 = new QGroupBox(PrefGeneralLayout);
        groupBox3->setObjectName(QString::fromUtf8("groupBox3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox3->sizePolicy().hasHeightForWidth());
        groupBox3->setSizePolicy(sizePolicy);
        groupBox3->setMinimumSize(QSize(350, 0));
        gridLayout1 = new QGridLayout(groupBox3);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        textLabel2 = new QLabel(groupBox3);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy1);
        textLabel2->setWordWrap(false);

        gridLayout1->addWidget(textLabel2, 3, 2, 1, 1);

        textLabel1_2 = new QLabel(groupBox3);
        textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textLabel1_2->sizePolicy().hasHeightForWidth());
        textLabel1_2->setSizePolicy(sizePolicy2);
        textLabel1_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2, 3, 0, 1, 1);

        textLabel2_2 = new QLabel(groupBox3);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        sizePolicy1.setHeightForWidth(textLabel2_2->sizePolicy().hasHeightForWidth());
        textLabel2_2->setSizePolicy(sizePolicy1);
        textLabel2_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel2_2, 4, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel1 = new QLabel(groupBox3);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        hboxLayout->addWidget(textLabel1);

        backgroundColorButton = new QColorButton(groupBox3);
        backgroundColorButton->setObjectName(QString::fromUtf8("backgroundColorButton"));
        sizePolicy.setHeightForWidth(backgroundColorButton->sizePolicy().hasHeightForWidth());
        backgroundColorButton->setSizePolicy(sizePolicy);
        backgroundColorButton->setMinimumSize(QSize(200, 30));

        hboxLayout->addWidget(backgroundColorButton);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 3);

        headerCheckBox = new QCheckBox(groupBox3);
        headerCheckBox->setObjectName(QString::fromUtf8("headerCheckBox"));

        gridLayout1->addWidget(headerCheckBox, 1, 0, 1, 3);

        clusterPositionSpinBox = new QSpinBox(groupBox3);
        clusterPositionSpinBox->setObjectName(QString::fromUtf8("clusterPositionSpinBox"));
        clusterPositionSpinBox->setMinimumSize(QSize(48, 0));
        clusterPositionSpinBox->setMaximumSize(QSize(50, 32767));
        clusterPositionSpinBox->setWrapping(true);
        clusterPositionSpinBox->setMinimum(1);
        clusterPositionSpinBox->setMaximum(100);
        clusterPositionSpinBox->setValue(25);

        gridLayout1->addWidget(clusterPositionSpinBox, 4, 1, 1, 1);

        eventPositionSpinBox = new QSpinBox(groupBox3);
        eventPositionSpinBox->setObjectName(QString::fromUtf8("eventPositionSpinBox"));
        eventPositionSpinBox->setMinimumSize(QSize(48, 0));
        eventPositionSpinBox->setMaximumSize(QSize(50, 32767));
        eventPositionSpinBox->setWrapping(true);
        eventPositionSpinBox->setMinimum(1);
        eventPositionSpinBox->setMaximum(100);
        eventPositionSpinBox->setValue(25);

        gridLayout1->addWidget(eventPositionSpinBox, 3, 1, 1, 1);

        textLabel1_2_2 = new QLabel(groupBox3);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        sizePolicy2.setHeightForWidth(textLabel1_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_2_2->setSizePolicy(sizePolicy2);
        textLabel1_2_2->setWordWrap(false);

        gridLayout1->addWidget(textLabel1_2_2, 4, 0, 1, 1);

        useWhiteColorPrinting = new QCheckBox(groupBox3);
        useWhiteColorPrinting->setObjectName(QString::fromUtf8("useWhiteColorPrinting"));

        gridLayout1->addWidget(useWhiteColorPrinting, 5, 0, 1, 3);


        gridLayout->addWidget(groupBox3, 0, 0, 1, 1);


        retranslateUi(PrefGeneralLayout);

        QMetaObject::connectSlotsByName(PrefGeneralLayout);
    } // setupUi

    void retranslateUi(QWidget *PrefGeneralLayout)
    {
        PrefGeneralLayout->setWindowTitle(QApplication::translate("PrefGeneralLayout", "General", 0, QApplication::UnicodeUTF8));
        groupBox3->setTitle(QApplication::translate("PrefGeneralLayout", "Miscellaneous", 0, QApplication::UnicodeUTF8));
        textLabel2->setText(QApplication::translate("PrefGeneralLayout", "% of the view", 0, QApplication::UnicodeUTF8));
        textLabel1_2->setText(QApplication::translate("PrefGeneralLayout", "Align events at", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("PrefGeneralLayout", "% of the view", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("PrefGeneralLayout", "Background color", 0, QApplication::UnicodeUTF8));
        backgroundColorButton->setText(QString());
        headerCheckBox->setText(QApplication::translate("PrefGeneralLayout", "Display labels in the palette headers", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2->setText(QApplication::translate("PrefGeneralLayout", "Align units at", 0, QApplication::UnicodeUTF8));
        useWhiteColorPrinting->setText(QApplication::translate("PrefGeneralLayout", "Use white background when printing", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrefGeneralLayout: public Ui_PrefGeneralLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFGENERALLAYOUT_H
