#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"

class ContaEspecial : public Conta{
    public:
        void definirLimite();
        ContaEspecial();
        ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo);
        virtual ~ContaEspecial();

    private:
};

#endif
