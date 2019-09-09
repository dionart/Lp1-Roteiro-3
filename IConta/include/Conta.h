#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include <string>

class Conta : public IConta{
    public:
        Conta();
        Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo);
        virtual ~Conta();

        void definirLimite();
        void setNomeCliente(std::string nomeCliente);
        std::string getNomeCliente();
        void setNumeroConta(std::string numeroConta);
        std::string getNumeroConta();
        void setSalarioMensal(double salarioMensal);
        double getSalarioMensal();
        void setSaldo(double saldo);
        double getSaldo();
        void setLimite(double limite);
        double getLimite();
        void sacar(double valor);
        void depositar(double valor);

    protected:
        double limite;
        double salarioMensal;
        std::string nomeCliente;
        std::string numeroConta;
        double saldo;

    private:


};

#endif
