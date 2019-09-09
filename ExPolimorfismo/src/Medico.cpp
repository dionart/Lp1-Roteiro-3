#include "Medico.h"

Medico::Medico(std::string nome, double altura, double peso){
	this->nome = nome;
	this->altura = altura;
	this->peso = peso;
}

void Medico::setNome(std::string nome) {
	this->nome = nome;
}

void Medico::setAltura(double altura) {
	this->altura = altura;
}

void Medico::setPeso(double peso) {
	this->peso = peso;
}

std::string Medico::getNome() {
	return nome;
}

double Medico::getAltura() {
	return altura;
}

double Medico::getPeso() {
	return peso;
}

std::string Medico::getEspecializacao() {
	return especializacao;
}

void Medico::realizarOperacao() {
	std::cout << "fazendo checkup geral" << std::endl;
}
