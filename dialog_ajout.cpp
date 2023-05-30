#include "dialog_ajout.h"
#include "ui_dialog_ajout.h"

Dialog_Ajout::Dialog_Ajout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_Ajout)
{
    ui->setupUi(this);
    con=new contact;
    lc=new ListContact;
}

Dialog_Ajout::~Dialog_Ajout()
{
    delete ui;
}

void Dialog_Ajout::on_ajout_clicked()
{

    bdd h;
    con->setNom(ui->nom->text().toStdString());
    con->setPrenom(ui->prenom->text().toStdString());
    con->setEntrepise(ui->entreprise->text().toStdString());
    con->setMail(ui->mail->text().toStdString());
    con->setTelephone(ui->telephone->text().toStdString());
    con->setPhoto(ui->photo->text().toStdString());
    lc->ajoutContact(*con);

  h.connectBD();
  QSqlQuery query;
  query.prepare("insert into contact (nom, prenom, entreprise, mail, telephone, photo) VALUES (:nom, :prenom, :entreprise, :mail, :telephone, :photo)");


   query.bindValue(":nom",QString::fromStdString(con->getNom()));
   query.bindValue(":prenom",QString::fromStdString(con->getPrenom()));
   query.bindValue(":entreprise",QString::fromStdString(con->getEntrepise()));
   query.bindValue(":mail",QString::fromStdString(con->getMail()));
   query.bindValue(":telephone",QString::fromStdString(con->getTelephone()));
   query.bindValue(":photo",QString::fromStdString(con->getPhoto()));query.bindValue(":photo",QString::fromStdString(con->getPhoto()));
   if(query.exec()){
       //QMessageBox:Warning(this,tr("contact ajouter"),tr("ajouter"));
       QMessageBox::warning(this,tr("contact ajouter"),tr("ajouter"));

       emit sigAddContact(*con);
   }


 }

