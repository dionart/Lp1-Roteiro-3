#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{

}

ContaEspecial::ContaEspecial(string nome, int numero, double saldo,double salario): ContaCorrente(nome,numero,saldo,salario)
{
    definirLimite();
}

double ContaEspecial::definirLimite()
{
    limite = salario *4;
}
