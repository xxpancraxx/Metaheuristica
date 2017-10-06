//
// Created by manue on 28/09/2017.
//

#ifndef METAHEURISTICA_TRANSISTOR_H
#define METAHEURISTICA_TRANSISTOR_H


#include "interferencia.h"
#include <list>

using namespace std;

class transmisor {

private:
    int rangoF, frecuencia;


public:
    transmisor(int Rango);

    int getRangoF() const;

    void setRangoF(int rangoF);

    int getFrecuencia() const;

    void setFrecuencia(int frecuencia);
};


#endif //METAHEURISTICA_TRANSISTOR_H
