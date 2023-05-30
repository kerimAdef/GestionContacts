/********************************************************************************
** Form generated from reading UI file 'dialog_interaction.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_INTERACTION_H
#define UI_DIALOG_INTERACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_interaction
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idContactLabel;
    QLineEdit *idContact;
    QLabel *contenuInteractionLabel;
    QLineEdit *contenu;
    QLabel *dateInteractionLabel;
    QLineEdit *dateInteractionLineEdit;
    QPushButton *ajouter;
    QTableView *tableView;
    QPushButton *affich;
    QPushButton *recherche;
    QLineEdit *rech;

    void setupUi(QDialog *Dialog_interaction)
    {
        if (Dialog_interaction->objectName().isEmpty())
            Dialog_interaction->setObjectName(QStringLiteral("Dialog_interaction"));
        Dialog_interaction->resize(667, 388);
        formLayoutWidget = new QWidget(Dialog_interaction);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(110, 10, 421, 351));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idContactLabel = new QLabel(formLayoutWidget);
        idContactLabel->setObjectName(QStringLiteral("idContactLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        idContactLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, idContactLabel);

        idContact = new QLineEdit(formLayoutWidget);
        idContact->setObjectName(QStringLiteral("idContact"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idContact);

        contenuInteractionLabel = new QLabel(formLayoutWidget);
        contenuInteractionLabel->setObjectName(QStringLiteral("contenuInteractionLabel"));
        contenuInteractionLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, contenuInteractionLabel);

        contenu = new QLineEdit(formLayoutWidget);
        contenu->setObjectName(QStringLiteral("contenu"));

        formLayout->setWidget(1, QFormLayout::FieldRole, contenu);

        dateInteractionLabel = new QLabel(formLayoutWidget);
        dateInteractionLabel->setObjectName(QStringLiteral("dateInteractionLabel"));
        dateInteractionLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, dateInteractionLabel);

        dateInteractionLineEdit = new QLineEdit(formLayoutWidget);
        dateInteractionLineEdit->setObjectName(QStringLiteral("dateInteractionLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, dateInteractionLineEdit);

        ajouter = new QPushButton(formLayoutWidget);
        ajouter->setObjectName(QStringLiteral("ajouter"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, ajouter);

        tableView = new QTableView(formLayoutWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        formLayout->setWidget(4, QFormLayout::SpanningRole, tableView);

        affich = new QPushButton(formLayoutWidget);
        affich->setObjectName(QStringLiteral("affich"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, affich);

        recherche = new QPushButton(formLayoutWidget);
        recherche->setObjectName(QStringLiteral("recherche"));

        formLayout->setWidget(6, QFormLayout::LabelRole, recherche);

        rech = new QLineEdit(formLayoutWidget);
        rech->setObjectName(QStringLiteral("rech"));

        formLayout->setWidget(6, QFormLayout::FieldRole, rech);


        retranslateUi(Dialog_interaction);

        QMetaObject::connectSlotsByName(Dialog_interaction);
    } // setupUi

    void retranslateUi(QDialog *Dialog_interaction)
    {
        Dialog_interaction->setWindowTitle(QApplication::translate("Dialog_interaction", "Dialog", nullptr));
        idContactLabel->setText(QApplication::translate("Dialog_interaction", "idContact", nullptr));
        contenuInteractionLabel->setText(QApplication::translate("Dialog_interaction", "Contenu Interaction", nullptr));
        dateInteractionLabel->setText(QApplication::translate("Dialog_interaction", "Date Interaction", nullptr));
        ajouter->setText(QApplication::translate("Dialog_interaction", "Ajouter Interaction", nullptr));
        affich->setText(QApplication::translate("Dialog_interaction", "Afficher Interaction", nullptr));
        recherche->setText(QApplication::translate("Dialog_interaction", "Rechrerche Interaction", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_interaction: public Ui_Dialog_interaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_INTERACTION_H
