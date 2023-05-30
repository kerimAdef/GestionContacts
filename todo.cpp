#include "todo.h"
#include "date.h"
#include<iostream>
#include<chrono>


//using sys_days = sys_time<days>;
//struct system_clock;
using namespace date;
using namespace std::chrono;
using day_point = std::chrono::time_point<std::chrono::system_clock,days>;
Todo::Todo()
{


}

Todo::Todo(const std::string & a)
{
    day_point dp = floor<days>(system_clock::now());

    auto ymd = year_month_day{dp};
    date=ymd;
    this->setAction(a);

}
Todo::Todo( const std::string & a ,const  year_month_day & d){
    this->date=d;
    this->setAction(a);
}

std::ostream & operator <<(std::ostream & os, const Todo& i)
{
    os<<"l'action a effectué "<<i.getAction();
    os<<"  l'heure prévu d'execution"<<i.date;
    return os;
}

std::string Todo::getAction() const{
    return action;
}

void Todo::setAction(const std::string & a){
    action = a;
}


