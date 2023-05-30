#include "interaction.h"
#include"date.h"
#include<iostream>


interaction::interaction()
{

}


interaction::interaction(const  year_month_day & d, const std::string & c){
    this->date=d;
    this->setContenu(c);
}

interaction::~interaction(){

}


std::string interaction::getContenu() const{
    return contenu;
}



void interaction::setContenu(const std::string & c){
    contenu = c;
}


std::ostream & operator <<(std::ostream & os, const interaction & i)
{
    os<<"contenu de l'interaction "<<i.contenu;
    os<<"  l'heure de l'interaction"<<i.date;
    return os;
}
