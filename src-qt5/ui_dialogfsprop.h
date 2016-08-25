/********************************************************************************
** Form generated from reading UI file 'dialogfsprop.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGFSPROP_H
#define UI_DIALOGFSPROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogFSProp
{
public:
    QGridLayout *gridLayout;
    QCheckBox *recursiveCheck;
    QTreeWidget *propList;
    QToolButton *buttonAdd;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QToolButton *buttonRemove;
    QToolButton *buttonInherit;
    QToolButton *buttonRevert;

    void setupUi(QDialog *DialogFSProp)
    {
        if (DialogFSProp->objectName().isEmpty())
            DialogFSProp->setObjectName(QStringLiteral("DialogFSProp"));
        DialogFSProp->resize(527, 526);
        DialogFSProp->setContextMenuPolicy(Qt::DefaultContextMenu);
        gridLayout = new QGridLayout(DialogFSProp);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        recursiveCheck = new QCheckBox(DialogFSProp);
        recursiveCheck->setObjectName(QStringLiteral("recursiveCheck"));

        gridLayout->addWidget(recursiveCheck, 3, 0, 1, 7);

        propList = new QTreeWidget(DialogFSProp);
        propList->setObjectName(QStringLiteral("propList"));
        propList->setContextMenuPolicy(Qt::CustomContextMenu);
        propList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        propList->setAlternatingRowColors(false);
        propList->setSortingEnabled(true);

        gridLayout->addWidget(propList, 0, 0, 1, 7);

        buttonAdd = new QToolButton(DialogFSProp);
        buttonAdd->setObjectName(QStringLiteral("buttonAdd"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAdd->setIcon(icon);
        buttonAdd->setIconSize(QSize(22, 22));

        gridLayout->addWidget(buttonAdd, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 4, 1, 1);

        buttonBox = new QDialogButtonBox(DialogFSProp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 6);

        buttonRemove = new QToolButton(DialogFSProp);
        buttonRemove->setObjectName(QStringLiteral("buttonRemove"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRemove->setIcon(icon1);
        buttonRemove->setIconSize(QSize(22, 22));

        gridLayout->addWidget(buttonRemove, 1, 1, 1, 1);

        buttonInherit = new QToolButton(DialogFSProp);
        buttonInherit->setObjectName(QStringLiteral("buttonInherit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/edit-text-frame-update.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonInherit->setIcon(icon2);
        buttonInherit->setIconSize(QSize(22, 22));

        gridLayout->addWidget(buttonInherit, 1, 2, 1, 1);

        buttonRevert = new QToolButton(DialogFSProp);
        buttonRevert->setObjectName(QStringLiteral("buttonRevert"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/edit-undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonRevert->setIcon(icon3);
        buttonRevert->setIconSize(QSize(22, 22));

        gridLayout->addWidget(buttonRevert, 1, 3, 1, 1);


        retranslateUi(DialogFSProp);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogFSProp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogFSProp, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogFSProp);
    } // setupUi

    void retranslateUi(QDialog *DialogFSProp)
    {
        DialogFSProp->setWindowTitle(QApplication::translate("DialogFSProp", "Dialog", 0));
        recursiveCheck->setText(QApplication::translate("DialogFSProp", "Apply changes recursively to all descendants", 0));
        QTreeWidgetItem *___qtreewidgetitem = propList->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("DialogFSProp", "Source", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("DialogFSProp", "Value", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("DialogFSProp", "Property", 0));
#ifndef QT_NO_TOOLTIP
        buttonAdd->setToolTip(QApplication::translate("DialogFSProp", "Add user property", 0));
#endif // QT_NO_TOOLTIP
        buttonAdd->setText(QApplication::translate("DialogFSProp", "...", 0));
#ifndef QT_NO_TOOLTIP
        buttonRemove->setToolTip(QApplication::translate("DialogFSProp", "Remove user property", 0));
#endif // QT_NO_TOOLTIP
        buttonRemove->setText(QApplication::translate("DialogFSProp", "...", 0));
#ifndef QT_NO_TOOLTIP
        buttonInherit->setToolTip(QApplication::translate("DialogFSProp", "Inherit from parent", 0));
#endif // QT_NO_TOOLTIP
        buttonInherit->setText(QApplication::translate("DialogFSProp", "...", 0));
#ifndef QT_NO_TOOLTIP
        buttonRevert->setToolTip(QApplication::translate("DialogFSProp", "Revert changes", 0));
#endif // QT_NO_TOOLTIP
        buttonRevert->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogFSProp: public Ui_DialogFSProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGFSPROP_H
