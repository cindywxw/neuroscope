/********************************************************************************
** Form generated from reading UI file 'prefdefaultslayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFDEFAULTSLAYOUT_H
#define UI_PREFDEFAULTSLAYOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrefDefaultsLayout
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox2_2;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
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
    QLineEdit *datSamplingRateLineEdit;
    QSpacerItem *spacer1;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout3;
    QGridLayout *gridLayout4;
    QGridLayout *gridLayout5;
    QSpacerItem *spacer10_2_2_2_2;
    QSpacerItem *spacer10_2_2_2;
    QLabel *textLabel4_2_2;
    QSpacerItem *spacer11;
    QPushButton *traceBackgroundButton;
    QLineEdit *traceBackgroundLineEdit;
    QLabel *backgroundLabel;
    QLineEdit *screenGainLineEdit;
    QLineEdit *eegSamplingRateLineEdit;
    QLabel *textLabel1_2_2;
    QSpacerItem *spacer7;
    QSpacerItem *spacer1_2;

    void setupUi(QWidget *PrefDefaultsLayout)
    {
        if (PrefDefaultsLayout->objectName().isEmpty())
            PrefDefaultsLayout->setObjectName(QString::fromUtf8("PrefDefaultsLayout"));
        PrefDefaultsLayout->resize(521, 451);
        gridLayout = new QGridLayout(PrefDefaultsLayout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox2_2 = new QGroupBox(PrefDefaultsLayout);
        groupBox2_2->setObjectName(QString::fromUtf8("groupBox2_2"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox2_2->sizePolicy().hasHeightForWidth());
        groupBox2_2->setSizePolicy(sizePolicy);
        groupBox2_2->setMinimumSize(QSize(350, 0));
        groupBox2_2->setMaximumSize(QSize(32767, 32767));
        gridLayout1 = new QGridLayout(groupBox2_2);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        textLabel4_2_3 = new QLabel(groupBox2_2);
        textLabel4_2_3->setObjectName(QString::fromUtf8("textLabel4_2_3"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textLabel4_2_3->sizePolicy().hasHeightForWidth());
        textLabel4_2_3->setSizePolicy(sizePolicy1);
        textLabel4_2_3->setWordWrap(false);

        gridLayout2->addWidget(textLabel4_2_3, 3, 0, 1, 1);

        textLabel4_2 = new QLabel(groupBox2_2);
        textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
        sizePolicy1.setHeightForWidth(textLabel4_2->sizePolicy().hasHeightForWidth());
        textLabel4_2->setSizePolicy(sizePolicy1);
        textLabel4_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel4_2, 0, 0, 1, 1);

        voltageRangeLineEdit = new QLineEdit(groupBox2_2);
        voltageRangeLineEdit->setObjectName(QString::fromUtf8("voltageRangeLineEdit"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(voltageRangeLineEdit->sizePolicy().hasHeightForWidth());
        voltageRangeLineEdit->setSizePolicy(sizePolicy2);
        voltageRangeLineEdit->setMinimumSize(QSize(40, 0));
        voltageRangeLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(voltageRangeLineEdit, 4, 2, 1, 1);

        offsetLineEdit = new QLineEdit(groupBox2_2);
        offsetLineEdit->setObjectName(QString::fromUtf8("offsetLineEdit"));
        sizePolicy2.setHeightForWidth(offsetLineEdit->sizePolicy().hasHeightForWidth());
        offsetLineEdit->setSizePolicy(sizePolicy2);
        offsetLineEdit->setMinimumSize(QSize(40, 0));
        offsetLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(offsetLineEdit, 3, 2, 1, 1);

        spacer10 = new QSpacerItem(65, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer10, 2, 1, 1, 1);

        textLabel1_2_2_2 = new QLabel(groupBox2_2);
        textLabel1_2_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2_2"));
        sizePolicy1.setHeightForWidth(textLabel1_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel1_2_2_2->setSizePolicy(sizePolicy1);
        textLabel1_2_2_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel1_2_2_2, 1, 0, 1, 1);

        spacer6 = new QSpacerItem(47, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer6, 2, 3, 1, 1);

        amplificationLineEdit = new QLineEdit(groupBox2_2);
        amplificationLineEdit->setObjectName(QString::fromUtf8("amplificationLineEdit"));
        sizePolicy2.setHeightForWidth(amplificationLineEdit->sizePolicy().hasHeightForWidth());
        amplificationLineEdit->setSizePolicy(sizePolicy2);
        amplificationLineEdit->setMinimumSize(QSize(40, 0));
        amplificationLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(amplificationLineEdit, 5, 2, 1, 1);

        resolutionComboBox = new QComboBox(groupBox2_2);
        resolutionComboBox->setObjectName(QString::fromUtf8("resolutionComboBox"));
        sizePolicy2.setHeightForWidth(resolutionComboBox->sizePolicy().hasHeightForWidth());
        resolutionComboBox->setSizePolicy(sizePolicy2);
        resolutionComboBox->setMinimumSize(QSize(60, 0));
        resolutionComboBox->setMaximumSize(QSize(80, 32767));

        gridLayout2->addWidget(resolutionComboBox, 2, 2, 1, 1);

        textLabel4_2_3_3 = new QLabel(groupBox2_2);
        textLabel4_2_3_3->setObjectName(QString::fromUtf8("textLabel4_2_3_3"));
        sizePolicy1.setHeightForWidth(textLabel4_2_3_3->sizePolicy().hasHeightForWidth());
        textLabel4_2_3_3->setSizePolicy(sizePolicy1);
        textLabel4_2_3_3->setWordWrap(false);

        gridLayout2->addWidget(textLabel4_2_3_3, 5, 0, 1, 1);

        textLabel4_2_3_2 = new QLabel(groupBox2_2);
        textLabel4_2_3_2->setObjectName(QString::fromUtf8("textLabel4_2_3_2"));
        sizePolicy1.setHeightForWidth(textLabel4_2_3_2->sizePolicy().hasHeightForWidth());
        textLabel4_2_3_2->setSizePolicy(sizePolicy1);
        textLabel4_2_3_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel4_2_3_2, 4, 0, 1, 1);

        textLabel4_2_2_2 = new QLabel(groupBox2_2);
        textLabel4_2_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2_2"));
        sizePolicy1.setHeightForWidth(textLabel4_2_2_2->sizePolicy().hasHeightForWidth());
        textLabel4_2_2_2->setSizePolicy(sizePolicy1);
        textLabel4_2_2_2->setWordWrap(false);

        gridLayout2->addWidget(textLabel4_2_2_2, 2, 0, 1, 1);

        nbChannelsLineEdit = new QLineEdit(groupBox2_2);
        nbChannelsLineEdit->setObjectName(QString::fromUtf8("nbChannelsLineEdit"));
        sizePolicy2.setHeightForWidth(nbChannelsLineEdit->sizePolicy().hasHeightForWidth());
        nbChannelsLineEdit->setSizePolicy(sizePolicy2);
        nbChannelsLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(nbChannelsLineEdit, 0, 2, 1, 1);

        datSamplingRateLineEdit = new QLineEdit(groupBox2_2);
        datSamplingRateLineEdit->setObjectName(QString::fromUtf8("datSamplingRateLineEdit"));
        sizePolicy2.setHeightForWidth(datSamplingRateLineEdit->sizePolicy().hasHeightForWidth());
        datSamplingRateLineEdit->setSizePolicy(sizePolicy2);
        datSamplingRateLineEdit->setMinimumSize(QSize(40, 20));
        datSamplingRateLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(datSamplingRateLineEdit, 1, 2, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox2_2, 0, 0, 1, 1);

        spacer1 = new QSpacerItem(21, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 2, 0, 1, 1);

        groupBox1 = new QGroupBox(PrefDefaultsLayout);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy3);
        groupBox1->setMinimumSize(QSize(300, 0));
        groupBox1->setMaximumSize(QSize(32767, 32767));
        gridLayout3 = new QGridLayout(groupBox1);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        gridLayout5 = new QGridLayout();
        gridLayout5->setSpacing(6);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        spacer10_2_2_2_2 = new QSpacerItem(20, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacer10_2_2_2_2, 4, 6, 1, 1);

        spacer10_2_2_2 = new QSpacerItem(37, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout5->addItem(spacer10_2_2_2, 4, 1, 1, 1);

        textLabel4_2_2 = new QLabel(groupBox1);
        textLabel4_2_2->setObjectName(QString::fromUtf8("textLabel4_2_2"));
        textLabel4_2_2->setWordWrap(false);

        gridLayout5->addWidget(textLabel4_2_2, 0, 0, 2, 2);

        spacer11 = new QSpacerItem(20, 16, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout5->addItem(spacer11, 1, 2, 2, 1);

        traceBackgroundButton = new QPushButton(groupBox1);
        traceBackgroundButton->setObjectName(QString::fromUtf8("traceBackgroundButton"));
        sizePolicy2.setHeightForWidth(traceBackgroundButton->sizePolicy().hasHeightForWidth());
        traceBackgroundButton->setSizePolicy(sizePolicy2);
        traceBackgroundButton->setMinimumSize(QSize(60, 29));

        gridLayout5->addWidget(traceBackgroundButton, 4, 5, 1, 1);

        traceBackgroundLineEdit = new QLineEdit(groupBox1);
        traceBackgroundLineEdit->setObjectName(QString::fromUtf8("traceBackgroundLineEdit"));
        sizePolicy2.setHeightForWidth(traceBackgroundLineEdit->sizePolicy().hasHeightForWidth());
        traceBackgroundLineEdit->setSizePolicy(sizePolicy2);
        traceBackgroundLineEdit->setMinimumSize(QSize(160, 20));

        gridLayout5->addWidget(traceBackgroundLineEdit, 4, 3, 1, 2);

        backgroundLabel = new QLabel(groupBox1);
        backgroundLabel->setObjectName(QString::fromUtf8("backgroundLabel"));
        backgroundLabel->setWordWrap(false);

        gridLayout5->addWidget(backgroundLabel, 4, 0, 1, 1);

        screenGainLineEdit = new QLineEdit(groupBox1);
        screenGainLineEdit->setObjectName(QString::fromUtf8("screenGainLineEdit"));
        sizePolicy2.setHeightForWidth(screenGainLineEdit->sizePolicy().hasHeightForWidth());
        screenGainLineEdit->setSizePolicy(sizePolicy2);
        screenGainLineEdit->setMinimumSize(QSize(60, 20));
        screenGainLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout5->addWidget(screenGainLineEdit, 0, 3, 1, 1);

        eegSamplingRateLineEdit = new QLineEdit(groupBox1);
        eegSamplingRateLineEdit->setObjectName(QString::fromUtf8("eegSamplingRateLineEdit"));
        sizePolicy2.setHeightForWidth(eegSamplingRateLineEdit->sizePolicy().hasHeightForWidth());
        eegSamplingRateLineEdit->setSizePolicy(sizePolicy2);
        eegSamplingRateLineEdit->setMinimumSize(QSize(60, 20));
        eegSamplingRateLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout5->addWidget(eegSamplingRateLineEdit, 2, 3, 2, 1);

        textLabel1_2_2 = new QLabel(groupBox1);
        textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
        textLabel1_2_2->setWordWrap(false);

        gridLayout5->addWidget(textLabel1_2_2, 2, 0, 2, 2);

        spacer7 = new QSpacerItem(202, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacer7, 3, 4, 1, 3);


        gridLayout4->addLayout(gridLayout5, 0, 0, 1, 1);

        spacer1_2 = new QSpacerItem(21, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacer1_2, 1, 0, 1, 1);


        gridLayout3->addLayout(gridLayout4, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox1, 1, 0, 1, 1);


        retranslateUi(PrefDefaultsLayout);

        QMetaObject::connectSlotsByName(PrefDefaultsLayout);
    } // setupUi

    void retranslateUi(QWidget *PrefDefaultsLayout)
    {
        PrefDefaultsLayout->setWindowTitle(QApplication::translate("PrefDefaultsLayout", "Defaults", 0, QApplication::UnicodeUTF8));
        groupBox2_2->setTitle(QApplication::translate("PrefDefaultsLayout", "Acquisition System", 0, QApplication::UnicodeUTF8));
        textLabel4_2_3->setText(QApplication::translate("PrefDefaultsLayout", "Initial offset", 0, QApplication::UnicodeUTF8));
        textLabel4_2->setText(QApplication::translate("PrefDefaultsLayout", "Number of channels", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2_2->setText(QApplication::translate("PrefDefaultsLayout", "Sampling rate (Hz)", 0, QApplication::UnicodeUTF8));
        resolutionComboBox->clear();
        resolutionComboBox->insertItems(0, QStringList()
         << QApplication::translate("PrefDefaultsLayout", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PrefDefaultsLayout", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PrefDefaultsLayout", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PrefDefaultsLayout", "32", 0, QApplication::UnicodeUTF8)
        );
        textLabel4_2_3_3->setText(QApplication::translate("PrefDefaultsLayout", "Amplification", 0, QApplication::UnicodeUTF8));
        textLabel4_2_3_2->setText(QApplication::translate("PrefDefaultsLayout", "Voltage range (V)", 0, QApplication::UnicodeUTF8));
        textLabel4_2_2_2->setText(QApplication::translate("PrefDefaultsLayout", "Resolution (bits)", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("PrefDefaultsLayout", "Miscellaneous", 0, QApplication::UnicodeUTF8));
        textLabel4_2_2->setText(QApplication::translate("PrefDefaultsLayout", "Screen gain (mV/cm)", 0, QApplication::UnicodeUTF8));
        traceBackgroundButton->setText(QString());
        backgroundLabel->setText(QApplication::translate("PrefDefaultsLayout", "Background image", 0, QApplication::UnicodeUTF8));
        textLabel1_2_2->setText(QApplication::translate("PrefDefaultsLayout", "Sampling rate for EEG (Hz)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PrefDefaultsLayout: public Ui_PrefDefaultsLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFDEFAULTSLAYOUT_H
