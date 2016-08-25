/********************************************************************************
** Form generated from reading UI file 'dialogname.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNAME_H
#define UI_DIALOGNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogName
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QFrame *frame;
    QGridLayout *gridLayout;
    QRadioButton *checkNoMount;
    QCheckBox *checkReadOnly;
    QLineEdit *editAltRoot;
    QLabel *label;
    QRadioButton *checkAltRoot;
    QRadioButton *checkAutoMount;
    QLabel *label_2;
    QCheckBox *checkForce;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogName)
    {
        if (DialogName->objectName().isEmpty())
            DialogName->setObjectName(QStringLiteral("DialogName"));
        DialogName->resize(394, 329);
        verticalLayout = new QVBoxLayout(DialogName);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLabel = new QLabel(DialogName);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        nameEdit = new QLineEdit(DialogName);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(nameEdit);

        frame = new QFrame(DialogName);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkNoMount = new QRadioButton(frame);
        checkNoMount->setObjectName(QStringLiteral("checkNoMount"));

        gridLayout->addWidget(checkNoMount, 4, 0, 1, 1);

        checkReadOnly = new QCheckBox(frame);
        checkReadOnly->setObjectName(QStringLiteral("checkReadOnly"));

        gridLayout->addWidget(checkReadOnly, 1, 0, 1, 1);

        editAltRoot = new QLineEdit(frame);
        editAltRoot->setObjectName(QStringLiteral("editAltRoot"));
        editAltRoot->setEnabled(false);

        gridLayout->addWidget(editAltRoot, 7, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        checkAltRoot = new QRadioButton(frame);
        checkAltRoot->setObjectName(QStringLiteral("checkAltRoot"));

        gridLayout->addWidget(checkAltRoot, 6, 0, 1, 1);

        checkAutoMount = new QRadioButton(frame);
        checkAutoMount->setObjectName(QStringLiteral("checkAutoMount"));

        gridLayout->addWidget(checkAutoMount, 5, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        checkForce = new QCheckBox(frame);
        checkForce->setObjectName(QStringLiteral("checkForce"));

        gridLayout->addWidget(checkForce, 2, 0, 1, 1);


        verticalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DialogName);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogName);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogName, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogName, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogName);
    } // setupUi

    void retranslateUi(QDialog *DialogName)
    {
        DialogName->setWindowTitle(QApplication::translate("DialogName", "Dialog", 0));
        nameLabel->setText(QApplication::translate("DialogName", "Pool name:", 0));
        checkNoMount->setText(QApplication::translate("DialogName", "Do not mount any filesystems", 0));
        checkReadOnly->setText(QApplication::translate("DialogName", "Read only pool", 0));
        label->setText(QApplication::translate("DialogName", "Import options:", 0));
        checkAltRoot->setText(QApplication::translate("DialogName", "Mount with alternative root:", 0));
        checkAutoMount->setText(QApplication::translate("DialogName", "Mount all filesystems automatically", 0));
        label_2->setText(QApplication::translate("DialogName", "Mounting behavior:", 0));
        checkForce->setText(QApplication::translate("DialogName", "Force operation if error (use with caution)", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogName: public Ui_DialogName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNAME_H
