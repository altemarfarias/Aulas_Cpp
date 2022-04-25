#include <iostream>
using namespace std;

// declaração de uma constante de forma global
#define pi 3.1415;
// pódemos de constante associasr comandos
#define canal cout << "Canal Bruno\n"

int main(){
	
	// declarações multiplas
	int vidas = 3, tiros = 500, life = 100;
	
	// chamando a constante pi
	cout << pi; cout << "\n";		
	canal;
	
	return 0;
}