#ifndef BDD_H
#define BDD_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQueryModel>
#include "listcontact.h"
#include "contact.h"
#include "interaction.h"
#include <QVariant>
#include <QDebug>
#include <QObject>


class bdd : public QObject
{
    Q_OBJECT
private:

    bool dbouvert;
//    bool connectBD();
//    void closebd();

    void supprimerContactbd(contact &contact);
    void modifierContactBd(contact &oldcontact, contact &newcontac);
public:
    QSqlDatabase db;
    bool connectBD();
    //void closebd();
    explicit bdd(QObject *parent = nullptr);
signals:
   // void bdCreate(contact &contact);
   // void bddDelete(contact &contact);
   // void bddUpdate(contact &oldcontact, contact &newcontact);

public slots:
     void ajoutContactbd(contact &);
};

#endif // BDD_H
