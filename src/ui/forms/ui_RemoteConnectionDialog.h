/********************************************************************************
** Form generated from reading UI file 'RemoteConnectionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTECONNECTIONDIALOG_H
#define UI_REMOTECONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoteConnectionDialog
{
public:
    QFormLayout *formLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *cancelConnectToRemoteServerButton;
    QPushButton *connectToRemoteServerButton;
    QWidget *StartServerTab;
    QFormLayout *formLayout_3;
    QLabel *ServerRunningStatusText;
    QLabel *label_3;
    QSpinBox *serverListenPortInput;
    QHBoxLayout *horizontalLayout;
    QPushButton *startServerButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *RemoteConnectionDialog)
    {
        if (RemoteConnectionDialog->objectName().isEmpty())
            RemoteConnectionDialog->setObjectName(QStringLiteral("RemoteConnectionDialog"));
        RemoteConnectionDialog->resize(825, 324);
        RemoteConnectionDialog->setMinimumSize(QSize(800, 300));
        RemoteConnectionDialog->setBaseSize(QSize(800, 300));
        formLayout_2 = new QFormLayout(RemoteConnectionDialog);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        tabWidget = new QTabWidget(RemoteConnectionDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 50));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayout = new QFormLayout(tab);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        cancelConnectToRemoteServerButton = new QPushButton(tab);
        cancelConnectToRemoteServerButton->setObjectName(QStringLiteral("cancelConnectToRemoteServerButton"));

        horizontalLayout_4->addWidget(cancelConnectToRemoteServerButton);

        connectToRemoteServerButton = new QPushButton(tab);
        connectToRemoteServerButton->setObjectName(QStringLiteral("connectToRemoteServerButton"));

        horizontalLayout_4->addWidget(connectToRemoteServerButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_4);

        tabWidget->addTab(tab, QString());
        StartServerTab = new QWidget();
        StartServerTab->setObjectName(QStringLiteral("StartServerTab"));
        formLayout_3 = new QFormLayout(StartServerTab);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        ServerRunningStatusText = new QLabel(StartServerTab);
        ServerRunningStatusText->setObjectName(QStringLiteral("ServerRunningStatusText"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(ServerRunningStatusText->sizePolicy().hasHeightForWidth());
        ServerRunningStatusText->setSizePolicy(sizePolicy3);
        ServerRunningStatusText->setMinimumSize(QSize(0, 0));

        formLayout_3->setWidget(0, QFormLayout::SpanningRole, ServerRunningStatusText);

        label_3 = new QLabel(StartServerTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(2);
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);
        label_3->setMinimumSize(QSize(0, 0));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        serverListenPortInput = new QSpinBox(StartServerTab);
        serverListenPortInput->setObjectName(QStringLiteral("serverListenPortInput"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(2);
        sizePolicy5.setHeightForWidth(serverListenPortInput->sizePolicy().hasHeightForWidth());
        serverListenPortInput->setSizePolicy(sizePolicy5);
        serverListenPortInput->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(8);
        serverListenPortInput->setFont(font);
        serverListenPortInput->setMinimum(1);
        serverListenPortInput->setMaximum(65535);
        serverListenPortInput->setValue(8081);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, serverListenPortInput);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startServerButton = new QPushButton(StartServerTab);
        startServerButton->setObjectName(QStringLiteral("startServerButton"));
        sizePolicy2.setHeightForWidth(startServerButton->sizePolicy().hasHeightForWidth());
        startServerButton->setSizePolicy(sizePolicy2);
        startServerButton->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(startServerButton);

        pushButton_3 = new QPushButton(StartServerTab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(pushButton_3);


        formLayout_3->setLayout(2, QFormLayout::SpanningRole, horizontalLayout);

        tabWidget->addTab(StartServerTab, QString());
        startServerButton->raise();
        label_3->raise();
        ServerRunningStatusText->raise();
        serverListenPortInput->raise();
        pushButton_3->raise();

        formLayout_2->setWidget(0, QFormLayout::LabelRole, tabWidget);


        retranslateUi(RemoteConnectionDialog);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(RemoteConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *RemoteConnectionDialog)
    {
        RemoteConnectionDialog->setWindowTitle(QApplication::translate("RemoteConnectionDialog", "Remote Connection", 0));
        label->setText(QApplication::translate("RemoteConnectionDialog", "Remote Server IP Address", 0));
        label_2->setText(QApplication::translate("RemoteConnectionDialog", "Remote Server Port", 0));
        cancelConnectToRemoteServerButton->setText(QApplication::translate("RemoteConnectionDialog", "Cancel", 0));
        connectToRemoteServerButton->setText(QApplication::translate("RemoteConnectionDialog", "Connect", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("RemoteConnectionDialog", "Connect Remote", 0));
        ServerRunningStatusText->setText(QApplication::translate("RemoteConnectionDialog", "Server not running", 0));
        label_3->setText(QApplication::translate("RemoteConnectionDialog", "Server Port", 0));
        startServerButton->setText(QApplication::translate("RemoteConnectionDialog", "Start", 0));
        pushButton_3->setText(QApplication::translate("RemoteConnectionDialog", "Stop", 0));
        tabWidget->setTabText(tabWidget->indexOf(StartServerTab), QApplication::translate("RemoteConnectionDialog", "Start Server", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoteConnectionDialog: public Ui_RemoteConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTECONNECTIONDIALOG_H
