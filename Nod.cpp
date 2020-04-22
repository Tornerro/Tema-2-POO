#include "Nod.h"

Nod::Nod(std::string info, Nod* next) : info(info), next(next)
{
    std::cout<<"Nod\n";
}

Nod::Nod(const Nod& aux) : info(aux.info), next(aux.next)
{
    std::cout<<"ccNod\n";
}

Nod::~Nod()
{
    std::cout<<"dNod\n";
}

std::string Nod::getInfo()
{
    return this->info;
}

void Nod::modifInfo(std::string s)
{
    this->info=s;
}

void Nod::modifNext(Nod* n)
{
    this->next=n;
}

Nod* Nod::getNext() const
{
    return this->next;
}

void Nod::afisare()
{
    std::cout<<this->info<<' ';
}
