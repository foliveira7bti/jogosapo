#include <iostream>
#include "sapo.h"

/*
	Construtores
*/

JogoSapo::JogoSapo(int distancia_)
{
	m_distancia = distancia_;
	m_total_jogadores = 0;
	m_rodada = 0;
}

/*
	Destrutores
*/

JogoSapo::~JogoSapo()
{
	//nothing
}

/*
	Metodos
*/

void JogoSapo::run()
{
	//
}

void JogoSapo::addSapo(Sapo * jogador_)
{
	if(m_total_jogadores < MAX_JOGADORES)
	{
		m_jogadores[m_total_jogadores++] = jogador_;
	}
}

/*
	Getters
*/

int JogoSapo::getDistancia()
{
	return m_distancia;
}

int JogoSapo::getRodada()
{
	return m_rodada;
}

Sapo * JogoSapo::getVencedor()
{
	return m_vencedor;
}

/*
	Prints
*/

void JogoSapo::printVencedor()
{
	std::cout << m_vencedor->getIdentificador() << std::endl;
}
