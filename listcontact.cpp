#include "listcontact.h"
#include<iostream>
#include<iostream>

ListContact::ListContact()
{

}

//pour ajouter un contact à la liste de contact
void ListContact::ajoutContact(const contact & c)
{
    listeContactes.push_back(c);
}

//pour supprimer toutes les contacts de nom 'n'
void ListContact::suppContact(const std::string & n)
{
    for(auto it = listeContactes.begin(); it != listeContactes.end();)
        if(it->getNom()==n)
        {
            it=listeContactes.erase(it);
        }
        else
            ++it;
}


//méthode affichage d'une liste de contacte
std::ostream & operator <<(std::ostream & os, const ListContact & lc)
{   lc.listeContactes.size();
    int i=0;
    for(auto j=lc.listeContactes.begin();j!= lc.listeContactes.end();j++)
    {
        os<<i+1 <<"contacte:"<< *j ;
        os<<" crée le"<<(*j).creation<<"\n";
        i++;
    }

    return os;
}
