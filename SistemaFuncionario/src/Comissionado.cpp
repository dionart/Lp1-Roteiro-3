#include "Comissionado.h"

Comissionado::Comissionado()
{
    //ctor
}

Comissionado::Comissionado(std::string nome, int matricula, double vendasSemanais, double percentualComissao, double salarioBase)
{
    setNome(nome);
    setMatricula(matricula);
    setVendasSemanais(vendasSemanais);
    setPercentualComissao(percentualComissao);
    setSalarioBase(salarioBase);
}

double Comissionado::calculaSalario()
{
    return salarioBase + (percentualComissao*(vendasSemanais*4));
}

void Comissionado::setVendasSemanais(double vendasSemanais)
{
    this->vendasSemanais=vendasSemanais;
}

double Comissionado::getVendasSemanais()
{
    return vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao)
{
    if(percentualComissao>0)
        this->percentualComissao=percentualComissao;
}

double Comissionado::getPercentualComissao()
{
    return percentualComissao;
}

double Comissionado::getSalarioBase()
{
    return salarioBase;
}


void Comissionado::setSalarioBase(double salarioBase)
{
    if(salarioBase>0)
        this->salarioBase=salarioBase;
}
