#ifndef TODO_H
#define TODO_H
#include"date.h"
#include<chrono>

using namespace date;


class Todo
{
private:
    std::string action;


public:
    year_month_day date;
    //constructeur
    Todo();
    Todo(const std::string &);
    Todo(const std::string &, const year_month_day &);


    //accesseur
    std::string getAction() const;


//mutateurs
    void setAction(const std::string &);


     friend std::ostream &operator <<(std::ostream &,const Todo &);


};

#endif // TODO_H
