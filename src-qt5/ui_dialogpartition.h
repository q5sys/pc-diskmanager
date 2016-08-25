/********************************************************************************
** Form generated from reading UI file 'dialogpartition.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPARTITION_H
#define UI_DIALOGPARTITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPartition
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *devLargestFree;
    QLabel *label_5;
    QLabel *devName;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *devTotalSize;
    QLabel *label_2;
    QGraphicsView *GraphicPart;
    QTreeWidget *devLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *SizeText;
    QComboBox *SizeSelect;
    QSlider *sizeSlider;
    QLabel *label_3;
    QComboBox *PartType;
    QHBoxLayout *horizontalLayout;
    QCheckBox *newfsCheck;
    QComboBox *newfsType;
    QCheckBox *partAlign;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogPartition)
    {
        if (DialogPartition->objectName().isEmpty())
            DialogPartition->setObjectName(QStringLiteral("DialogPartition"));
        DialogPartition->setWindowModality(Qt::NonModal);
        DialogPartition->resize(520, 509);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/kdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogPartition->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogPartition);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(DialogPartition);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        devLargestFree = new QLabel(groupBox);
        devLargestFree->setObjectName(QStringLiteral("devLargestFree"));
        devLargestFree->setScaledContents(false);
        devLargestFree->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(devLargestFree, 2, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        devName = new QLabel(groupBox);
        devName->setObjectName(QStringLiteral("devName"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        devName->setFont(font);
        devName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(devName, 0, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 1, 1, 1, 1);

        devTotalSize = new QLabel(groupBox);
        devTotalSize->setObjectName(QStringLiteral("devTotalSize"));
        devTotalSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(devTotalSize, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        GraphicPart = new QGraphicsView(groupBox);
        GraphicPart->setObjectName(QStringLiteral("GraphicPart"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicPart->sizePolicy().hasHeightForWidth());
        GraphicPart->setSizePolicy(sizePolicy);
        GraphicPart->setMinimumSize(QSize(0, 50));
        GraphicPart->setMaximumSize(QSize(16777215, 50));
        GraphicPart->setInteractive(false);
        GraphicPart->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(GraphicPart);

        devLayout = new QTreeWidget(groupBox);
        devLayout->setObjectName(QStringLiteral("devLayout"));
        devLayout->header()->setStretchLastSection(true);

        verticalLayout_2->addWidget(devLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        SizeText = new QLineEdit(groupBox);
        SizeText->setObjectName(QStringLiteral("SizeText"));

        horizontalLayout_2->addWidget(SizeText);

        SizeSelect = new QComboBox(groupBox);
        SizeSelect->setObjectName(QStringLiteral("SizeSelect"));

        horizontalLayout_2->addWidget(SizeSelect);


        verticalLayout_2->addLayout(horizontalLayout_2);

        sizeSlider = new QSlider(groupBox);
        sizeSlider->setObjectName(QStringLiteral("sizeSlider"));
        sizeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(sizeSlider);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        PartType = new QComboBox(groupBox);
        PartType->setObjectName(QStringLiteral("PartType"));

        verticalLayout_2->addWidget(PartType);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        newfsCheck = new QCheckBox(groupBox);
        newfsCheck->setObjectName(QStringLiteral("newfsCheck"));

        horizontalLayout->addWidget(newfsCheck);

        newfsType = new QComboBox(groupBox);
        newfsType->setObjectName(QStringLiteral("newfsType"));

        horizontalLayout->addWidget(newfsType);


        verticalLayout_2->addLayout(horizontalLayout);

        partAlign = new QCheckBox(groupBox);
        partAlign->setObjectName(QStringLiteral("partAlign"));

        verticalLayout_2->addWidget(partAlign);

        buttonBox = new QDialogButtonBox(groupBox);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        verticalLayout->addWidget(groupBox);


        retranslateUi(DialogPartition);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogPartition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogPartition, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPartition);
    } // setupUi

    void retranslateUi(QDialog *DialogPartition)
    {
        DialogPartition->setWindowTitle(QApplication::translate("DialogPartition", "Add Partition", 0));
        groupBox->setTitle(QApplication::translate("DialogPartition", "Add new slice/partition", 0));
        devLargestFree->setText(QApplication::translate("DialogPartition", "100 GB", 0));
        label_5->setText(QApplication::translate("DialogPartition", "Device:", 0));
        devName->setText(QApplication::translate("DialogPartition", "ada0", 0));
        label_4->setText(QApplication::translate("DialogPartition", "Largest available free block:", 0));
        label_6->setText(QApplication::translate("DialogPartition", "Total Size:", 0));
        devTotalSize->setText(QApplication::translate("DialogPartition", "100 GB", 0));
        label_2->setText(QApplication::translate("DialogPartition", "Current layout:", 0));
        QTreeWidgetItem *___qtreewidgetitem = devLayout->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("DialogPartition", "Color", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("DialogPartition", "Size", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("DialogPartition", "Sector Count", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("DialogPartition", "Start Sector", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("DialogPartition", "Designation", 0));
        label->setText(QApplication::translate("DialogPartition", "New partition Size:", 0));
        SizeSelect->clear();
        SizeSelect->insertItems(0, QStringList()
         << QApplication::translate("DialogPartition", "bytes", 0)
         << QApplication::translate("DialogPartition", "kB", 0)
         << QApplication::translate("DialogPartition", "MB", 0)
         << QApplication::translate("DialogPartition", "GB", 0)
         << QApplication::translate("DialogPartition", "TB", 0)
        );
        label_3->setText(QApplication::translate("DialogPartition", "Partition type:", 0));
        PartType->clear();
        PartType->insertItems(0, QStringList()
         << QApplication::translate("DialogPartition", "freebsd-zfs", 0)
         << QApplication::translate("DialogPartition", "freebsd-ufs", 0)
         << QApplication::translate("DialogPartition", "freebsd", 0)
         << QApplication::translate("DialogPartition", "freebsd-boot", 0)
         << QApplication::translate("DialogPartition", "freebsd-swap", 0)
         << QApplication::translate("DialogPartition", "bios-boot", 0)
         << QApplication::translate("DialogPartition", "efi", 0)
        );
        newfsCheck->setText(QApplication::translate("DialogPartition", "Create and initialize a new filesystem", 0));
        partAlign->setText(QApplication::translate("DialogPartition", "Align partitions to 1 MB boundary", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogPartition: public Ui_DialogPartition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPARTITION_H
