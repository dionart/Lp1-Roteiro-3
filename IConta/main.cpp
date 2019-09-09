#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

using namespace std;

int main(void){
    Conta *conta1 =  new Conta("DIOnizio", "00019232-2", 5000, 10000);

    cout << "O nome do individuo eh: " << conta1->getNomeCliente() << endl;
    cout << "O numero da conta do individuo eh: " << conta1->getNumeroConta() << endl;
    cout << "O salario mensal do individuo eh: " << conta1->getSalarioMensal() << endl;
    cout << "O saldo do individuo eh: " << conta1->getSaldo() << endl;
    cout << "O limite do individuo eh: " << conta1->getLimite()<<endl;
    conta1->sacar(2000);
    cout << "O saldo do individuo eh: " << conta1->getSaldo() << endl;
    conta1->depositar(1000);
    cout << "O saldo do individuo eh: " << conta1->getSaldo() << endl;

    cout<<endl;
    ContaEspecial *conta_especial1 = new ContaEspecial("Rogerinho", "089101-1", 5000, 10000);

    cout << "O nome do individuo eh: " << conta_especial1->getNomeCliente() << endl;
    cout << "O numero da conta do individuo eh: " << conta_especial1->getNumeroConta() << endl;
    cout << "O salario mensal do individuo eh: " << conta_especial1->getSalarioMensal() << endl;
    cout << "O saldo do individuo eh: " << conta_especial1->getSaldo() << endl;
    cout << "O limite do individuo eh: " << conta_especial1->getLimite()<<endl;
    conta_especial1->sacar(2000);
    cout << "O saldo do individuo eh: " << conta_especial1->getSaldo() << endl;
    conta_especial1->depositar(1000);
    cout << "O saldo do individuo eh: " << conta_especial1->getSaldo() << endl;
    cout<<endl;

    return 0;
}
