/********************************************************************************
** Form generated from reading UI file 'zmanagerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZMANAGERWINDOW_H
#define UI_ZMANAGERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZManagerWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabContainer;
    QWidget *tabDisk;
    QGridLayout *gridLayout_3;
    QTreeWidget *deviceList;
    QWidget *tabZPools;
    QGridLayout *gridLayout_2;
    QTreeWidget *zpoolList;
    QFrame *frameStatus;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *statusLabel;
    QToolButton *toolButton;
    QLabel *poolLabel;
    QWidget *tabZFS;
    QGridLayout *gridLayout_5;
    QTreeWidget *fspoolList;
    QPushButton *dropDownButton;
    QTreeWidget *fsList;
    QPushButton *refreshButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ZManagerWindow)
    {
        if (ZManagerWindow->objectName().isEmpty())
            ZManagerWindow->setObjectName(QStringLiteral("ZManagerWindow"));
        ZManagerWindow->resize(589, 520);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/server-database.png"), QSize(), QIcon::Normal, QIcon::Off);
        ZManagerWindow->setWindowIcon(icon);
        centralWidget = new QWidget(ZManagerWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tabContainer = new QTabWidget(centralWidget);
        tabContainer->setObjectName(QStringLiteral("tabContainer"));
        tabContainer->setIconSize(QSize(32, 32));
        tabDisk = new QWidget();
        tabDisk->setObjectName(QStringLiteral("tabDisk"));
        gridLayout_3 = new QGridLayout(tabDisk);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        deviceList = new QTreeWidget(tabDisk);
        deviceList->setObjectName(QStringLiteral("deviceList"));
        deviceList->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_3->addWidget(deviceList, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/partitionmanager.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabContainer->addTab(tabDisk, icon1, QString());
        tabZPools = new QWidget();
        tabZPools->setObjectName(QStringLiteral("tabZPools"));
        gridLayout_2 = new QGridLayout(tabZPools);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        zpoolList = new QTreeWidget(tabZPools);
        zpoolList->setObjectName(QStringLiteral("zpoolList"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zpoolList->sizePolicy().hasHeightForWidth());
        zpoolList->setSizePolicy(sizePolicy);
        zpoolList->setMinimumSize(QSize(300, 250));
        zpoolList->setContextMenuPolicy(Qt::CustomContextMenu);
        zpoolList->setFrameShape(QFrame::StyledPanel);
        zpoolList->setFrameShadow(QFrame::Sunken);
        zpoolList->setLineWidth(1);

        gridLayout_2->addWidget(zpoolList, 0, 0, 1, 1);

        frameStatus = new QFrame(tabZPools);
        frameStatus->setObjectName(QStringLiteral("frameStatus"));
        frameStatus->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 151);"));
        frameStatus->setFrameShape(QFrame::StyledPanel);
        frameStatus->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frameStatus);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(frameStatus);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        statusLabel = new QLabel(frameStatus);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        statusLabel->setWordWrap(true);
        statusLabel->setTextInteractionFlags(Qt::NoTextInteraction);

        gridLayout->addWidget(statusLabel, 1, 1, 1, 1);

        toolButton = new QToolButton(frameStatus);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setEnabled(true);
        toolButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/task-attention.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(48, 48));
        toolButton->setPopupMode(QToolButton::DelayedPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(toolButton, 1, 0, 1, 1);

        poolLabel = new QLabel(frameStatus);
        poolLabel->setObjectName(QStringLiteral("poolLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        poolLabel->setFont(font);
        poolLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(poolLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(frameStatus, 1, 0, 1, 1);

        tabContainer->addTab(tabZPools, icon, QString());
        tabZFS = new QWidget();
        tabZFS->setObjectName(QStringLiteral("tabZFS"));
        gridLayout_5 = new QGridLayout(tabZFS);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        fspoolList = new QTreeWidget(tabZFS);
        fspoolList->setObjectName(QStringLiteral("fspoolList"));
        fspoolList->setMinimumSize(QSize(0, 50));
        fspoolList->setMaximumSize(QSize(16777215, 50));
        fspoolList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fspoolList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        fspoolList->setItemsExpandable(false);
        fspoolList->setHeaderHidden(true);

        gridLayout_5->addWidget(fspoolList, 0, 0, 1, 1);

        dropDownButton = new QPushButton(tabZFS);
        dropDownButton->setObjectName(QStringLiteral("dropDownButton"));
        dropDownButton->setMinimumSize(QSize(0, 50));
        dropDownButton->setMaximumSize(QSize(16777215, 50));
        dropDownButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/arrow-down-double.png"), QSize(), QIcon::Normal, QIcon::Off);
        dropDownButton->setIcon(icon3);
        dropDownButton->setIconSize(QSize(32, 32));

        gridLayout_5->addWidget(dropDownButton, 0, 1, 1, 1);

        fsList = new QTreeWidget(tabZFS);
        fsList->setObjectName(QStringLiteral("fsList"));
        fsList->setContextMenuPolicy(Qt::CustomContextMenu);
        fsList->header()->setCascadingSectionResizes(false);
        fsList->header()->setMinimumSectionSize(100);
        fsList->header()->setStretchLastSection(false);

        gridLayout_5->addWidget(fsList, 1, 0, 1, 2);

        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/kexi.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabContainer->addTab(tabZFS, icon4, QString());

        gridLayout_4->addWidget(tabContainer, 2, 1, 1, 1);

        refreshButton = new QPushButton(centralWidget);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));
        refreshButton->setFocusPolicy(Qt::TabFocus);
        QIcon icon5(QIcon::fromTheme(QStringLiteral("reload")));
        refreshButton->setIcon(icon5);

        gridLayout_4->addWidget(refreshButton, 5, 1, 1, 1);

        ZManagerWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ZManagerWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 22));
        ZManagerWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZManagerWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ZManagerWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ZManagerWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ZManagerWindow->setStatusBar(statusBar);

        retranslateUi(ZManagerWindow);

        tabContainer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ZManagerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ZManagerWindow)
    {
        ZManagerWindow->setWindowTitle(QApplication::translate("ZManagerWindow", "PCBSD Disk Manager", 0));
        QTreeWidgetItem *___qtreewidgetitem = deviceList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ZManagerWindow", "State", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("ZManagerWindow", "Device", 0));
        tabContainer->setTabText(tabContainer->indexOf(tabDisk), QApplication::translate("ZManagerWindow", "Disks", 0));
        QTreeWidgetItem *___qtreewidgetitem1 = zpoolList->headerItem();
        ___qtreewidgetitem1->setText(1, QApplication::translate("ZManagerWindow", "State", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("ZManagerWindow", "Pool Name", 0));
        label->setText(QApplication::translate("ZManagerWindow", "Status:", 0));
        statusLabel->setText(QApplication::translate("ZManagerWindow", "TextLabel", 0));
        toolButton->setText(QApplication::translate("ZManagerWindow", "Clear Error", 0));
        poolLabel->setText(QApplication::translate("ZManagerWindow", "poolname", 0));
        tabContainer->setTabText(tabContainer->indexOf(tabZPools), QApplication::translate("ZManagerWindow", "ZFS Pools", 0));
        QTreeWidgetItem *___qtreewidgetitem2 = fspoolList->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("ZManagerWindow", "Pool Name", 0));
        dropDownButton->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem3 = fsList->headerItem();
        ___qtreewidgetitem3->setText(1, QApplication::translate("ZManagerWindow", "Status", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("ZManagerWindow", "Filesystems", 0));
        tabContainer->setTabText(tabContainer->indexOf(tabZFS), QApplication::translate("ZManagerWindow", "ZFS Filesystems", 0));
        refreshButton->setText(QApplication::translate("ZManagerWindow", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class ZManagerWindow: public Ui_ZManagerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZMANAGERWINDOW_H
