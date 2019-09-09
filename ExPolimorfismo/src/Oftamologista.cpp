#include "Oftamologista.h"

Oftamologista::Oftamologista(std::string nome, double altura, double peso) : Medico(nome, altura, peso)
{

}

void Oftamologista::realizarOperacao() {
	std::cout << "checando a visao " << std::endl;
}

std::string Oftamologista::getEspecializacao()
{
    return especializacao;
}
