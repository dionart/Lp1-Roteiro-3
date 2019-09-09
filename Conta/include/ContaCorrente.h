#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

using namespace std;
class ContaCorrente:public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(string nome,int numero, double saldo,double salario);

        double getSalario();
        int getLimite();
        void setSalario(double salario);
        void definirLimite();

    protected:
        double salario;
        int limite;

};

#endif // CONTACORRENTE_H
