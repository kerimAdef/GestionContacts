#ifndef CONTACT_H
#define CONTACT_H
#include "date.h"
#include <QWidget>
#include <interaction.h>
#include <string>
#include"listinteraction.h"
#include<chrono>
#include<iostream>

using namespace date;



class contact
{

private:
   std :: string nom;
   std :: string prenom;
   std :: string entrepise;
   std :: string mail;
   std :: string  telephone;
   //year_month_day creation;
   std :: string photo;
   listinteraction interactions;

public:
   year_month_day creation;

    contact();
    ~contact();

  //accesseurs

    std::string getNom() const;
    std::string getPrenom() const;
    std::string getEntrepise() const;
    std::string getMail() const;
    std::string getPhoto() const;
    std::string getTelephone() const;


    //mutateurs

    void setNom(const std::string &);
    void setPrenom(const std::string &);
    void setEntrepise(const std::string &);
    void setMail(const std::string &);
     void setPhoto(const std::string &);
    void setTelephone(const std::string &);

    std::string toString();

    friend std::ostream &operator <<(std::ostream &,const contact &);



};

#endif // CONTACT_H
