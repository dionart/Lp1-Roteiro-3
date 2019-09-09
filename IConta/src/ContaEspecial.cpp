#include "ContaEspecial.h"
#include "Conta.h"

ContaEspecial::ContaEspecial(){
    std::string nomeCliente = "";
    std::string numeroConta  = "";
    double salarioMensal = 0;
    double saldo = 0;
}

ContaEspecial::~ContaEspecial(){

}

ContaEspecial::ContaEspecial(std::string nomeCliente, std::string numeroConta, double salarioMensal, double saldo){
    this->nomeCliente = nomeCliente;
    this-> numeroConta = numeroConta;
    this-> salarioMensal = salarioMensal;
    this->saldo  = saldo;
    definirLimite();
}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMensal;
    setLimite(limite);

}
