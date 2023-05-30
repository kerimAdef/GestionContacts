#ifndef LISTINTERACTION_H
#define LISTINTERACTION_H
#include <list>
#include "interaction.h"



class listinteraction
{
private:
    std::list<interaction> listeInteractions;
public:

    listinteraction();
    ~listinteraction();
    //accesseur
    void setlist(const std::list<interaction> &);
    void ajoutInteraction(const interaction&);
    std::list<interaction> getListe()const;
    friend std::ostream &operator <<(std::ostream &,const listinteraction &);
};

#endif // LISTINTERACTION_H
