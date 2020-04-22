#pragma once

#include "Nod_dublu.h"
#include "NegativePrio.h"
#include <iostream>
#include <string>

class Nod_prioritate : public Nod_dublu
{
    int prio;
public:
    Nod_prioritate(std::string info="", Nod* next=NULL, Nod* prev=NULL, int prio=0);
    Nod_prioritate(const Nod_prioritate&);
    ~Nod_prioritate();
    int prioritate();
    void modifPrio(int);
    virtual Nod_prioritate* getNext() const;
    virtual Nod_prioritate* getPrev() const;
    void afisare();
    friend std::istream& operator>>(std::istream&, Nod_prioritate&);
};
