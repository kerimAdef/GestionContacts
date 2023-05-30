#include "dialog_ajout_modif.h"
#include "ui_dialog_ajout_modif.h"
Dialog_ajout_modif::Dialog_ajout_modif(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_ajout_modif)
{
    ui->setupUi(this);
    cont=new contact();
    lt=new ListContact();
}

Dialog_ajout_modif::~Dialog_ajout_modif()
{
    delete ui;

}

void Dialog_ajout_modif::on_supprime_clicked()
{


   bdd h;
   cont->setNom(ui->nom->text().toStdString());
   cont->setPrenom(ui->prenom->text().toStdString());
   cont->setEntrepise(ui->entreprise->text().toStdString());
   cont->setMail(ui->mail->text().toStdString());
   cont->setTelephone(ui->telephone->text().toStdString());
   cont->setPhoto(ui->photo->text().toStdString());
   lt->ajoutContact(*cont);


  h.connectBD();

  QSqlQuery query;
   query.prepare("DELETE FROM contact WHERE nom=:nom ");
   query.bindValue(":nom",QString::fromStdString(cont->getNom()));
   query.bindValue(":prenom",QString::fromStdString(cont->getPrenom()));
   query.bindValue(":entreprise",QString::fromStdString(cont->getEntrepise()));
   query.bindValue(":mail",QString::fromStdString(cont->getMail()));
   query.bindValue(":photo",QString::fromStdString(cont->getPhoto()));
   query.bindValue(":telephone",QString::fromStdString(cont->getTelephone()));
   if(query.exec()){
       QMessageBox::critical(this,tr("Delete"),tr("deleted"));
   }

}

void Dialog_ajout_modif::on_modifie_clicked()
{
    bdd h;
    QString eid,name,prename,societe,email,phone,pictu;
    eid=ui->idcon->text();
    name=ui->nom->text();
    prename=ui->prenom->text();
    societe=ui->entreprise->text();
    email=ui->mail->text();
    phone=ui->telephone->text();
    pictu=ui->photo->text();




  h.connectBD();
  QSqlQuery query;
  query.prepare("update contact set id='"+eid+"', nom='"+name+"', prenom='"+prename+"', entreprise='"+societe+"', mail='"+email+"', telephone='"+phone+"', photo='"+pictu+"' where id='"+eid+"'");


   if(query.exec()){
       QMessageBox::warning(this,tr("contact modifier"),tr("modifier"));
}
   else {
       QMessageBox::warning(this,tr("ERROR"),tr("erreur"));
   }

}
