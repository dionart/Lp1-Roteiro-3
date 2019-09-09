#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"
#include <iostream>


class Assalariado: public Funcionario
{
    public:
        Assalariado();
        Assalariado(std::string nome,int matricula, double salario);
        double calculaSalario();
        void setSalario(double salario);

    protected:

    private:
        double salario;
};

#endif // ASSALARIADO_H
