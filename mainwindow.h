#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "contact.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "dialog_ajout.h"
#include "dialog_ajout_modif.h"
#include "dialog_interaction.h"
#include "bdd.h"
#include "dialogtodo.h"
#include <QDebug>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    contact *con;
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_afficheCon_clicked();

    void on_actionAjouter_triggered();

    void on_actionsupprimer_et_modifier_triggered();

    void on_buttonrecherche_clicked();

    void on_actionajoutInterction_triggered();

    void on_actionajouttag_triggered();

private:
    Ui::MainWindow *ui;
    bdd base;
    Dialog_Ajout *dt;
};
#endif // MAINWINDOW_H
