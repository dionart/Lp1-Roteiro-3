#ifndef ICONTA_H
#define ICONTA_H
#include "SaldoNaoDisponivelException.h"

class IConta{
    public:
        IConta();
        virtual ~IConta();
        virtual void sacar(double valor) = 0;
        virtual void depositar(double valor) = 0;

    private:
        double valor;
};

#endif
