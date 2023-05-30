#ifndef LISTTODO_H
#define LISTTODO_H
#include "todo.h"
#include<list>

class listtodo
{
private:
    //qui geres les listes  todo
    std::list <Todo> ltodos;
public:
    //constructeur
    listtodo();
    //destructeur
    ~listtodo();
    //accesseur

    void ajoutTodo(const Todo &);
    friend std::ostream &operator <<(std::ostream &,const listtodo &);

};

#endif // LISTTODO_H
