#ifndef DIALOG_AJOUT_MODIF_H
#include "bdd.h"
#include "contact.h"
#include <QMessageBox>
#include "listcontact.h"
#define DIALOG_AJOUT_MODIF_H

#include <QDialog>

namespace Ui {
class Dialog_ajout_modif;
}

class Dialog_ajout_modif : public QDialog
{
    Q_OBJECT
    contact *cont;
    ListContact *lt;

public:
    explicit Dialog_ajout_modif(QWidget *parent = nullptr);
    ~Dialog_ajout_modif();

private slots:
    void on_supprime_clicked();

    void on_modifie_clicked();

private:
    Ui::Dialog_ajout_modif *ui;
};

#endif // DIALOG_AJOUT_MODIF_H
