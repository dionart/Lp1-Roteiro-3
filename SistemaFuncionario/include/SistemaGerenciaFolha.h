#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#define MAX_FUNCIONARIOS 3
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        void setFuncionarios(Funcionario* f);
        double calcularTotalFolha();
        double consultaSalarioFuncionario(int matricula);

        double getOrcamentoMax();
        void setOrcamentoMax(double orcamentoMax);

    private:
        Funcionario* funcionarios[MAX_FUNCIONARIOS];
        int a = 0;
        double orcamentoMax;

};

#endif // SISTEMAGERENCIAFOLHA_H
