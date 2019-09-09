#ifndef CONTA_H
#define CONTA_H
#include <iostream>

using namespace std;
class Conta
{
    public:
        Conta();
        Conta(string nome, int numero, double saldo);

        void sacar(double valor);
        void depositar(double valor);

        string getNome();
        int getNumero();
        double getSaldo();
        void setNome(string nome);
        void setNumero(int numero);
        void setSaldo(double saldo);

    protected:
        string nome;
        int numero;
        double saldo;

};

#endif // CONTA_H
