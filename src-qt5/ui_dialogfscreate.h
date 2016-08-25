/********************************************************************************
** Form generated from reading UI file 'dialogfscreate.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFSCREATE_H
#define UI_DIALOGFSCREATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogfsCreate
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *fsName;
    QFrame *frameProps;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpinBox *spinCopies;
    QCheckBox *checkCanMount;
    QCheckBox *checkMountpt;
    QLineEdit *mountPtEdit;
    QComboBox *comboMountpt;
    QCheckBox *checkUtf8Only;
    QCheckBox *checkNormalization;
    QComboBox *comboNormalization;
    QCheckBox *checkCopies;
    QCheckBox *checkDedup;
    QCheckBox *checkCompression;
    QComboBox *comboCompression;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DialogfsCreate)
    {
        if (DialogfsCreate->objectName().isEmpty())
            DialogfsCreate->setObjectName(QStringLiteral("DialogfsCreate"));
        DialogfsCreate->resize(395, 570);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogfsCreate->sizePolicy().hasHeightForWidth());
        DialogfsCreate->setSizePolicy(sizePolicy);
        DialogfsCreate->setMinimumSize(QSize(395, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/kexi.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogfsCreate->setWindowIcon(icon);
        DialogfsCreate->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(DialogfsCreate);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(DialogfsCreate);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 15, 1, 1, 1);

        label = new QLabel(DialogfsCreate);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        fsName = new QLineEdit(DialogfsCreate);
        fsName->setObjectName(QStringLiteral("fsName"));

        gridLayout->addWidget(fsName, 1, 1, 1, 2);

        frameProps = new QFrame(DialogfsCreate);
        frameProps->setObjectName(QStringLiteral("frameProps"));
        frameProps->setFrameShape(QFrame::StyledPanel);
        frameProps->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameProps);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(frameProps);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        spinCopies = new QSpinBox(frameProps);
        spinCopies->setObjectName(QStringLiteral("spinCopies"));
        spinCopies->setEnabled(false);
        spinCopies->setMinimum(1);
        spinCopies->setMaximum(3);

        gridLayout_2->addWidget(spinCopies, 6, 1, 1, 1);

        checkCanMount = new QCheckBox(frameProps);
        checkCanMount->setObjectName(QStringLiteral("checkCanMount"));

        gridLayout_2->addWidget(checkCanMount, 1, 0, 1, 1);

        checkMountpt = new QCheckBox(frameProps);
        checkMountpt->setObjectName(QStringLiteral("checkMountpt"));

        gridLayout_2->addWidget(checkMountpt, 2, 0, 1, 1);

        mountPtEdit = new QLineEdit(frameProps);
        mountPtEdit->setObjectName(QStringLiteral("mountPtEdit"));
        mountPtEdit->setEnabled(false);

        gridLayout_2->addWidget(mountPtEdit, 3, 0, 1, 1);

        comboMountpt = new QComboBox(frameProps);
        comboMountpt->setObjectName(QStringLiteral("comboMountpt"));
        comboMountpt->setEnabled(false);

        gridLayout_2->addWidget(comboMountpt, 2, 1, 1, 1);

        checkUtf8Only = new QCheckBox(frameProps);
        checkUtf8Only->setObjectName(QStringLiteral("checkUtf8Only"));

        gridLayout_2->addWidget(checkUtf8Only, 4, 0, 1, 1);

        checkNormalization = new QCheckBox(frameProps);
        checkNormalization->setObjectName(QStringLiteral("checkNormalization"));

        gridLayout_2->addWidget(checkNormalization, 5, 0, 1, 1);

        comboNormalization = new QComboBox(frameProps);
        comboNormalization->setObjectName(QStringLiteral("comboNormalization"));
        comboNormalization->setEnabled(false);

        gridLayout_2->addWidget(comboNormalization, 5, 1, 1, 1);

        checkCopies = new QCheckBox(frameProps);
        checkCopies->setObjectName(QStringLiteral("checkCopies"));

        gridLayout_2->addWidget(checkCopies, 6, 0, 1, 1);

        checkDedup = new QCheckBox(frameProps);
        checkDedup->setObjectName(QStringLiteral("checkDedup"));

        gridLayout_2->addWidget(checkDedup, 7, 0, 1, 1);

        checkCompression = new QCheckBox(frameProps);
        checkCompression->setObjectName(QStringLiteral("checkCompression"));

        gridLayout_2->addWidget(checkCompression, 8, 0, 1, 1);

        comboCompression = new QComboBox(frameProps);
        comboCompression->setObjectName(QStringLiteral("comboCompression"));
        comboCompression->setEnabled(false);

        gridLayout_2->addWidget(comboCompression, 8, 1, 1, 1);


        gridLayout->addWidget(frameProps, 2, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);


        retranslateUi(DialogfsCreate);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogfsCreate, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogfsCreate, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogfsCreate);
    } // setupUi

    void retranslateUi(QDialog *DialogfsCreate)
    {
        DialogfsCreate->setWindowTitle(QApplication::translate("DialogfsCreate", "New Filesystem", 0));
        label->setText(QApplication::translate("DialogfsCreate", "Name:", 0));
        label_2->setText(QApplication::translate("DialogfsCreate", "Properties override at creation time:", 0));
        checkCanMount->setText(QApplication::translate("DialogfsCreate", "Prevent auto mount (canmount=noauto)", 0));
        checkMountpt->setText(QApplication::translate("DialogfsCreate", "Mountpoint", 0));
        comboMountpt->clear();
        comboMountpt->insertItems(0, QStringList()
         << QApplication::translate("DialogfsCreate", "none", 0)
         << QApplication::translate("DialogfsCreate", "legacy", 0)
         << QApplication::translate("DialogfsCreate", "[path]", 0)
        );
        checkUtf8Only->setText(QApplication::translate("DialogfsCreate", "Force UTF-8 only (utf8only=on)", 0));
        checkNormalization->setText(QApplication::translate("DialogfsCreate", "Unicode normalization =", 0));
        comboNormalization->clear();
        comboNormalization->insertItems(0, QStringList()
         << QApplication::translate("DialogfsCreate", "none", 0)
         << QApplication::translate("DialogfsCreate", "formD", 0)
         << QApplication::translate("DialogfsCreate", "formKCF", 0)
        );
        checkCopies->setText(QApplication::translate("DialogfsCreate", "Copies =", 0));
        checkDedup->setText(QApplication::translate("DialogfsCreate", "Deduplication (dedup=on)", 0));
        checkCompression->setText(QApplication::translate("DialogfsCreate", "Compression =", 0));
        comboCompression->clear();
        comboCompression->insertItems(0, QStringList()
         << QApplication::translate("DialogfsCreate", "off", 0)
         << QApplication::translate("DialogfsCreate", "on", 0)
         << QApplication::translate("DialogfsCreate", "lz4", 0)
         << QApplication::translate("DialogfsCreate", "lzjb", 0)
         << QApplication::translate("DialogfsCreate", "zle", 0)
         << QApplication::translate("DialogfsCreate", "gzip", 0)
         << QApplication::translate("DialogfsCreate", "gzip-1", 0)
         << QApplication::translate("DialogfsCreate", "gzip-2", 0)
         << QApplication::translate("DialogfsCreate", "gzip-3", 0)
         << QApplication::translate("DialogfsCreate", "gzip-4", 0)
         << QApplication::translate("DialogfsCreate", "gzip-5", 0)
         << QApplication::translate("DialogfsCreate", "gzip-6", 0)
         << QApplication::translate("DialogfsCreate", "gzip-7", 0)
         << QApplication::translate("DialogfsCreate", "gzip-8", 0)
         << QApplication::translate("DialogfsCreate", "gzip-9", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class DialogfsCreate: public Ui_DialogfsCreate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFSCREATE_H
