#ifndef LISTCONTACT_H
#define LISTCONTACT_H
#include <list>
#include <contact.h>

class ListContact
{
private:
std::list<contact> listeContactes;
public:
    ListContact();
    inline unsigned getSize(){return listeContactes.size();};

    void ajoutContact(const contact& );
    void suppContact(const std::string& );
   friend std::ostream &operator <<(std::ostream &,const ListContact &);
};

#endif // LISTCONTACT_H
