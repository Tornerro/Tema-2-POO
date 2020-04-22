# Tema-2-POO
!!! Codul compileaza, dar nu functioneaza corect. Am probleme returnarea si folosirea pointerilor de clase diferite prin functiile getNext() si getPrev() !!!

Coada cu prioritati cu elemente de tip sir de caractere (implementata dinamic)
Se dau urmatoarele clase:
- Nod (char* info, nod*next)
- Nod_dublu:Nod {nod * ante;};
- Nod_prioritate:Nod_dublu {int prio;}
Să se implementeze clasa Coada_prioritati care sa aibă elemente de tip Nod_prioritate.
Operatiile ce trebuie implementate pentru coadã sunt urmãtoarele:
insert <cuvânt> <prioritate>adaugã cuvântul în coadã cu prioritatea respectivã
top întoarce primul cuvânt din coadã - cel cu prioritate maximã
pop eliminã primul element din coadã
empty goleste coada.
Aceste comenzi se vor regãsi una per linie.
