#include "Nod_prioritate.h"

Nod_prioritate::Nod_prioritate(std::string info, Nod* next, Nod* prev, int prio) : Nod(info, next), Nod_dublu(info, next, prev), prio(prio)
{
    std::cout<<"Nod prioritate\n";
    if(prio<0)
    {
        throw(NegativePrio());
    }
}

Nod_prioritate::Nod_prioritate(const Nod_prioritate& aux) : Nod_dublu(aux), prio(aux.prio)
{
    std::cout<<"ccNod prioritate\n";
}

Nod_prioritate::~Nod_prioritate()
{
    std::cout<<"dNod prioritate\n";
}

int Nod_prioritate::prioritate()
{
    return this->prio;
}

void Nod_prioritate::modifPrio(int p)
{
    this->prio=p;
}

Nod_prioritate* Nod_prioritate::getNext() const
{
    return getNext();
}

Nod_prioritate* Nod_prioritate::getPrev() const
{
    return getPrev();
}

void Nod_prioritate::afisare()
{
    std::cout<<this->getInfo()<<' '<<this->prio<<'\n';
}

std::istream& operator>>(std::istream& f, Nod_prioritate& n)
{
    std::string info;
    int prio;
    f>>info>>prio;
    n=Nod_prioritate(info,NULL,NULL,prio);
    return f;
}
