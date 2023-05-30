/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter;
    QAction *actionsupprimer_et_modifier;
    QAction *actionajoutInterction;
    QAction *actionajouttag;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QPushButton *afficheCon;
    QTableView *tableView;
    QLabel *rechercherContactLabel;
    QLineEdit *rechercher;
    QPushButton *buttonrecherche;
    QMenuBar *menubar;
    QMenu *menuajouter;
    QMenu *menuInteraction;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(772, 776);
        actionAjouter = new QAction(MainWindow);
        actionAjouter->setObjectName(QStringLiteral("actionAjouter"));
        actionsupprimer_et_modifier = new QAction(MainWindow);
        actionsupprimer_et_modifier->setObjectName(QStringLiteral("actionsupprimer_et_modifier"));
        actionajoutInterction = new QAction(MainWindow);
        actionajoutInterction->setObjectName(QStringLiteral("actionajoutInterction"));
        actionajouttag = new QAction(MainWindow);
        actionajouttag->setObjectName(QStringLiteral("actionajouttag"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(50, 150, 671, 311));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        afficheCon = new QPushButton(formLayoutWidget);
        afficheCon->setObjectName(QStringLiteral("afficheCon"));

        formLayout->setWidget(0, QFormLayout::LabelRole, afficheCon);

        tableView = new QTableView(formLayoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, tableView);

        rechercherContactLabel = new QLabel(formLayoutWidget);
        rechercherContactLabel->setObjectName(QStringLiteral("rechercherContactLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        rechercherContactLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, rechercherContactLabel);

        rechercher = new QLineEdit(formLayoutWidget);
        rechercher->setObjectName(QStringLiteral("rechercher"));

        formLayout->setWidget(2, QFormLayout::FieldRole, rechercher);

        buttonrecherche = new QPushButton(formLayoutWidget);
        buttonrecherche->setObjectName(QStringLiteral("buttonrecherche"));

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonrecherche);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 772, 19));
        menuajouter = new QMenu(menubar);
        menuajouter->setObjectName(QStringLiteral("menuajouter"));
        menuInteraction = new QMenu(menubar);
        menuInteraction->setObjectName(QStringLiteral("menuInteraction"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuajouter->menuAction());
        menubar->addAction(menuInteraction->menuAction());
        menuajouter->addAction(actionAjouter);
        menuajouter->addAction(actionsupprimer_et_modifier);
        menuInteraction->addAction(actionajoutInterction);
        menuInteraction->addAction(actionajouttag);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Contact", nullptr));
        actionAjouter->setText(QApplication::translate("MainWindow", "&Ajouter", nullptr));
        actionsupprimer_et_modifier->setText(QApplication::translate("MainWindow", "&supprimer et modifier", nullptr));
        actionajoutInterction->setText(QApplication::translate("MainWindow", "ajoutInterction", nullptr));
        actionajouttag->setText(QApplication::translate("MainWindow", "ajouttag", nullptr));
        afficheCon->setText(QApplication::translate("MainWindow", "Afficher Contact", nullptr));
        rechercherContactLabel->setText(QApplication::translate("MainWindow", "Rechercher Contact", nullptr));
        buttonrecherche->setText(QApplication::translate("MainWindow", "Recherche", nullptr));
        menuajouter->setTitle(QApplication::translate("MainWindow", "&Gerer Contact", nullptr));
        menuInteraction->setTitle(QApplication::translate("MainWindow", "Inte&raction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
