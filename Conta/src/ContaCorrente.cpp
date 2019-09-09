#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    salario = 0;
    limite = 0;
}
ContaCorrente::ContaCorrente(string nome,int numero, double saldo,double salario):Conta(nome,numero,saldo)
{
    setSalario(salario);
    definirLimite();
}

double ContaCorrente::getSalario()
{
    return salario;
}

int ContaCorrente::getLimite()
{
    return limite;
}

void ContaCorrente::setSalario(double salario)
{
    if(salario >= 0)
        this->salario = salario;
    else
        this->salario = 0;
}

void ContaCorrente::definirLimite()
{
    limite = salario*2;
}
