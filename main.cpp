#include <iostream>

#include "NegativePrio.h"
#include "Nod.h"
#include "Nod_dublu.h"
#include "Nod_prioritate.h"
#include "Coada_prioritati.h"


int main()
{
 //   Nod n("salut");
  //  Nod_dublu d("cf",&n,NULL);
 //   Nod_prioritate p("cf",NULL,NULL,5);
    Coada_prioritati c;
    try
    {
        Nod_prioritate p;
        std::cin>>p;
        p.afisare();
    }
    catch(std::exception &e)
    {
        std::cout<<e.what()<<'\n';
    }

    //c.pop();
    //c.insert("gigi",3);
    //c.insert("haha",0);
    //c.insert("ged",4);
    //Coada_prioritati a;
    //a=c;
    //std::string s=c.top();
    //std::cout<<s<<'\n';
    //cout<<c;
    //c.empty();
    return 0;
}
