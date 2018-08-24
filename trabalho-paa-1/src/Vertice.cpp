#include "Vertice.h"

Vertice::Vertice()
{
    //ctor
}

Vertice::~Vertice()
{
    //dtor
}

bool Vertice::getFoiVisitado(){
    return this->foiVisitado;
}

void Vertice::setFoiVisitado(bool foiVisitado){
    this->foiVisitado = foiVisitado;
}

void Vertice::setNumero(int numero){
    this->numero = numero;
}

int Vertice::getNumero() {
    return this->numero;
}
