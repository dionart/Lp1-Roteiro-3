#ifndef POUPAN�A_H
#define POUPAN�A_H
#include "Conta.h"

using namespace std;
class Poupanca:
    public Conta
{
    public:
        Poupanca();
        Poupanca(string nome, int numero, double saldo,int variacao, double taxaRendimento);

        int getVariacao();
        double getTaxaRendimento();
        void setVariacao(int variacao);
        void setTaxaRendimento(double taxaRendimento);
        double render();

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPAN�A_H
