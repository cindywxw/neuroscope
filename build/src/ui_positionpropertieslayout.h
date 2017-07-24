/********************************************************************************
** Form generated from reading UI file 'positionpropertieslayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSITIONPROPERTIESLAYOUT_H
#define UI_POSITIONPROPERTIESLAYOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PositionPropertiesLayout
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *sampleRateLabel;
    QSpacerItem *spacer4_2;
    QLineEdit *samplingRateLineEdit;
    QSpacerItem *spacer4;
    QSpacerItem *spacer1;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QLineEdit *backgroundLineEdit;
    QComboBox *rotateComboBox;
    QLabel *heightLabel;
    QPushButton *backgroundButton;
    QLabel *widthLabel;
    QLabel *flipLabel;
    QLabel *rotateLabel;
    QSpacerItem *spacer18_2_2;
    QSpacerItem *spacer4_3;
    QCheckBox *checkBoxBackground;
    QLineEdit *heightLineEdit;
    QLabel *backgroundPixmap2;
    QSpacerItem *spacer20_2_2;
    QSpacerItem *spacer20_2;
    QSpacerItem *spacer20;
    QSpacerItem *spacer18_2;
    QComboBox *filpComboBox;
    QLineEdit *widthLineEdit;
    QLabel *backgroundLabel;

    void setupUi(QWidget *PositionPropertiesLayout)
    {
        if (PositionPropertiesLayout->objectName().isEmpty())
            PositionPropertiesLayout->setObjectName(QString::fromUtf8("PositionPropertiesLayout"));
        PositionPropertiesLayout->resize(512, 462);
        gridLayout = new QGridLayout(PositionPropertiesLayout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox1 = new QGroupBox(PositionPropertiesLayout);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        groupBox1->setMinimumSize(QSize(460, 0));
        gridLayout1 = new QGridLayout(groupBox1);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        sampleRateLabel = new QLabel(groupBox1);
        sampleRateLabel->setObjectName(QString::fromUtf8("sampleRateLabel"));
        sampleRateLabel->setWordWrap(false);

        hboxLayout->addWidget(sampleRateLabel);

        spacer4_2 = new QSpacerItem(45, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer4_2);

        samplingRateLineEdit = new QLineEdit(groupBox1);
        samplingRateLineEdit->setObjectName(QString::fromUtf8("samplingRateLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(samplingRateLineEdit->sizePolicy().hasHeightForWidth());
        samplingRateLineEdit->setSizePolicy(sizePolicy1);
        samplingRateLineEdit->setMinimumSize(QSize(100, 0));
        samplingRateLineEdit->setMaximumSize(QSize(100, 32767));

        hboxLayout->addWidget(samplingRateLineEdit);

        spacer4 = new QSpacerItem(11, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer4);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 0, 0, 1, 1);

        spacer1 = new QSpacerItem(21, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 2, 0, 1, 1);

        groupBox2 = new QGroupBox(PositionPropertiesLayout);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        sizePolicy.setHeightForWidth(groupBox2->sizePolicy().hasHeightForWidth());
        groupBox2->setSizePolicy(sizePolicy);
        groupBox2->setMinimumSize(QSize(460, 0));
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        backgroundLineEdit = new QLineEdit(groupBox2);
        backgroundLineEdit->setObjectName(QString::fromUtf8("backgroundLineEdit"));
        sizePolicy1.setHeightForWidth(backgroundLineEdit->sizePolicy().hasHeightForWidth());
        backgroundLineEdit->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(backgroundLineEdit, 2, 2, 1, 2);

        rotateComboBox = new QComboBox(groupBox2);
        rotateComboBox->setObjectName(QString::fromUtf8("rotateComboBox"));
        sizePolicy1.setHeightForWidth(rotateComboBox->sizePolicy().hasHeightForWidth());
        rotateComboBox->setSizePolicy(sizePolicy1);
        rotateComboBox->setMinimumSize(QSize(120, 0));
        rotateComboBox->setMaximumSize(QSize(120, 32767));

        gridLayout3->addWidget(rotateComboBox, 6, 2, 1, 2);

        heightLabel = new QLabel(groupBox2);
        heightLabel->setObjectName(QString::fromUtf8("heightLabel"));
        heightLabel->setWordWrap(false);

        gridLayout3->addWidget(heightLabel, 1, 0, 1, 1);

        backgroundButton = new QPushButton(groupBox2);
        backgroundButton->setObjectName(QString::fromUtf8("backgroundButton"));
        sizePolicy1.setHeightForWidth(backgroundButton->sizePolicy().hasHeightForWidth());
        backgroundButton->setSizePolicy(sizePolicy1);
        backgroundButton->setMinimumSize(QSize(60, 29));

        gridLayout3->addWidget(backgroundButton, 2, 5, 1, 1);

        widthLabel = new QLabel(groupBox2);
        widthLabel->setObjectName(QString::fromUtf8("widthLabel"));
        widthLabel->setWordWrap(false);

        gridLayout3->addWidget(widthLabel, 0, 0, 1, 1);

        flipLabel = new QLabel(groupBox2);
        flipLabel->setObjectName(QString::fromUtf8("flipLabel"));
        flipLabel->setWordWrap(false);

        gridLayout3->addWidget(flipLabel, 7, 0, 1, 1);

        rotateLabel = new QLabel(groupBox2);
        rotateLabel->setObjectName(QString::fromUtf8("rotateLabel"));
        rotateLabel->setWordWrap(false);

        gridLayout3->addWidget(rotateLabel, 6, 0, 1, 1);

        spacer18_2_2 = new QSpacerItem(16, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacer18_2_2, 6, 4, 1, 1);

        spacer4_3 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacer4_3, 7, 6, 1, 1);

        checkBoxBackground = new QCheckBox(groupBox2);
        checkBoxBackground->setObjectName(QString::fromUtf8("checkBoxBackground"));

        gridLayout3->addWidget(checkBoxBackground, 4, 0, 1, 3);

        heightLineEdit = new QLineEdit(groupBox2);
        heightLineEdit->setObjectName(QString::fromUtf8("heightLineEdit"));
        sizePolicy1.setHeightForWidth(heightLineEdit->sizePolicy().hasHeightForWidth());
        heightLineEdit->setSizePolicy(sizePolicy1);
        heightLineEdit->setMinimumSize(QSize(70, 0));
        heightLineEdit->setMaximumSize(QSize(70, 32767));

        gridLayout3->addWidget(heightLineEdit, 1, 2, 1, 1);

        backgroundPixmap2 = new QLabel(groupBox2);
        backgroundPixmap2->setObjectName(QString::fromUtf8("backgroundPixmap2"));
        sizePolicy1.setHeightForWidth(backgroundPixmap2->sizePolicy().hasHeightForWidth());
        backgroundPixmap2->setSizePolicy(sizePolicy1);
        backgroundPixmap2->setMinimumSize(QSize(100, 100));
        backgroundPixmap2->setMaximumSize(QSize(100, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        backgroundPixmap2->setPalette(palette);
        backgroundPixmap2->setAutoFillBackground(true);
        backgroundPixmap2->setScaledContents(true);
        backgroundPixmap2->setWordWrap(false);

        gridLayout3->addWidget(backgroundPixmap2, 5, 5, 4, 1);

        spacer20_2_2 = new QSpacerItem(16, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacer20_2_2, 8, 3, 1, 1);

        spacer20_2 = new QSpacerItem(16, 45, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacer20_2, 5, 3, 1, 1);

        spacer20 = new QSpacerItem(16, 28, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout3->addItem(spacer20, 3, 2, 1, 1);

        spacer18_2 = new QSpacerItem(30, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacer18_2, 6, 1, 1, 1);

        filpComboBox = new QComboBox(groupBox2);
        filpComboBox->setObjectName(QString::fromUtf8("filpComboBox"));
        sizePolicy1.setHeightForWidth(filpComboBox->sizePolicy().hasHeightForWidth());
        filpComboBox->setSizePolicy(sizePolicy1);
        filpComboBox->setMinimumSize(QSize(120, 0));
        filpComboBox->setMaximumSize(QSize(120, 32767));

        gridLayout3->addWidget(filpComboBox, 7, 2, 1, 2);

        widthLineEdit = new QLineEdit(groupBox2);
        widthLineEdit->setObjectName(QString::fromUtf8("widthLineEdit"));
        sizePolicy1.setHeightForWidth(widthLineEdit->sizePolicy().hasHeightForWidth());
        widthLineEdit->setSizePolicy(sizePolicy1);
        widthLineEdit->setMinimumSize(QSize(70, 0));
        widthLineEdit->setMaximumSize(QSize(70, 32767));

        gridLayout3->addWidget(widthLineEdit, 0, 2, 1, 1);

        backgroundLabel = new QLabel(groupBox2);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setWordWrap(false);

        gridLayout3->addWidget(backgroundLabel, 2, 0, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox2, 1, 0, 1, 1);


        retranslateUi(PositionPropertiesLayout);

        QMetaObject::connectSlotsByName(PositionPropertiesLayout);
    } // setupUi

    void retranslateUi(QWidget *PositionPropertiesLayout)
    {
        PositionPropertiesLayout->setWindowTitle(QApplication::translate("PositionPropertiesLayout", "Position Properties", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("PositionPropertiesLayout", "Position File", 0, QApplication::UnicodeUTF8));
        sampleRateLabel->setText(QApplication::translate("PositionPropertiesLayout", "Sampling rate (Hz)", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("PositionPropertiesLayout", "Video setup", 0, QApplication::UnicodeUTF8));
        rotateComboBox->clear();
        rotateComboBox->insertItems(0, QStringList()
         << QApplication::translate("PositionPropertiesLayout", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PositionPropertiesLayout", "90", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PositionPropertiesLayout", "180", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PositionPropertiesLayout", "270", 0, QApplication::UnicodeUTF8)
        );
        heightLabel->setText(QApplication::translate("PositionPropertiesLayout", "Height (pixels)", 0, QApplication::UnicodeUTF8));
        backgroundButton->setText(QString());
        widthLabel->setText(QApplication::translate("PositionPropertiesLayout", "Width (pixels)", 0, QApplication::UnicodeUTF8));
        flipLabel->setText(QApplication::translate("PositionPropertiesLayout", "Flip", 0, QApplication::UnicodeUTF8));
        rotateLabel->setText(QApplication::translate("PositionPropertiesLayout", "Rotate CCW (degrees)", 0, QApplication::UnicodeUTF8));
        checkBoxBackground->setText(QApplication::translate("PositionPropertiesLayout", "Draw trajectory", 0, QApplication::UnicodeUTF8));
        backgroundPixmap2->setText(QString());
        filpComboBox->clear();
        filpComboBox->insertItems(0, QStringList()
         << QApplication::translate("PositionPropertiesLayout", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PositionPropertiesLayout", "Vertical", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PositionPropertiesLayout", "Horizontal", 0, QApplication::UnicodeUTF8)
        );
        backgroundLabel->setText(QApplication::translate("PositionPropertiesLayout", "Background image", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PositionPropertiesLayout: public Ui_PositionPropertiesLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSITIONPROPERTIESLAYOUT_H
