#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupança.h"

using namespace std;

int main()
{
    ContaCorrente *c1 = new ContaCorrente("Arthur",86472444,2000,3500);

    cout<<"Nome: "<<c1->getNome()
    <<"\nNumero: "<<c1->getNumero()
    <<"\nSaldo: "<<c1->getSaldo()
    <<"\nSalario: "<<c1->getSalario()
    <<"\nLimite: "<<c1->getLimite()<<endl;
    cout<<endl;

    c1->sacar(2000);
    cout<<"Saldo: "<<c1->getSaldo()<<endl;

    cout<<"Depositando:";
    c1->depositar(3500);
    cout<<"\nSaldo: "<<c1->getSaldo()<<endl;

    Poupanca *p1 = new Poupanca("Ruan", 98665478, 1500,51,1);

    cout<<endl;
    cout<<"Nome: "<<p1->getNome()
    <<"\nNumero: "<<p1->getNumero()
    <<"\nSaldo: "<<p1->getSaldo()
    <<"\nVariacao: "<<p1->getVariacao()
    <<"\nTaxa de Rendimento: "<<p1->getTaxaRendimento()
    <<"\nRendimento: "<<p1->render()<<endl;
    cout<<endl;

    ContaEspecial *e1 = new ContaEspecial("Gorgonho",89887945,2500,5000);
    cout<<"Nome: "<<e1->getNome()
    <<"\nNumero: "<<e1->getNumero()
    <<"\nSaldo: "<<e1->getSaldo()
    <<"\nSalario: "<<e1->getSalario()
    <<"\nLimite: "<<e1->getLimite()<<endl;
    cout<<endl;

    e1->sacar(2501);
    cout<<"Saldo: "<<e1->getSaldo()<<endl;

    cout<<"Depositando:";
    e1->depositar(3500);
    cout<<"\nSaldo: "<<e1->getSaldo()<<endl;

    return 0;
}
