/********************************************************************************
** Form generated from reading UI file 'dialogtodo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTODO_H
#define UI_DIALOGTODO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogtodo
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *idLabel;
    QLineEdit *idLineEdit;
    QLabel *contenuLabel;
    QLineEdit *contenuLineEdit;
    QLabel *datetodoLabel;
    QLineEdit *datetodoLineEdit;
    QPushButton *ajout;

    void setupUi(QDialog *Dialogtodo)
    {
        if (Dialogtodo->objectName().isEmpty())
            Dialogtodo->setObjectName(QStringLiteral("Dialogtodo"));
        Dialogtodo->resize(400, 300);
        Dialogtodo->setMinimumSize(QSize(400, 300));
        Dialogtodo->setMaximumSize(QSize(400, 400));
        formLayoutWidget = new QWidget(Dialogtodo);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(40, 40, 271, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idLabel = new QLabel(formLayoutWidget);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        idLabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, idLabel);

        idLineEdit = new QLineEdit(formLayoutWidget);
        idLineEdit->setObjectName(QStringLiteral("idLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idLineEdit);

        contenuLabel = new QLabel(formLayoutWidget);
        contenuLabel->setObjectName(QStringLiteral("contenuLabel"));
        contenuLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, contenuLabel);

        contenuLineEdit = new QLineEdit(formLayoutWidget);
        contenuLineEdit->setObjectName(QStringLiteral("contenuLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, contenuLineEdit);

        datetodoLabel = new QLabel(formLayoutWidget);
        datetodoLabel->setObjectName(QStringLiteral("datetodoLabel"));
        datetodoLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, datetodoLabel);

        datetodoLineEdit = new QLineEdit(formLayoutWidget);
        datetodoLineEdit->setObjectName(QStringLiteral("datetodoLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, datetodoLineEdit);

        ajout = new QPushButton(formLayoutWidget);
        ajout->setObjectName(QStringLiteral("ajout"));

        formLayout->setWidget(3, QFormLayout::FieldRole, ajout);


        retranslateUi(Dialogtodo);

        QMetaObject::connectSlotsByName(Dialogtodo);
    } // setupUi

    void retranslateUi(QDialog *Dialogtodo)
    {
        Dialogtodo->setWindowTitle(QApplication::translate("Dialogtodo", "Dialog", nullptr));
        idLabel->setText(QApplication::translate("Dialogtodo", "Id ", nullptr));
        contenuLabel->setText(QApplication::translate("Dialogtodo", "contenu", nullptr));
        datetodoLabel->setText(QApplication::translate("Dialogtodo", "datetodo", nullptr));
        ajout->setText(QApplication::translate("Dialogtodo", "Ajout todo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogtodo: public Ui_Dialogtodo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTODO_H
