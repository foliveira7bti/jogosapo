#ifndef SAPO_H
#define SAPO_H

#include <random>
#include <string>


class Sapo
{
private:
	std::string m_identificador;
	int m_distancia_percorrida;
	int m_pulos;
	int m_maximo_salto;
	//Atributos para a geração de números randomicos
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;
public:
	Sapo(std::string identificador_, int distancia_percorrida_,int pulos_, int maximo_salto_);
	~Sapo();
	void pular();
	void print();
	int getPulos();
	std::string getIdentificador();
	static int dist_total;
};

#endif