#ifndef ARETE_H
#define ARETE_H

#include "Sommet.h"

template <typename Type>
class Arete {
  public:
    Sommet<Type>* origine;
    Sommet<Type>* extremite;
    int poids;

    Arete(Sommet<Type>* origine, Sommet<Type>* extremite);
    Arete(Sommet<Type>* origine, Sommet<Type>* extremite, int poids);

};

template <typename Type>
Arete<Type>::Arete(Sommet<Type>* origine, Sommet<Type>* extremite) {
  this->origine = origine;
  this->extremite = extremite;
  this->poids = 0;
}

template <typename Type>
Arete<Type>::Arete(Sommet<Type>* origine, Sommet<Type>* extremite, int poids) {
  this->origine = origine;
  this->extremite = extremite;
  this->poids = poids;
}


#endif