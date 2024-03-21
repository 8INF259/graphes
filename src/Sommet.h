#ifndef SOMMET_H
#define SOMMET_H

template <typename Type>
class Sommet {
  public:
    Type cle;

    Sommet(Type cle);
};

#endif
template <typename Type>
Sommet<Type>::Sommet(Type cle) {
  this->cle = cle;
}