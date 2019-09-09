#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include "Funcionario.h"


class Comissionado:public Funcionario
{
    public:
        Comissionado();
        Comissionado(std::string nome, int matricula,double vendasSemanais,double percentualComissao,double salarioBase);
        double calculaSalario();

        void setVendasSemanais(double vendasSemanais);
        double getVendasSemanais();
        void setPercentualComissao(double percentualComissao);
        double getPercentualComissao();
        void setSalarioBase(double salarioBase);
        double getSalarioBase();

    private:
        double vendasSemanais;
        double percentualComissao;
        double salarioBase;
};

#endif // COMISSIONADO_H
