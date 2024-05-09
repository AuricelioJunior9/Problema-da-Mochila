#include <iostream>
#include "binario.h"
#include <iomanip>
using namespace std;


unsigned short cruzamentoPontoUnico(unsigned short solucao, unsigned short solucao0)
{
	return bitAlto(solucao) | bitBaixo(solucao0);
}

unsigned short cruzamentoAritmetico(unsigned short solucao, unsigned short solucao0)
{
	return solucao & solucao0;
}

unsigned short mutacaoSimples(unsigned short solucao)
{
	bool teste = testeBit(solucao, 9);

	if (teste)
		return desligarBit(solucao, 9);
	else
		return ligarBit(solucao, 9);
}

unsigned short mutacaoDupla(unsigned short solucao)
{
	bool teste1 = testeBit(solucao, 3);
	bool teste2 = testeBit(solucao, 12);

	if (teste1)
	{
		solucao = desligarBit(solucao, 3);
		if (teste2)
			return  desligarBit(solucao, 12);
		else
			return ligarBit(solucao, 12);
	}
	else
	{
		solucao = ligarBit(solucao, 3);

		if (teste2)
			return desligarBit(solucao, 12);
		else
			return ligarBit(solucao, 12);
	}
}

bool FuncaoDeAvaliacao(unsigned short solucao)
{
	unsigned short peso = 0;
	unsigned short valor = 0;

	if (testeBit(solucao, 0))
	{
		peso = peso + 1;
		valor = valor + 12;
	}

	if (testeBit(solucao, 1))
	{
		peso = peso + 4;
		valor = valor + 4;
	}


	if (testeBit(solucao, 2))
	{
		peso = peso + 2;
		valor = valor + 3;

	}

	if (testeBit(solucao, 3))
	{
		peso = peso + 5;
		valor = valor + 10;
	}

	if (testeBit(solucao, 4))
	{
		peso = peso + 4;
		valor = valor + 15;
	}
	if (testeBit(solucao, 5))
	{
		peso = peso + 2;
		valor = valor + 20;
	}
	if (testeBit(solucao, 6))
	{
		peso = peso + 1;
		valor = valor + 10;
	}

	if (testeBit(solucao, 7))
	{
		peso = peso + 4;
		valor = valor + 2;
	}
	if (testeBit(solucao, 8))
	{
		peso = peso + 3;
		valor = valor + 1;
	}
	if (testeBit(solucao, 9))
	{
		peso = peso + 2;
		valor = valor + 1;
	}
	if (testeBit(solucao, 10))
	{
		peso = peso + 1;
		valor = valor + 3;
	}

	if (testeBit(solucao, 11))
	{
		peso = peso + 9;
		valor = valor + 15;
	}

	if (testeBit(solucao, 12))
	{
		peso = peso + 4;
		valor = valor + 10;
	}

	if (testeBit(solucao, 13))
	{
		peso = peso + 5;
		valor = valor + 8;
	}
	if (testeBit(solucao, 14))
	{
		peso = peso + 3;
		valor = valor + 4;
	}
	if (testeBit(solucao, 15))
	{
		peso = peso + 12;
		valor = valor + 4;
	}

	cout << "$" << right << setw(3) << valor << " - ";
	cout << right << setw(2) << peso << "kg - ";



	bool resultado = false;
	if (peso <= 20)
		return resultado = true;
	else
		return resultado;
}
