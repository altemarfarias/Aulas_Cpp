#include <iostream>
using namespace std;

int main() {

	// barra barra comentário em uma linha
	/* comentário em
	   bloco (várias linhas)
	*/

	// tipo nome;
	// tipo nome = valor;
	// EXEMPLOS
	int vidas=0;           // 10, 25
	char letra='B';        // 'b'
	//char letras[20];     // vetor com 20 posições
	double decimal1=5.25655666;   // 2.499999999
	float decimal2=5.2;    // 2.5
	bool vivo=true;        // true = 1 ou false = 0
	string nome="Altemar"; // "Altemar"

	cout << vidas << "\n";
	cout << letra << "\n";
	cout << decimal1 << "\n";
	cout << decimal2 << "\n";
	cout << vivo << "\n";
	cout << nome << "\n" << "\n";

	// vamos ler o valor do teclado
	cout << "Digite um numero: ";
	cin >> vidas;
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Digite um numero decimal: ";
	cin >> decimal1;
	cout << "Digite um numero fracionada: ";
	cin >> decimal2;
	cout << "Digite seu nome: ";
	cin >> nome;

	// podemos tambem imprimir com um cout só
	cout << vidas << "\n" << letra << "\n" << decimal1 << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n" ;


	return 0;
}