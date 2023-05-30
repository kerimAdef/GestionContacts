/********************************************************************************
** Form generated from reading UI file 'dialog_ajout_modif.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_AJOUT_MODIF_H
#define UI_DIALOG_AJOUT_MODIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_ajout_modif
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLineEdit *idcon;
    QLabel *nomLabel;
    QLineEdit *nom;
    QLabel *prenomLabel;
    QLineEdit *prenom;
    QLabel *entrepriseLabel;
    QLineEdit *entreprise;
    QLabel *mailLabel;
    QLineEdit *mail;
    QLabel *telephoneLabel;
    QLineEdit *telephone;
    QPushButton *supprime;
    QPushButton *modifie;
    QLineEdit *photo;
    QLabel *photoLabel;

    void setupUi(QDialog *Dialog_ajout_modif)
    {
        if (Dialog_ajout_modif->objectName().isEmpty())
            Dialog_ajout_modif->setObjectName(QStringLiteral("Dialog_ajout_modif"));
        Dialog_ajout_modif->resize(1205, 592);
        formLayoutWidget = new QWidget(Dialog_ajout_modif);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(180, 160, 651, 301));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idLabel = new QLabel(formLayoutWidget);
        idLabel->setObjectName(QStringLiteral("idLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, idLabel);

        idcon = new QLineEdit(formLayoutWidget);
        idcon->setObjectName(QStringLiteral("idcon"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idcon);

        nomLabel = new QLabel(formLayoutWidget);
        nomLabel->setObjectName(QStringLiteral("nomLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nomLabel);

        nom = new QLineEdit(formLayoutWidget);
        nom->setObjectName(QStringLiteral("nom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nom);

        prenomLabel = new QLabel(formLayoutWidget);
        prenomLabel->setObjectName(QStringLiteral("prenomLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, prenomLabel);

        prenom = new QLineEdit(formLayoutWidget);
        prenom->setObjectName(QStringLiteral("prenom"));

        formLayout->setWidget(2, QFormLayout::FieldRole, prenom);

        entrepriseLabel = new QLabel(formLayoutWidget);
        entrepriseLabel->setObjectName(QStringLiteral("entrepriseLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, entrepriseLabel);

        entreprise = new QLineEdit(formLayoutWidget);
        entreprise->setObjectName(QStringLiteral("entreprise"));

        formLayout->setWidget(3, QFormLayout::FieldRole, entreprise);

        mailLabel = new QLabel(formLayoutWidget);
        mailLabel->setObjectName(QStringLiteral("mailLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, mailLabel);

        mail = new QLineEdit(formLayoutWidget);
        mail->setObjectName(QStringLiteral("mail"));

        formLayout->setWidget(4, QFormLayout::FieldRole, mail);

        telephoneLabel = new QLabel(formLayoutWidget);
        telephoneLabel->setObjectName(QStringLiteral("telephoneLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, telephoneLabel);

        telephone = new QLineEdit(formLayoutWidget);
        telephone->setObjectName(QStringLiteral("telephone"));

        formLayout->setWidget(5, QFormLayout::FieldRole, telephone);

        supprime = new QPushButton(formLayoutWidget);
        supprime->setObjectName(QStringLiteral("supprime"));
        supprime->setMinimumSize(QSize(300, 0));
        supprime->setMaximumSize(QSize(1000, 16777215));

        formLayout->setWidget(7, QFormLayout::LabelRole, supprime);

        modifie = new QPushButton(formLayoutWidget);
        modifie->setObjectName(QStringLiteral("modifie"));
        modifie->setMinimumSize(QSize(300, 0));
        modifie->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(7, QFormLayout::FieldRole, modifie);

        photo = new QLineEdit(formLayoutWidget);
        photo->setObjectName(QStringLiteral("photo"));

        formLayout->setWidget(6, QFormLayout::FieldRole, photo);

        photoLabel = new QLabel(formLayoutWidget);
        photoLabel->setObjectName(QStringLiteral("photoLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, photoLabel);


        retranslateUi(Dialog_ajout_modif);

        QMetaObject::connectSlotsByName(Dialog_ajout_modif);
    } // setupUi

    void retranslateUi(QDialog *Dialog_ajout_modif)
    {
        Dialog_ajout_modif->setWindowTitle(QApplication::translate("Dialog_ajout_modif", "Dialog", nullptr));
        idLabel->setText(QApplication::translate("Dialog_ajout_modif", "id", nullptr));
        nomLabel->setText(QApplication::translate("Dialog_ajout_modif", "Nom", nullptr));
        prenomLabel->setText(QApplication::translate("Dialog_ajout_modif", "prenom", nullptr));
        entrepriseLabel->setText(QApplication::translate("Dialog_ajout_modif", "Entreprise", nullptr));
        mailLabel->setText(QApplication::translate("Dialog_ajout_modif", "mail", nullptr));
        telephoneLabel->setText(QApplication::translate("Dialog_ajout_modif", "Telephone", nullptr));
        supprime->setText(QApplication::translate("Dialog_ajout_modif", "Supprimer", nullptr));
        modifie->setText(QApplication::translate("Dialog_ajout_modif", "Modifier", nullptr));
        photoLabel->setText(QApplication::translate("Dialog_ajout_modif", "photo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_ajout_modif: public Ui_Dialog_ajout_modif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_AJOUT_MODIF_H
