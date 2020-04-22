#pragma once

#include <iostream>
#include <string>

class Nod_prioritate;

class Nod
{
    std::string info;
    Nod* next;
public:
    Nod(std::string info="",Nod* next=NULL);
    Nod(const Nod&);
    virtual ~Nod();
    std::string getInfo();
    void modifInfo(std::string);
    void modifNext(Nod*);
    virtual Nod* getNext() const;
    virtual void afisare();
};

