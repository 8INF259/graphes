#ifndef GRAPHE_H
#define GRAPHE_H

#include "Sommet.h"
#include "Arete.h"

#include <list>
using namespace std;

template <typename Type> 
class Graphe {
  public:
    list<Sommet<Type>*> sommets;
    list<Arete<Type>*> aretes;

};

#endif 