#include "Horista.h"

Horista::Horista()
{
    //ctor
}

Horista::Horista(std::string nome, int matricula, double salarioPorHora, double horasTrabalhadas)
{
    setNome(nome);
    setMatricula(matricula);
    setSalarioPorHora(salarioPorHora);
    setHorasTrabalhadas(horasTrabalhadas);
}

double Horista::calculaSalario()
{
    if (horasTrabalhadas <= 40) {
		return salarioPorHora * horasTrabalhadas;
	}
	else {
		return (40 * salarioPorHora + ((horasTrabalhadas - 40) * (1.5 * salarioPorHora)));
	}
}

void Horista::setSalarioPorHora(double salarioPorHora)
{
    if(salarioPorHora>0)
        this->salarioPorHora=salarioPorHora;
}

double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas)
{
    if(horasTrabalhadas>0)
        this->horasTrabalhadas=horasTrabalhadas;
}

double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}



