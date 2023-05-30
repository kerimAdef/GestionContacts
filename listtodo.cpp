#include "listtodo.h"

listtodo::listtodo()
{


}
listtodo::~listtodo(){
    ltodos.clear();
}

void listtodo::ajoutTodo(const Todo & t)
{
    ltodos.push_back(t);
}



//méthode affichage d'une liste d'interaction
std::ostream & operator <<(std::ostream & os, const listtodo & li)
{
    int i=0;
    for(auto j=li.ltodos.begin();j!= li.ltodos.end();j++)
    {
        os<<i+1 <<"TODO@"<< *j <<"\n";

        i++;
    }

    return os;
}
