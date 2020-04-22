#pragma once

#include "Nod_prioritate.h"
#include <iostream>
#include <string>

class Coada_prioritati
{
    Nod_prioritate* prim;
    Nod_prioritate* ultim;
public:
    Coada_prioritati();
    Coada_prioritati(const Coada_prioritati&);
    ~Coada_prioritati();
    void insert(std::string, int);
    std::string top();
    void pop();
    void empty();
    friend std::ostream& operator<<(std::ostream&, Coada_prioritati&);
};

