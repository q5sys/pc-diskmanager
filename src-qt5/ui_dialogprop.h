/********************************************************************************
** Form generated from reading UI file 'dialogprop.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPROP_H
#define UI_DIALOGPROP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogProp
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *propList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogProp)
    {
        if (DialogProp->objectName().isEmpty())
            DialogProp->setObjectName(QStringLiteral("DialogProp"));
        DialogProp->resize(460, 479);
        verticalLayout = new QVBoxLayout(DialogProp);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        propList = new QTreeWidget(DialogProp);
        propList->setObjectName(QStringLiteral("propList"));
        propList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        propList->setAlternatingRowColors(true);
        propList->setIconSize(QSize(32, 32));
        propList->setUniformRowHeights(true);

        verticalLayout->addWidget(propList);

        buttonBox = new QDialogButtonBox(DialogProp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogProp);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogProp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogProp, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogProp);
    } // setupUi

    void retranslateUi(QDialog *DialogProp)
    {
        DialogProp->setWindowTitle(QApplication::translate("DialogProp", "Edit Pool Properties", 0));
        QTreeWidgetItem *___qtreewidgetitem = propList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("DialogProp", "Value", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("DialogProp", "Property", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogProp: public Ui_DialogProp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPROP_H
