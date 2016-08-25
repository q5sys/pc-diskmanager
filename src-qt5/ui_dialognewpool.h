/********************************************************************************
** Form generated from reading UI file 'dialognewpool.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEWPOOL_H
#define UI_DIALOGNEWPOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogNewPool
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *vdevList;
    QLabel *label;
    QLineEdit *poolName;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QRadioButton *striped;
    QRadioButton *mirror;
    QRadioButton *raidz;
    QRadioButton *raidz2;
    QRadioButton *raidz3;
    QRadioButton *cache;
    QRadioButton *log;
    QRadioButton *spare;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *frameErrors;
    QGridLayout *gridLayout_2;
    QLabel *labelError;
    QFrame *frame;

    void setupUi(QDialog *DialogNewPool)
    {
        if (DialogNewPool->objectName().isEmpty())
            DialogNewPool->setObjectName(QStringLiteral("DialogNewPool"));
        DialogNewPool->resize(481, 397);
        gridLayout = new QGridLayout(DialogNewPool);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        vdevList = new QTreeWidget(DialogNewPool);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("Available devices"));
        vdevList->setHeaderItem(__qtreewidgetitem);
        vdevList->setObjectName(QStringLiteral("vdevList"));

        gridLayout->addWidget(vdevList, 6, 1, 1, 1);

        label = new QLabel(DialogNewPool);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        poolName = new QLineEdit(DialogNewPool);
        poolName->setObjectName(QStringLiteral("poolName"));

        gridLayout->addWidget(poolName, 1, 0, 1, 2);

        groupBox = new QGroupBox(DialogNewPool);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        striped = new QRadioButton(groupBox);
        striped->setObjectName(QStringLiteral("striped"));

        verticalLayout->addWidget(striped);

        mirror = new QRadioButton(groupBox);
        mirror->setObjectName(QStringLiteral("mirror"));

        verticalLayout->addWidget(mirror);

        raidz = new QRadioButton(groupBox);
        raidz->setObjectName(QStringLiteral("raidz"));

        verticalLayout->addWidget(raidz);

        raidz2 = new QRadioButton(groupBox);
        raidz2->setObjectName(QStringLiteral("raidz2"));

        verticalLayout->addWidget(raidz2);

        raidz3 = new QRadioButton(groupBox);
        raidz3->setObjectName(QStringLiteral("raidz3"));

        verticalLayout->addWidget(raidz3);

        cache = new QRadioButton(groupBox);
        cache->setObjectName(QStringLiteral("cache"));

        verticalLayout->addWidget(cache);

        log = new QRadioButton(groupBox);
        log->setObjectName(QStringLiteral("log"));

        verticalLayout->addWidget(log);

        spare = new QRadioButton(groupBox);
        spare->setObjectName(QStringLiteral("spare"));

        verticalLayout->addWidget(spare);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addWidget(groupBox, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogNewPool);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 9, 1, 1, 1);

        frameErrors = new QFrame(DialogNewPool);
        frameErrors->setObjectName(QStringLiteral("frameErrors"));
        frameErrors->setMinimumSize(QSize(0, 0));
        frameErrors->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 151);"));
        frameErrors->setFrameShape(QFrame::StyledPanel);
        frameErrors->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameErrors);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelError = new QLabel(frameErrors);
        labelError->setObjectName(QStringLiteral("labelError"));

        gridLayout_2->addWidget(labelError, 0, 1, 1, 1);

        frame = new QFrame(frameErrors);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(32, 32));
        frame->setMaximumSize(QSize(32, 32));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QStringLiteral("background-image: url(:/icons/task-reject.png);"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        gridLayout->addWidget(frameErrors, 8, 0, 1, 2);


        retranslateUi(DialogNewPool);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogNewPool, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogNewPool, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogNewPool);
    } // setupUi

    void retranslateUi(QDialog *DialogNewPool)
    {
        DialogNewPool->setWindowTitle(QApplication::translate("DialogNewPool", "Dialog", 0));
        QTreeWidgetItem *___qtreewidgetitem = vdevList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("DialogNewPool", "Selected", 0));
        label->setText(QApplication::translate("DialogNewPool", "Pool name:", 0));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("DialogNewPool", "Configuration type:", 0));
        striped->setText(QApplication::translate("DialogNewPool", "Striped", 0));
        mirror->setText(QApplication::translate("DialogNewPool", "Mirror", 0));
        raidz->setText(QApplication::translate("DialogNewPool", "Raid-Z (single parity)", 0));
        raidz2->setText(QApplication::translate("DialogNewPool", "Raid-Z2 (double parity)", 0));
        raidz3->setText(QApplication::translate("DialogNewPool", "Raid-Z3 (triple parity)", 0));
        cache->setText(QApplication::translate("DialogNewPool", "Cache", 0));
        log->setText(QApplication::translate("DialogNewPool", "Log", 0));
        spare->setText(QApplication::translate("DialogNewPool", "Spare", 0));
        labelError->setText(QApplication::translate("DialogNewPool", "Error Description Here", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogNewPool: public Ui_DialogNewPool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEWPOOL_H
