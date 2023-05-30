#ifndef DIALOG_INTERACTION_H
#include "bdd.h"
#include "interaction.h"
#include <QMessageBox>
#define DIALOG_INTERACTION_H

#include <QDialog>

namespace Ui {
class Dialog_interaction;
}

class Dialog_interaction : public QDialog
{
    interaction *inter;
    Q_OBJECT

public:
    explicit Dialog_interaction(QWidget *parent = nullptr);
    ~Dialog_interaction();

private slots:
    void on_ajouter_clicked();

    void on_affich_clicked();

    void on_recherche_clicked();

private:
    Ui::Dialog_interaction *ui;
};

#endif // DIALOG_INTERACTION_H
