/********************************************************************************
** Form generated from reading UI file 'dialogmount.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMOUNT_H
#define UI_DIALOGMOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogMount
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QLabel *labelDevice;
    QLabel *label_3;
    QLineEdit *mountLocation;
    QSpacerItem *verticalSpacer;
    QPushButton *browseButton;

    void setupUi(QDialog *DialogMount)
    {
        if (DialogMount->objectName().isEmpty())
            DialogMount->setObjectName(QStringLiteral("DialogMount"));
        DialogMount->resize(398, 113);
        gridLayout = new QGridLayout(DialogMount);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(DialogMount);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogMount);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);

        labelDevice = new QLabel(DialogMount);
        labelDevice->setObjectName(QStringLiteral("labelDevice"));

        gridLayout->addWidget(labelDevice, 0, 1, 1, 1);

        label_3 = new QLabel(DialogMount);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        mountLocation = new QLineEdit(DialogMount);
        mountLocation->setObjectName(QStringLiteral("mountLocation"));

        gridLayout->addWidget(mountLocation, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        browseButton = new QPushButton(DialogMount);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        gridLayout->addWidget(browseButton, 1, 2, 1, 1);


        retranslateUi(DialogMount);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogMount, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogMount, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogMount);
    } // setupUi

    void retranslateUi(QDialog *DialogMount)
    {
        DialogMount->setWindowTitle(QApplication::translate("DialogMount", "Dialog", 0));
        label->setText(QApplication::translate("DialogMount", "Device to mount:", 0));
        labelDevice->setText(QApplication::translate("DialogMount", "(Device)", 0));
        label_3->setText(QApplication::translate("DialogMount", "Mount location:", 0));
        browseButton->setText(QApplication::translate("DialogMount", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogMount: public Ui_DialogMount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMOUNT_H
