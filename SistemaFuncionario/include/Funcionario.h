#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>


class Funcionario
{
    public:
        Funcionario();
        virtual double calculaSalario();

        std::string getNome();
        int getMatricula();

        void setNome(std::string nome);
        void setMatricula(int matricula);

    protected:
        std::string nome;
        int matricula;

    private:
};

#endif // FUNCIONARIO_H
