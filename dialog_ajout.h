#ifndef DIALOG_AJOUT_H
#include "bdd.h"
#include "listcontact.h"
#include "contact.h"
#define DIALOG_AJOUT_H
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class Dialog_Ajout;
}

class Dialog_Ajout : public QDialog
{
    Q_OBJECT
contact *con;
ListContact *lc;
public:
    explicit Dialog_Ajout(QWidget *parent = nullptr);
    ~Dialog_Ajout();

private slots:
    void on_ajout_clicked();
signals:
    void sigAddContact(contact &);

private:
    Ui::Dialog_Ajout *ui;
};

#endif // DIALOG_AJOUT_H
