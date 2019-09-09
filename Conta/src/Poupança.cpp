#include "Poupança.h"

Poupanca::Poupanca()
{
    variacao=0;
    taxaRendimento=0;
}
Poupanca::Poupanca(string nome,int numero, double saldo,int variacao, double taxaRendimento):Conta(nome,numero,saldo)
{
    setVariacao(variacao);
    setTaxaRendimento(taxaRendimento);
}

int Poupanca::getVariacao()
{
    return variacao;
}
double Poupanca::getTaxaRendimento()
{
    return taxaRendimento;
}
void Poupanca::setVariacao(int variacao)
{
    this->variacao=variacao;
}
void Poupanca::setTaxaRendimento(double taxaRendimento)
{
    this->taxaRendimento=taxaRendimento;
}
double Poupanca::render()
{
    if(variacao == 51){
        return saldo * (taxaRendimento / 100);
    }else if(variacao == 1){
        return saldo * ((taxaRendimento / 100) + (0,5 / 100));
    }
}



