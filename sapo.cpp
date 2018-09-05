#include "sapo.h"
#include <iostream>
	

/*
	Construtores
	*/

Sapo::Sapo(std::string identificador_, int distancia_percorrida_,int pulos_,int m_maximo_salto_):rd(),gen(rd()), dis(1,6)
{
	m_identificador = identificador_;
	m_distancia_percorrida = distancia_percorrida_;
	m_pulos = pulos_;
	m_maximo_salto = m_maximo_salto_;
}

/*
	Destrutores
	*/

Sapo::~Sapo()
{
	//Padrão
}

/*
	Métodos
	*/

void Sapo::print()
{
	std::cout << m_identificador << std::endl << "Saltou: " << m_distancia_percorrida << std::endl;
}

void Sapo::pular(){
	m_pulos++;
	m_distancia_percorrida += std::round(dis(gen));

}

int Sapo::getPulos(){
	return m_pulos;
}

std::string Sapo::getIdentificador(){
	return m_identificador;
}