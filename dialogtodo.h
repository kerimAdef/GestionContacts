#ifndef DIALOGTODO_H
#include "bdd.h"
#include <qmessagebox.h>
#define DIALOGTODO_H

#include <QDialog>

namespace Ui {
class Dialogtodo;
}

class Dialogtodo : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogtodo(QWidget *parent = nullptr);
    ~Dialogtodo();

private slots:
    void on_ajout_clicked();

private:
    Ui::Dialogtodo *ui;
};

#endif // DIALOGTODO_H
