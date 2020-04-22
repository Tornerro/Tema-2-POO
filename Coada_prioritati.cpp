#include "Coada_prioritati.h"

Coada_prioritati::Coada_prioritati()
{
    std::cout<<"Coada prioritati\n";
}

Coada_prioritati::Coada_prioritati(const Coada_prioritati& aux)
{
    this->prim=aux.prim;
    this->ultim=aux.ultim;
    std::cout<<"ccCoada prioritate\n";
}

Coada_prioritati::~Coada_prioritati()
{
    this->empty();
    std::cout<<"dCoada prioritati\n";
}

void Coada_prioritati::insert(std::string info, int prio)
{
    Nod_prioritate* c = new Nod_prioritate;
    c->modifInfo(info);
    c->modifPrio(prio);
    c->modifPrev(NULL);
    c->modifNext(NULL);
    if(this->prim==NULL || this->ultim==NULL)
    {
        prim=ultim=c;
    }
    else
    {
        Nod_prioritate* a=prim;

        while(a!=NULL && a->prioritate()>c->prioritate())
        {
            a=a->getNext();
        }
        if(a==prim)
        {
            prim->modifPrev(c);
            c->modifNext(prim);
            prim=c;
        }
        else if(a==NULL)
        {
            ultim->modifNext(c);
            c->modifPrev(ultim);
            ultim=c;
        }
        else
        {
            Nod_prioritate* b=a->getPrev();
            b->modifNext(c);
            a->modifPrev(c);
            c->modifPrev(b);
            c->modifNext(a);
        }
        delete a;
    }
}

std::string Coada_prioritati::top()
{
    if(prim==NULL)
    {
        std::cout<<"Coada este goala\n";
        return "";
    }
    return prim->getInfo();
}

void Coada_prioritati::pop()
{
    Nod_prioritate* p = prim;
    if(prim==NULL) std::cout<<"Coada este deja goala\n";
    else
    {
        prim=prim->getNext();
        prim->modifPrev(NULL);
        delete p;
        std::cout<<"Pop\n";
    }
}

void Coada_prioritati::empty()
{
    if(prim==NULL)std::cout<<"Coada este deja goala\n";
    else
    {
        while(prim!=NULL)
        {
            Nod_prioritate* p=prim;
            prim=prim->getNext();
            prim->modifPrev(NULL);
            delete p;
        }
        std::cout<<"Coada a fost golita\n";
    }
}

std::ostream& operator<<(std::ostream& f,Coada_prioritati& c)
{
    Nod_prioritate* a = c.prim;
    while(a!=NULL)
    {
        f<<a->getInfo();
        a=a->getNext();
    }
    return f;
}
