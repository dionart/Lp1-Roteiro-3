#include "Conta.h"


Conta::Conta()
{
   nome = "";
   numero = 0;
   saldo = 0;
}

Conta::Conta(string nome, int numero, double saldo)
{
    setNome(nome);
    setNumero(numero);
    setSaldo(saldo);
}

void Conta::sacar(double valor)
{
    if(valor <= saldo){
        setSaldo(saldo-valor);
        cout<<"Saque efetuado"<<endl;
    }
    else
        cout<<"Saldo indisponivel"<<endl;
}

void Conta::depositar(double valor)
{
    setSaldo(saldo + valor);
}

string Conta::getNome()
{
    return nome;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::setNome(string nome)
{
    this->nome = nome;
}

void Conta::setNumero(int numero)
{
    this->numero = numero;
}

void Conta::setSaldo(double saldo)
{
    if(saldo >=0)
        this->saldo = saldo;
    else
        this->saldo = 0;
}
