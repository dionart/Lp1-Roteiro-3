#include "Assalariado.h"

Assalariado::Assalariado()
{

}
Assalariado::Assalariado(std::string nome,int matricula, double salario)
{
    setNome(nome);
    setSalario(salario);
    setMatricula(matricula);
}

double Assalariado::calculaSalario()
{
    return salario;
}

void Assalariado::setSalario(double salario)
{
    this->salario=salario;
}




