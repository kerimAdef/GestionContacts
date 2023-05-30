#include "dialogtodo.h"
#include "ui_dialogtodo.h"

Dialogtodo::Dialogtodo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogtodo)
{
    ui->setupUi(this);
}

Dialogtodo::~Dialogtodo()
{
    delete ui;
}

void Dialogtodo::on_ajout_clicked()
{
    bdd inte;

    QString conte,datetag,idtag;
    conte=ui->contenuLineEdit->text();
    datetag=ui->datetodoLineEdit->text();
    idtag=ui->idLineEdit->text();
    inte.connectBD();

    QSqlQuery query;
    query.prepare("insert into todo (idinteraction,Contenu,datetag) values ('"+idtag+"','"+conte+"','"+datetag+"')");
    if(query.exec()){
        QMessageBox::warning(this,tr("tag ajouter"),tr("ajouter"));
    }
    else{
        QMessageBox::warning(this,tr("Error"),tr("erreur"));
    }
}
