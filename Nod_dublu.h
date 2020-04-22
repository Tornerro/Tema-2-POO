#pragma once

#include "Nod.h"
#include <iostream>
#include <string>

class Nod_dublu : public virtual Nod
{
    Nod* prev;
public:
    Nod_dublu(std::string info="", Nod* next=NULL, Nod* prev=NULL);
    Nod_dublu(const Nod_dublu&);
    virtual ~Nod_dublu();
    void modifPrev(Nod*);
    virtual Nod* getPrev()const;
    virtual void afisare();
};


