#include <iostream>
#include "genetico.h"
#include "binario.h"
#include <iomanip>
#define red "\033[4;31m"
#define green "\033[32m"
#define default "\033[m" 
#include <climits>
using namespace std;




int main() {
	unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6;
	cout << "Entre com 6 solucoes iniciais (numero entre 0 a 65535)" << endl;
	cin >> solucao1 >> solucao2 >> solucao3 >> solucao4 >> solucao5 >> solucao6;

	cout << "Resultado da Avaliacao" << endl;
	cout << "----------------------" << endl;
	cout <<  right << setw(5) << solucao1 << " - "; 
	if (FuncaoDeAvaliacao(solucao1))
		cout << green << "OK" << default;   
	else
		cout << red << "X" << default;
	cout << endl;
	cout << right << setw(5) << solucao2 << " - "; 
	if(FuncaoDeAvaliacao(solucao2))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl;
	cout << right << setw(5) << solucao3 << " - ";
	if(FuncaoDeAvaliacao(solucao3))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl;
	cout << right << setw(5) << solucao4 << " - ";
	if(FuncaoDeAvaliacao(solucao4))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl;
	cout << right << setw(5) << solucao5 << " - ";
	if(FuncaoDeAvaliacao(solucao5))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl;
	cout << right << setw(5) << solucao6 << " - ";
	if(FuncaoDeAvaliacao(solucao6))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl;
	cout << "----------------------" << endl;
	cout << right << setw(5) << cruzamentoPontoUnico(solucao1, solucao2) << " - ";
	if(FuncaoDeAvaliacao(cruzamentoPontoUnico(solucao1, solucao2)))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl;  
	cout << right << setw(5) << cruzamentoAritmetico(solucao3, solucao4) << " - ";
	if(FuncaoDeAvaliacao(cruzamentoAritmetico(solucao3, solucao4)))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl; 
	cout << right << setw(5) << mutacaoSimples(solucao5) << " - ";
	if(FuncaoDeAvaliacao(mutacaoSimples(solucao5)))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl; 
	cout << right << setw(5) << mutacaoDupla(solucao6) << " - ";
	if(FuncaoDeAvaliacao(mutacaoDupla(solucao6)))
		cout << green << "OK" << default;
	else
		cout << red << "X" << default;
	cout << endl; 




	

}

