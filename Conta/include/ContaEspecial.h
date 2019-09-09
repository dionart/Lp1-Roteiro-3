#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

class ContaEspecial:public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(string nome, int numero, double saldo,double salario);
        double definirLimite();

};

#endif // CONTAESPECIAL_H
