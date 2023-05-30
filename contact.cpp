#include "contact.h"
#include "date.h"
#include<chrono>
#include <sstream>
#include"listinteraction.h"

//using sys_days = sys_time<days>;
//struct system_clock;
using namespace date;
using namespace std::chrono;
using day_point = std::chrono::time_point<std::chrono::system_clock,days>;
contact::contact()
{

   day_point dp = floor<days>(system_clock::now());

   auto ymd = year_month_day{dp};

interactions.ajoutInteraction(interaction(ymd,"création du contact"));

}

contact::~contact()
{

}

std::string contact::getNom() const{
    return nom;
}

std::string contact::getPrenom() const{
        return prenom;
}
std::string contact::getEntrepise() const{
        return entrepise;
}

std::string contact::getMail() const{
    return mail;
}

std::string contact::getPhoto() const{
    return photo;
}

std::string contact::getTelephone() const{
    return telephone;
}

void contact:: setTelephone(const std::string &value){
    telephone=value;

}
void contact :: setNom(const std::string & value){
    nom=value;
}


void contact :: setPrenom(const std::string & value){
    prenom=value;
}
void contact :: setEntrepise(const std::string & value) {
    entrepise =value;
}

void contact :: setMail(const std::string & value){
    mail=value;
}

void contact ::setPhoto(const std::string &value){
    photo=value;
}



std::ostream & operator <<(std::ostream & os, const contact & c)
{
    os<<"Nom/Prenom:"<<c.getNom()<<"  "<<c.getPrenom()<<" ; ";
    os<<"Mail :"<<c.getMail()<<" ; ";
    os<<"N°telephone"<<c.getTelephone()<<" ; ";
    os<<"Entreprise : "<<c.getEntrepise() ;
    return os;
}










