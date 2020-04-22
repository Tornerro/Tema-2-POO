#include "Nod_dublu.h"

Nod_dublu::Nod_dublu(std::string info, Nod* next, Nod* prev) : Nod(info, next), prev(prev)
{
    std::cout<<"Nod Dublu\n";
}

Nod_dublu::Nod_dublu(const Nod_dublu& aux) : Nod(aux), prev(aux.prev)
{
    std::cout<<"ccNod Dublu\n";
}

Nod_dublu::~Nod_dublu()
{
    std::cout<<"dNod Dublu\n";
}

void Nod_dublu::modifPrev(Nod* n)
{
    this->prev=n;
}

Nod* Nod_dublu::getPrev() const
{
    return this->prev;
}
