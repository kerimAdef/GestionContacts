#include "listinteraction.h"
#include<list>

listinteraction::listinteraction()
{

}

listinteraction::~listinteraction()
{
listeInteractions.clear();
}
void listinteraction::ajoutInteraction(const interaction & i)
{
    listeInteractions.push_back(i);
}

std::list<interaction> listinteraction::getListe() const
{
    return listeInteractions;
}

//méthode affichage d'une liste d'interaction
std::ostream & operator <<(std::ostream & os, const listinteraction & li)
{
    int i=0;
    for(auto j=li.listeInteractions.begin();j!= li.listeInteractions.end();j++)
    {
        os<<i+1 << *j<<"\n" ;

        i++;
    }

    return os;
}
