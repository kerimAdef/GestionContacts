#include "bdd.h"

bdd::bdd(QObject *parent) : QObject(parent)
{

}
bool bdd::connectBD()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./base.sqlite");
    if(!db.open())
    {
        qDebug()<<"pas de connexion BDD";
        dbouvert=false;
    }
    else {
        qDebug()<<"Connexion ok";
        dbouvert=true;
    }
     return dbouvert;
}


void bdd::ajoutContactbd(contact &contact){

    if(dbouvert==true){

       QSqlQuery query;
       query.prepare("INSERT INTO contact (nom, prenom, mail, entreprise, photo, telephone) VALUES (:nom, :prenom, :mail, :entreprise, :photo, :telephone");

       query.bindValue(":nom", QString(contact.getNom().c_str()));
       query.bindValue(":prenom", QString(contact.getPrenom().c_str()));
       query.bindValue(":entreprise", QString(contact.getEntrepise().c_str()));
       query.bindValue(":mail", QString(contact.getMail().c_str()));
       //query.bindValue(":telephone", QString(contact.getTelephone().c_str()));
       //query.bindValue(":photo", QString(contact.getUrlPhoto().c_str()));
       //query.bindValue(":creation", QString(creation.c_str()));
       //query.bindValue(":derniere_modif", QString(derniere_modif.c_str()));
       query.exec();
       if(!query.exec())
       {
           qDebug()<<"Erreur à la creation";

       }

    }
}
void bdd::supprimerContactbd(contact &contact)
{
//    if(dbouvert==true)
//    {
//        QSqlsQuery query;

//       //Date date_cre=contact.getCreation(), date_modif=contact.getDerniereModif();
//        //string creation=date_cre.toStr(), derniere_modif=date_modif.toStr();
//        query.prepare("DELETE FROM contact WHERE nom=:nom and prenom=:prenom and mail=:mail and entreprise=:entreprise and photo=:photo and telephone:=telephone");
//        query.bindValue(":nom", QString(contact.getNom().c_str()));
//        query.bindValue(":prenom", QString(contact.getPrenom().c_str()));
//        query.bindValue(":mail", QString(contact.getMail().c_str()));
//        query.bindValue(":entreprise", QString(contact.getEntrepise().c_str()));
//        query.bindValue(":url_photo", QString(contact.getPhoto().c_str()));
//        //query.bindValue(":creation", QString(creation.c_str()));
//        //query.bindValue(":derniere_modif", QString(derniere_modif.c_str()));
//        query.exec();
//        if(!query.exec())
//        {
//            qDebug()<<"Erreur à la creation";

//        }
//    }
//    db.close();
}

void bdd::modifierContactBd(contact &oldcontact, contact &newcontac)
{
//    if(dbouvert==true)
//    {
//        QSqlQuery query;
//        query.prepare("UPDATE Contact SET nom=:newnom, prenom=:newprenom, mail=:newmail, entreprise=:newentreprise, url_photo=:newurl_photo, creation=:newcreation, derniere_modif=:newderniere_modif WHERE nom=:nom and prenom=:prenom and mail=:mail and entreprise=:entreprise and url_photo=:url_photo and creation=:creation and derniere_modif=:dernier_modif");
//        //Date date_creold=oldcontact.getCreation(), date_modifold=oldcontact.getDerniereModif();
//        //string creation=date_creold.toStr(), derniere_modifold=date_modifold.toStr();

//        query.bindValue(":nom", QString(oldcontact.getNom().c_str()));
//        query.bindValue(":prenom", QString(oldcontact.getPrenom().c_str()));
//        query.bindValue(":mail", QString(oldcontact.getMail().c_str()));
//        query.bindValue(":entreprise", QString(oldcontact.getEntrepise().c_str()));
//        query.bindValue(":url_photo", QString(oldcontact.getPhoto().c_str()));
//        //query.bindValue(":creation", QString(creation.c_str()));
//        //query.bindValue(":derniere_modif", QString(derniere_modifold.c_str()));

//        //Date date_crenew=newcontact.getCreation(), date_modifnew=newcontact.getDerniereModif();
//        //string creationnew=date_crenew.toStr(), derniere_modifnew=date_modifnew.toStr();

//        query.bindValue(":newnom", QString(newcontac.getNom().c_str()));
//        query.bindValue(":newprenom", QString(newcontac.getPrenom().c_str()));
//        query.bindValue(":newmail", QString(newcontac.getMail().c_str()));
//        query.bindValue(":newentreprise", QString(newcontac.getEntrepise().c_str()));
//        query.bindValue(":newphoto", QString(newcontac.getPhoto().c_str()));
//        //query.bindValue(":newcreation", QString(creationnew.c_str()));
//        //query.bindValue(":newderniere_modif", QString(derniere_modifnew.c_str()));
//        query.exec();
//        if(!query.exec())
//        {
//            qDebug()<<"Erreur à la creation";

//        }
//    }
//    db.close();
}


