/********************************************************************************
** Form generated from reading UI file 'clusterpropertieslayout.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUSTERPROPERTIESLAYOUT_H
#define UI_CLUSTERPROPERTIESLAYOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClusterPropertiesLayout
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacer1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QLineEdit *nbSamplesLineEdit;
    QLabel *waveformLabel;
    QLabel *peakLabel;
    QSpacerItem *spacer4_2;
    QSpacerItem *spacer4;
    QLineEdit *peakIndexLineEdit;

    void setupUi(QWidget *ClusterPropertiesLayout)
    {
        if (ClusterPropertiesLayout->objectName().isEmpty())
            ClusterPropertiesLayout->setObjectName(QString::fromUtf8("ClusterPropertiesLayout"));
        ClusterPropertiesLayout->resize(379, 134);
        gridLayout = new QGridLayout(ClusterPropertiesLayout);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacer1 = new QSpacerItem(21, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacer1, 1, 0, 1, 1);

        groupBox = new QGroupBox(ClusterPropertiesLayout);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(350, 85));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        nbSamplesLineEdit = new QLineEdit(groupBox);
        nbSamplesLineEdit->setObjectName(QString::fromUtf8("nbSamplesLineEdit"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nbSamplesLineEdit->sizePolicy().hasHeightForWidth());
        nbSamplesLineEdit->setSizePolicy(sizePolicy1);
        nbSamplesLineEdit->setMinimumSize(QSize(60, 0));
        nbSamplesLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(nbSamplesLineEdit, 0, 2, 1, 1);

        waveformLabel = new QLabel(groupBox);
        waveformLabel->setObjectName(QString::fromUtf8("waveformLabel"));
        waveformLabel->setWordWrap(false);

        gridLayout2->addWidget(waveformLabel, 0, 0, 1, 1);

        peakLabel = new QLabel(groupBox);
        peakLabel->setObjectName(QString::fromUtf8("peakLabel"));
        peakLabel->setWordWrap(false);

        gridLayout2->addWidget(peakLabel, 1, 0, 1, 1);

        spacer4_2 = new QSpacerItem(45, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer4_2, 0, 1, 2, 1);

        spacer4 = new QSpacerItem(16, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacer4, 0, 3, 1, 1);

        peakIndexLineEdit = new QLineEdit(groupBox);
        peakIndexLineEdit->setObjectName(QString::fromUtf8("peakIndexLineEdit"));
        sizePolicy1.setHeightForWidth(peakIndexLineEdit->sizePolicy().hasHeightForWidth());
        peakIndexLineEdit->setSizePolicy(sizePolicy1);
        peakIndexLineEdit->setMinimumSize(QSize(60, 0));
        peakIndexLineEdit->setMaximumSize(QSize(60, 32767));

        gridLayout2->addWidget(peakIndexLineEdit, 1, 2, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(ClusterPropertiesLayout);

        QMetaObject::connectSlotsByName(ClusterPropertiesLayout);
    } // setupUi

    void retranslateUi(QWidget *ClusterPropertiesLayout)
    {
        ClusterPropertiesLayout->setWindowTitle(QApplication::translate("ClusterPropertiesLayout", "Cluster Properties", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ClusterPropertiesLayout", "Waveforms", 0, QApplication::UnicodeUTF8));
        waveformLabel->setText(QApplication::translate("ClusterPropertiesLayout", "Number of samples per waveform", 0, QApplication::UnicodeUTF8));
        peakLabel->setText(QApplication::translate("ClusterPropertiesLayout", "Index of the peak sample", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ClusterPropertiesLayout: public Ui_ClusterPropertiesLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERPROPERTIESLAYOUT_H
