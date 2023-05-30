/********************************************************************************
** Form generated from reading UI file 'dialog_ajout.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_AJOUT_H
#define UI_DIALOG_AJOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Ajout
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
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
    QLineEdit *photo;
    QPushButton *ajout;
    QPushButton *annuler;
    QPushButton *pushButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_photo_2;

    void setupUi(QDialog *Dialog_Ajout)
    {
        if (Dialog_Ajout->objectName().isEmpty())
            Dialog_Ajout->setObjectName(QStringLiteral("Dialog_Ajout"));
        Dialog_Ajout->resize(800, 450);
        Dialog_Ajout->setMinimumSize(QSize(800, 450));
        Dialog_Ajout->setMaximumSize(QSize(800, 450));
        formLayoutWidget = new QWidget(Dialog_Ajout);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 30, 531, 231));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        nomLabel = new QLabel(formLayoutWidget);
        nomLabel->setObjectName(QStringLiteral("nomLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nomLabel);

        nom = new QLineEdit(formLayoutWidget);
        nom->setObjectName(QStringLiteral("nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nom);

        prenomLabel = new QLabel(formLayoutWidget);
        prenomLabel->setObjectName(QStringLiteral("prenomLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, prenomLabel);

        prenom = new QLineEdit(formLayoutWidget);
        prenom->setObjectName(QStringLiteral("prenom"));

        formLayout->setWidget(1, QFormLayout::FieldRole, prenom);

        entrepriseLabel = new QLabel(formLayoutWidget);
        entrepriseLabel->setObjectName(QStringLiteral("entrepriseLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, entrepriseLabel);

        entreprise = new QLineEdit(formLayoutWidget);
        entreprise->setObjectName(QStringLiteral("entreprise"));

        formLayout->setWidget(2, QFormLayout::FieldRole, entreprise);

        mailLabel = new QLabel(formLayoutWidget);
        mailLabel->setObjectName(QStringLiteral("mailLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, mailLabel);

        mail = new QLineEdit(formLayoutWidget);
        mail->setObjectName(QStringLiteral("mail"));

        formLayout->setWidget(3, QFormLayout::FieldRole, mail);

        telephoneLabel = new QLabel(formLayoutWidget);
        telephoneLabel->setObjectName(QStringLiteral("telephoneLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, telephoneLabel);

        telephone = new QLineEdit(formLayoutWidget);
        telephone->setObjectName(QStringLiteral("telephone"));

        formLayout->setWidget(4, QFormLayout::FieldRole, telephone);

        photo = new QLineEdit(formLayoutWidget);
        photo->setObjectName(QStringLiteral("photo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, photo);

        ajout = new QPushButton(formLayoutWidget);
        ajout->setObjectName(QStringLiteral("ajout"));

        formLayout->setWidget(6, QFormLayout::LabelRole, ajout);

        annuler = new QPushButton(formLayoutWidget);
        annuler->setObjectName(QStringLiteral("annuler"));

        formLayout->setWidget(6, QFormLayout::FieldRole, annuler);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton);

        widget = new QWidget(Dialog_Ajout);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(false);
        widget->setGeometry(QRect(600, 20, 231, 241));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-radius: 10;"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_photo_2 = new QLabel(widget);
        label_photo_2->setObjectName(QStringLiteral("label_photo_2"));
        label_photo_2->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_photo_2->sizePolicy().hasHeightForWidth());
        label_photo_2->setSizePolicy(sizePolicy1);
        label_photo_2->setMaximumSize(QSize(256, 256));
        label_photo_2->setStyleSheet(QStringLiteral("margin: auto;"));
        label_photo_2->setFrameShape(QFrame::StyledPanel);
        label_photo_2->setLineWidth(1);
        label_photo_2->setPixmap(QPixmap(QString::fromUtf8("../../../CDAA/build-CRM-Desktop_Qt_6_1_3_MinGW_64_bit-Debug/avatar.jpg")));
        label_photo_2->setScaledContents(true);
        label_photo_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_photo_2);


        retranslateUi(Dialog_Ajout);

        QMetaObject::connectSlotsByName(Dialog_Ajout);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Ajout)
    {
        Dialog_Ajout->setWindowTitle(QApplication::translate("Dialog_Ajout", "Dialog", nullptr));
        nomLabel->setText(QApplication::translate("Dialog_Ajout", "Nom", nullptr));
        prenomLabel->setText(QApplication::translate("Dialog_Ajout", "Prenom", nullptr));
        entrepriseLabel->setText(QApplication::translate("Dialog_Ajout", "Entreprise", nullptr));
        mailLabel->setText(QApplication::translate("Dialog_Ajout", "Mail", nullptr));
        telephoneLabel->setText(QApplication::translate("Dialog_Ajout", "Telephone", nullptr));
        ajout->setText(QApplication::translate("Dialog_Ajout", "Ajouter", nullptr));
        annuler->setText(QApplication::translate("Dialog_Ajout", "Annuler", nullptr));
        pushButton->setText(QApplication::translate("Dialog_Ajout", "Photo", nullptr));
        label_photo_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_Ajout: public Ui_Dialog_Ajout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_AJOUT_H
