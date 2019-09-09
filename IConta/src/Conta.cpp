#include "Conta.h"
#include "IConta.h"
#include <string>

using namespace std;

Conta::Conta(){
    std::string nomeCliente = "";
    std::string numeroConta = "";
    double salarioMensal = 0;
    double saldo = 0;
}

Conta::Conta(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo){
    this->nomeCliente = nomeCliente;
    this-> numeroConta = numeroConta;
    this-> salarioMensal = salarioMensal;
    this->saldo  = saldo;
    definirLimite();
}

Conta::~Conta(){

}

void Conta::definirLimite(){
    limite = 2*salarioMensal;
    setLimite(limite);
}

void Conta::setNomeCliente(std::string nomeCliente){
    this -> nomeCliente = nomeCliente;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

void Conta::setNumeroConta(std::string numeroConta){
    this -> numeroConta = numeroConta;
}

std::string Conta::getNumeroConta(){
    return numeroConta;
}

void Conta::setSalarioMensal(double salarioMensal){
    if(salarioMensal < 0){
        this->salarioMensal = 0;
    }else
        this->salarioMensal = salarioMensal;
}

double Conta::getSalarioMensal(){
    return salarioMensal;
}

void Conta::setSaldo(double saldo){
    if(saldo<0){
        this->saldo = 0;
    }else
        this->saldo = saldo;
}

double Conta::getSaldo(){
    return saldo;
}

void Conta::setLimite(double limite){
    if(limite<0){
        this->limite = 0;
    }else
        this->limite = limite;
}

double Conta::getLimite(){
    return limite;
}

void Conta::sacar(double valor)
{

    saldo-=valor;
    setSaldo(saldo);

}

void Conta::depositar(double valor)
{
    cout<<"Depositando valor de: "<<valor<<"\n"<<endl;
    saldo+=valor;
    setSaldo(saldo);
}








