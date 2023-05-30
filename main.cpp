#include "contact.h"
#include <QApplication>
#include "date.h"
#include "contact.h"
#include "listcontact.h"
#include "todo.h"
#include "listtodo.h"
#include "interaction.h"
#include "listinteraction.h"
#include"chrono_io.h"
#include<iostream>
#include"mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //instanciation
    listtodo l;
    Todo t;

    interaction i1;
    interaction i2;
    listinteraction lI;

    contact c1;
    contact c2;
    ListContact lC;
//création des contactes
    c1.setNom("agbagno");
    c1.setPrenom("kodjo");
    c1.setEntrepise("e");
    c1.setMail("ka@gmaoil");

    c2.setNom("abdelkerim");
    c2.setPrenom("adef");
    c2.setEntrepise("a");
    c2.setMail("aa@gmaoil");


    lC.ajoutContact(c1);
    lC.ajoutContact(c2);

    //affichage du contacte2
    std::cout << c2 << std::endl;
//affichage de la liste de contact
    std::cout << lC << std::endl;
//supression d'un contacte et affichage
    lC.suppContact("agbagno");
    std::cout << lC << std::endl;


    //création des interaction et affichage
    i1.setContenu("modification");
    i2.setContenu("hello word");
    lI.ajoutInteraction(i1);
    lI.ajoutInteraction(i2);
    std::cout << lI << std::endl;

    //création des todo et affichage
    t.setAction("modification");
    Todo v("hello");
    l.ajoutTodo(t);
    l.ajoutTodo(v);
    std::cout << l << std::endl;

    w.show();
    return a.exec();
}
