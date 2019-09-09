#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>

class Medico
{
    protected:
        std::string nome;
        double altura;
        double peso;
        std::string especializacao = "medico geral";

    public:

        Medico(std::string, double, double);
        void setNome(std::string);
        void setAltura(double);
        void setPeso(double);
        std::string getNome();
        double getAltura();
        double getPeso();
        virtual std::string getEspecializacao();
        virtual void realizarOperacao();
};

#endif // MEDICO_H
