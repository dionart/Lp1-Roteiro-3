#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{

}

void SistemaGerenciaFolha::setFuncionarios(Funcionario* f)
{
    funcionarios[a] = f;
	a++;
}

double SistemaGerenciaFolha::calcularTotalFolha()
{
    double total=0;

    for(int i=0;i<MAX_FUNCIONARIOS;i++){
        total+=funcionarios[i]->calculaSalario();
    }

    if(total>orcamentoMax){
        throw OrcamentoEstouradoException();
        return 0;
    }else
        return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula)
{
    for(int i=0;i<MAX_FUNCIONARIOS;i++){
        if(funcionarios[i]->getMatricula() == matricula){
            return funcionarios[i]->calculaSalario();
        }
    }
    throw FuncionarioNaoExisteException();
    return -1;
}

double SistemaGerenciaFolha::getOrcamentoMax()
{
    return orcamentoMax;
}

void SistemaGerenciaFolha::setOrcamentoMax(double orcamentoMax)
{
    this->orcamentoMax=orcamentoMax;
}


