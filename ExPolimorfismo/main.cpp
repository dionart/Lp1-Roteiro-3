#include <iostream>
#include "Medico.h"
#include "Oftamologista.h"
#include <iostream>

int main(void) {
	Medico * m1 = new Oftamologista("Andre", 1.82, 85);
	Medico * m2 = new Medico("Samuel", 1.90, 75);

	std::cout <<"Especializacao:"<<m1->getEspecializacao() << std::endl;
	std::cout<<"Operacao:";
	m1->realizarOperacao();

	std::cout<<std::endl;

	std::cout <<"Especializacao:"<<m2->getEspecializacao() << std::endl;
	std::cout<<"Operacao:";
	m2->realizarOperacao();

	return 0;
}
