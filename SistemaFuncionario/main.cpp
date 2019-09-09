#include <iostream>
#include "SistemaGerenciaFolha.h"

using namespace std;

int main()
{
    SistemaGerenciaFolha s1 =  SistemaGerenciaFolha();
    Funcionario* f1 = new Assalariado("Arthur",1,1500);
    Funcionario* f2 = new Horista("Samuel",2,300,3);
    Funcionario* f3 = new Comissionado("Marcos",3,4,0.25,100);

    cout<<"Salario:"<<f1->calculaSalario()<<endl;
    cout<<"Salario:"<<f2->calculaSalario()<<endl;
    cout<<"Salario:"<<f3->calculaSalario()<<endl;

    s1.setFuncionarios(f1);
    s1.setFuncionarios(f2);
    s1.setFuncionarios(f3);

    s1.setOrcamentoMax(100000);
    try{
        cout<<"Valor total da folha:"<<s1.calcularTotalFolha()<<endl;
    }catch(OrcamentoEstouradoException e){
        cerr<<"Error:"<<e.what()<<endl;
    }

    cout<<"Salario do funcionario de matricula 1:"<<s1.consultaSalarioFuncionario(1)<<endl;

    cout<<"Buscando salario funcionario 4: ";
    try{
        s1.consultaSalarioFuncionario(4);
    }catch(FuncionarioNaoExisteException e){
        cerr<<"\nError:"<<e.what()<<endl;
    }

    s1.setOrcamentoMax(1);

    cout<<"Testando com outro valor de orcamento:"<<endl;
    try{
        cout<<"Valor total da folha:"<<s1.calcularTotalFolha()<<endl;
    }catch(OrcamentoEstouradoException e){
        cerr<<"Error:"<<e.what()<<endl;
    }


    return 0;
}
