#include "sapo.h"
#include <iostream>
#include <string>

int main(){
	Sapo * teste = new Sapo("Sapoide", 0, 0, 5);
	teste->print();
	teste->pular();
	teste->print();

}
