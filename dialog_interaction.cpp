#include "dialog_interaction.h"
#include "ui_dialog_interaction.h"

Dialog_interaction::Dialog_interaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_interaction)
{
    ui->setupUi(this);
    inter=new interaction;
}

Dialog_interaction::~Dialog_interaction()
{
    delete ui;
}

void Dialog_interaction::on_ajouter_clicked()
{
    bdd inte;

    QString conte,datein,idc;
    conte=ui->contenu->text();
    datein=ui->dateInteractionLineEdit->text();
    idc=ui->idContact->text();
    inte.connectBD();

    QSqlQuery query;
    query.prepare("insert into interaction (IdContact,Contenu,DateInteraction) values ('"+idc+"','"+conte+"','"+datein+"')");
    if(query.exec()){
        QMessageBox::warning(this,tr("interaction ajouter"),tr("ajouter"));
    }
    else{
        QMessageBox::warning(this,tr("Error"),tr("erreur"));
    }

}

void Dialog_interaction::on_affich_clicked()
{
    QString aff;
    aff=ui->affich->text();
    bdd condb;
    QSqlQueryModel * modele=new QSqlQueryModel();
    condb.connectBD();
    QSqlQuery* query =new QSqlQuery(condb.db);
    query->prepare("select * from interaction");
    query->exec();
    modele->setQuery(*query);
    ui->tableView->setModel(modele);
    qDebug()<<(modele->rowCount());
}

void Dialog_interaction::on_recherche_clicked()
{
    QString reche;
    reche=ui->rech->text();
    bdd condb;
    QSqlQueryModel * modele=new QSqlQueryModel();
    condb.connectBD();
    QSqlQuery* query =new QSqlQuery(condb.db);
    query->prepare("select * from interaction where IdContact='"+reche+"'or DateInteraction='"+reche+"'");
    query->exec();
    modele->setQuery(*query);
    ui->tableView->setModel(modele);
    qDebug()<<(modele->rowCount());
}
