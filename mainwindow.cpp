#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    contact *con;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_afficheCon_clicked()
{
    bdd condb;
QSqlQueryModel * modele=new QSqlQueryModel();
  condb.connectBD();
    QSqlQuery* query =new QSqlQuery(condb.db);
    query->prepare("select * from contact");
    query->exec();
    modele->setQuery(*query);
    ui->tableView->setModel(modele);
    qDebug()<<(modele->rowCount());

}
void MainWindow::on_actionAjouter_triggered()
{
   Dialog_Ajout *dt=new Dialog_Ajout();
   dt->setModal(true);
   dt->exec();
//   connect(dt,SIGNAL(sigAddContact(contact &)),&base,slot(ajoutContactbd(contact &)));
}

void MainWindow::on_actionsupprimer_et_modifier_triggered()
{
    Dialog_ajout_modif dm;
    dm.setModal(true);
    dm.exec();
}

void MainWindow::on_buttonrecherche_clicked()
{
    QString rech;
    rech=ui->rechercher->text();
    bdd condb;
    QSqlQueryModel * modele=new QSqlQueryModel();
    condb.connectBD();
    QSqlQuery* query =new QSqlQuery(condb.db);
    query->prepare("select * from contact where nom='"+rech+"'or prenom='"+rech+"'or entreprise='"+rech+"'");
    query->exec();
    modele->setQuery(*query);
    ui->tableView->setModel(modele);
    qDebug()<<(modele->rowCount());

}

void MainWindow::on_actionajoutInterction_triggered()
{
    Dialog_interaction di;
    di.setModal(true);
    di.exec();
}

void MainWindow::on_actionajouttag_triggered()
{
    Dialogtodo dt;
    dt.setModal(true);
    dt.exec();


}
