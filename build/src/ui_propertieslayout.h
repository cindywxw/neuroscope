/********************************************************************************
** Form generated from reading UI file 'propertieslayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTIESLAYOUT_H
#define UI_PROPERTIESLAYOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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

class Ui_PropertiesLayout
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox1_2;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel4_2_2_4;
    QSpacerItem *spacer10_2;
    QLineEdit *samplingRateLineEdit;
    QSpacerItem *spacer11;
    QSpacerItem *spacer1;
    QGroupBox *groupBox2_2;
    QGridLayout *gridLayout2;
    QGridLayout *gridLayout3;
    QLabel *textLabel4_2_3;
    QLabel *textLabel4_2;
    QLineEdit *voltageRangeLineEdit;
    QLineEdit *offsetLineEdit;
    QSpacerItem *spacer10;
    QLabel *textLabel1_2_2_2;
    QSpacerItem *spacer6;
    QLineEdit *amplificationLineEdit;
    QComboBox *resolutionComboBox;
    QLabel *textLabel4_2_3_3;
    QLabel *textLabel4_2_3_2;
    QLabel *textLabel4_2_2_2;
    QLineEdit *nbChannelsLineEdit;
    QLineEdit *asSamplingRateLineEdit;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout4;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel4_2_2;
    QSpacerItem *spacer10_2_2;
    QLineEdit *screenGainLineEdit;
    QSpacerItem *spacer11_2;
    QHBoxLayout *hboxLayout2;
    QLabel *backgroundLabel;
    QSpacerItem *spacer10_2_2_2;
    QLineEdit *traceBackgroundLineEdit;
    QPushButton *traceBackgroundButton;
    QSpacerItem *spacer10_2_2_2_2;

    void setupUi(QWidget *PropertiesLayout)
    {
        if (PropertiesLayout->objectName().isEmpty())
            PropertiesLayout->setObjectName(QString::fromUtf8("PropertiesLayout"));
        PropertiesLayout->resize(492, 459);
        gridLayout = new QGridLayout(PropertiesLayout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox1_2 = new QGroupBox(PropertiesLayout);
        groupBox1_2->setObjectName(QString::fromUtf8("groupBox1_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox1_2->sizePolicy().hasHeightForWidth());
        groupBox1_2->setSizePolicy(sizePolicy);
        groupBox1_2->setMinimumSize(QSize(300, 0));
        groupBox1_2->setMaximumSize(QSize(32767, 32767));
        gridLayout1 = new QGridLayout(groupBox1_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textLabel4_2_2_4 = new QLabel(groupBox1_2);
        textLabel4_2_2_4->setObjectName(QString::fromUtf8("textLabel4_2_2_4"));
        textLabel4_2_2_4->setWordWrap(false);

        hboxLayout->addWidget(textLabel4_2_2_4);

        spacer10_2 = new QSpacerItem(20, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer10_2);

        samplingRateLineEdit = new QLineEdit(groupBox1_2);
        samplingRateLineEdit->setObjectName(QString::fromUtf8("samplingRateLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(samplingRateLineEdit->sizePolicy().hasHeightForWidth());
        samplingRateLineEdit->setSizePolicy(sizePolicy1);
        samplingRateLineEdit->setMinimumSize(QSize(60, 20));
        samplingRateLineEdit->setMaximumSize(QSize(60, 32767));

        hboxLayout->addWidget(samplingRateLineEdit);

        spacer11 = new QSpacerItem(93, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer11);


        gridLayout1->addLayout(hboxLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox1_2, 1, 0, 1, 1);

        spacer1 = new QSpacerItem(21, 12, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 3, 0, 1, 1);

        groupBox2_2 = new QGroupBox(PropertiesLayout);
        groupBox2_2->setObjectName(QString::fromUtf8("groupBox2_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox2_2->sizePolicy().hasHeightForWidth());
        groupBox2_2->setSizePolicy(sizePolicy2);
        groupBox2_2->setMinimumSize(QSize(350, 0));
        groupBox2_2->setMaximumSize(QSize(32767, 32767));
        gridLayout2 = new QGridLayout(groupBox2_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(6);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        textLabel4_2_3 = new QLabel(groupBox2_2);
        textLabel4_2_3->setObjectName(QString::fromUtf8("textLabel4_2_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textLabel4_2_3->sizePolicy().hasHeightForWidth());
        textLabel4_2_3->setSizePolicy(sizePolicy3);
        textLabel4_2_3->setWordWrap(false);

        gridLayout3->addWidget(textLabel4_2_3, 3, 0, 1, 1);

        textLabel4_2 = new QLabel(groupBox2_2);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
        sizePolicy3.setHeightForWidth(textLabel4_2->sizePolicy().hasHeightForWidth());
        textLabel4_2->setSizePolicy(sizePolicy3);
        textLabel4_2->setWordWrap(false);

        gridLayout3->addWidget(textLabel4_2, 0, 0, 1, 1);

        voltageRangeLineEdit = new QLineEdit(groupBox2_2);
        voltageRangeLineEdit->setObjectName(QString::fromUtf8("voltageRangeLineEdit"));
        sizePolicy1.setHeightForWidth(voltageRangeLineEdit->sizePolicy().hasHeightForWidth());
        voltageRangeLineEdit->setSizePolicy(sizePolicy1);
        voltageRangeLineEdit->setMinimumSize(QSize(40, 0));
        voltageRangeLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout3->addWidget(voltageRangeLineEdit, 4, 2, 1, 1);

        offsetLineEdit = new QLineEdit(groupBox2_2);
        offsetLineEdit->setObjectName(QString::fromUtf8("offsetLineEdit"));
        sizePolicy1.setHeightForWidth(offsetLineEdit->sizePolicy().hasHeightForWidth());
        offsetLineEdit->setSizePolicy(sizePolicy1);
        offsetLineEdit->setMinimumSize(QSize(40, 0));
        offsetLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout3->addWidget(offsetLineEdit, 3, 2, 1, 1);

        spacer10 = new QSpacerItem(65, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout3->addItem(spacer10, 2, 1, 1, 1);

        textLabel1_2_2_2 = new QLabel(groupBox2_2);
        textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
        sizePolicy3.setHeightForWidth(textLabel1_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_2_2_2->setSizePolicy(sizePolicy3);
        textLabel1_2_2_2->setWordWrap(false);

        gridLayout3->addWidget(textLabel1_2_2_2, 1, 0, 1, 1);

        spacer6 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacer6, 2, 3, 1, 1);

        amplificationLineEdit = new QLineEdit(groupBox2_2);
        amplificationLineEdit->setObjectName(QString::fromUtf8("amplificationLineEdit"));
        sizePolicy1.setHeightForWidth(amplificationLineEdit->sizePolicy().hasHeightForWidth());
        amplificationLineEdit->setSizePolicy(sizePolicy1);
        amplificationLineEdit->setMinimumSize(QSize(40, 0));
        amplificationLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout3->addWidget(amplificationLineEdit, 5, 2, 1, 1);

        resolutionComboBox = new QComboBox(groupBox2_2);
        resolutionComboBox->setObjectName(QString::fromUtf8("resolutionComboBox"));
        sizePolicy1.setHeightForWidth(resolutionComboBox->sizePolicy().hasHeightForWidth());
        resolutionComboBox->setSizePolicy(sizePolicy1);
        resolutionComboBox->setMinimumSize(QSize(60, 0));
        resolutionComboBox->setMaximumSize(QSize(80, 32767));

        gridLayout3->addWidget(resolutionComboBox, 2, 2, 1, 1);

        textLabel4_2_3_3 = new QLabel(groupBox2_2);
        textLabel4_2_3_3->setObjectName(QString::fromUtf8("textLabel4_2_3_3"));
        sizePolicy3.setHeightForWidth(textLabel4_2_3_3->sizePolicy().hasHeightForWidth());
        textLabel4_2_3_3->setSizePolicy(sizePolicy3);
        textLabel4_2_3_3->setWordWrap(false);

        gridLayout3->addWidget(textLabel4_2_3_3, 5, 0, 1, 1);

        textLabel4_2_3_2 = new QLabel(groupBox2_2);
        textLabel4_2_3_2->setObjectName(QString::fromUtf8("textLabel4_2_3_2"));
        sizePolicy3.setHeightForWidth(textLabel4_2_3_2->sizePolicy().hasHeightForWidth());
        textLabel4_2_3_2->setSizePolicy(sizePolicy3);
        textLabel4_2_3_2->setWordWrap(false);

        gridLayout3->addWidget(textLabel4_2_3_2, 4, 0, 1, 1);

        textLabel4_2_2_2 = new QLabel(groupBox2_2);
        textLabel4_2_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2_2"));
        sizePolicy3.setHeightForWidth(textLabel4_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel4_2_2_2->setSizePolicy(sizePolicy3);
        textLabel4_2_2_2->setWordWrap(false);

        gridLayout3->addWidget(textLabel4_2_2_2, 2, 0, 1, 1);

        nbChannelsLineEdit = new QLineEdit(groupBox2_2);
        nbChannelsLineEdit->setObjectName(QString::fromUtf8("nbChannelsLineEdit"));
        sizePolicy1.setHeightForWidth(nbChannelsLineEdit->sizePolicy().hasHeightForWidth());
        nbChannelsLineEdit->setSizePolicy(sizePolicy1);
        nbChannelsLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout3->addWidget(nbChannelsLineEdit, 0, 2, 1, 1);

        asSamplingRateLineEdit = new QLineEdit(groupBox2_2);
        asSamplingRateLineEdit->setObjectName(QString::fromUtf8("asSamplingRateLineEdit"));
        sizePolicy1.setHeightForWidth(asSamplingRateLineEdit->sizePolicy().hasHeightForWidth());
        asSamplingRateLineEdit->setSizePolicy(sizePolicy1);
        asSamplingRateLineEdit->setMinimumSize(QSize(40, 20));
        asSamplingRateLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout3->addWidget(asSamplingRateLineEdit, 1, 2, 1, 1);


        gridLayout2->addLayout(gridLayout3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox2_2, 0, 0, 1, 1);

        groupBox1 = new QGroupBox(PropertiesLayout);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        groupBox1->setMinimumSize(QSize(300, 0));
        groupBox1->setMaximumSize(QSize(32767, 32767));
        gridLayout4 = new QGridLayout(groupBox1);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(11, 11, 11, 11);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        textLabel4_2_2 = new QLabel(groupBox1);
        textLabel4_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2"));
        textLabel4_2_2->setWordWrap(false);

        hboxLayout1->addWidget(textLabel4_2_2);

        spacer10_2_2 = new QSpacerItem(20, 10, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer10_2_2);

        screenGainLineEdit = new QLineEdit(groupBox1);
        screenGainLineEdit->setObjectName(QString::fromUtf8("screenGainLineEdit"));
        sizePolicy1.setHeightForWidth(screenGainLineEdit->sizePolicy().hasHeightForWidth());
        screenGainLineEdit->setSizePolicy(sizePolicy1);
        screenGainLineEdit->setMinimumSize(QSize(60, 20));
        screenGainLineEdit->setMaximumSize(QSize(60, 32767));

        hboxLayout1->addWidget(screenGainLineEdit);

        spacer11_2 = new QSpacerItem(93, 21, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacer11_2);


        gridLayout4->addLayout(hboxLayout1, 0, 0, 1, 1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        backgroundLabel = new QLabel(groupBox1);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setWordWrap(false);

        hboxLayout2->addWidget(backgroundLabel);

        spacer10_2_2_2 = new QSpacerItem(37, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer10_2_2_2);

        traceBackgroundLineEdit = new QLineEdit(groupBox1);
        traceBackgroundLineEdit->setObjectName(QString::fromUtf8("traceBackgroundLineEdit"));
        sizePolicy1.setHeightForWidth(traceBackgroundLineEdit->sizePolicy().hasHeightForWidth());
        traceBackgroundLineEdit->setSizePolicy(sizePolicy1);
        traceBackgroundLineEdit->setMinimumSize(QSize(200, 20));

        hboxLayout2->addWidget(traceBackgroundLineEdit);

        traceBackgroundButton = new QPushButton(groupBox1);
        traceBackgroundButton->setObjectName(QString::fromUtf8("traceBackgroundButton"));
        sizePolicy1.setHeightForWidth(traceBackgroundButton->sizePolicy().hasHeightForWidth());
        traceBackgroundButton->setSizePolicy(sizePolicy1);
        traceBackgroundButton->setMinimumSize(QSize(60, 29));

        hboxLayout2->addWidget(traceBackgroundButton);

        spacer10_2_2_2_2 = new QSpacerItem(16, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacer10_2_2_2_2);


        gridLayout4->addLayout(hboxLayout2, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 2, 0, 1, 1);

        QWidget::setTabOrder(traceBackgroundButton, voltageRangeLineEdit);
        QWidget::setTabOrder(voltageRangeLineEdit, offsetLineEdit);
        QWidget::setTabOrder(offsetLineEdit, amplificationLineEdit);
        QWidget::setTabOrder(amplificationLineEdit, resolutionComboBox);
        QWidget::setTabOrder(resolutionComboBox, nbChannelsLineEdit);
        QWidget::setTabOrder(nbChannelsLineEdit, asSamplingRateLineEdit);
        QWidget::setTabOrder(asSamplingRateLineEdit, samplingRateLineEdit);
        QWidget::setTabOrder(samplingRateLineEdit, screenGainLineEdit);
        QWidget::setTabOrder(screenGainLineEdit, traceBackgroundLineEdit);

        retranslateUi(PropertiesLayout);

        QMetaObject::connectSlotsByName(PropertiesLayout);
    } // setupUi

    void retranslateUi(QWidget *PropertiesLayout)
    {
        PropertiesLayout->setWindowTitle(QApplication::translate("PropertiesLayout", "Channel Properties", 0, QApplication::UnicodeUTF8));
        groupBox1_2->setTitle(QApplication::translate("PropertiesLayout", "Sampling Rate for this File", 0, QApplication::UnicodeUTF8));
        textLabel4_2_2_4->setText(QApplication::translate("PropertiesLayout", "Sampling rate (Hz)", 0, QApplication::UnicodeUTF8));
        groupBox2_2->setTitle(QApplication::translate("PropertiesLayout", "Acquisition System", 0, QApplication::UnicodeUTF8));
        textLabel4_2_3->setText(QApplication::translate("PropertiesLayout", "Initial offset", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("PropertiesLayout", "Number of channels", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2->setText(QApplication::translate("PropertiesLayout", "Sampling rate (Hz)", 0, QApplication::UnicodeUTF8));
        resolutionComboBox->clear();
        resolutionComboBox->insertItems(0, QStringList()
         << QApplication::translate("PropertiesLayout", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PropertiesLayout", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PropertiesLayout", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PropertiesLayout", "32", 0, QApplication::UnicodeUTF8)
        );
        textLabel4_2_3_3->setText(QApplication::translate("PropertiesLayout", "Amplification", 0, QApplication::UnicodeUTF8));
        textLabel4_2_3_2->setText(QApplication::translate("PropertiesLayout", "Voltage range (V)", 0, QApplication::UnicodeUTF8));
        textLabel4_2_2_2->setText(QApplication::translate("PropertiesLayout", "Resolution (bits)", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("PropertiesLayout", "Miscellaneous", 0, QApplication::UnicodeUTF8));
        textLabel4_2_2->setText(QApplication::translate("PropertiesLayout", "Screen gain (mV/cm)", 0, QApplication::UnicodeUTF8));
        backgroundLabel->setText(QApplication::translate("PropertiesLayout", "Background image", 0, QApplication::UnicodeUTF8));
        traceBackgroundButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PropertiesLayout: public Ui_PropertiesLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTIESLAYOUT_H
