#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"


class Horista: public Funcionario
{
    public:
        Horista();
        Horista(std::string nome, int matricula, double salarioPorHora,double horasTrabalhadas);

        double calculaSalario();
        void setSalarioPorHora(double salarioPorHora);
        double getSalarioPorHora();
        void setHorasTrabalhadas(double horasTrabalhadas);
        double getHorasTrabalhadas();

    private:
        double salarioPorHora;
        double horasTrabalhadas;
};

#endif // HORISTA_H
