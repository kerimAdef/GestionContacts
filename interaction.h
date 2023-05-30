#ifndef INTERACTION_H
#define INTERACTION_H
#include <ostream>
#include <ctime>
#include <string>
#include <list>
#include"listtodo.h"
#include"date.h"
#include<chrono>

using namespace date;


class interaction
{

private :

    std::string contenu;

public:
    year_month_day date;//la date de l'interaction
    interaction();

    interaction(const year_month_day &, const std::string &);
    ~interaction();

    //accesseurs

    std::string getContenu() const;

    //mutateurs

    void setContenu(const std::string &);

    friend std::ostream &operator <<(std::ostream &,const interaction &);


};

#endif // INTERACTION_H
