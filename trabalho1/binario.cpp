#include <iostream>
using namespace std;

unsigned short ligarBit(unsigned short solucao, int bit)
{
	unsigned short  mascara = 1 << bit;
	return solucao | mascara;
}

unsigned short desligarBit(unsigned short solucao, int bit)
{
	unsigned short  mascara = ~(1 << bit);
	return solucao & mascara;
}

unsigned short testeBit(unsigned short solucao, int bit)
{
	unsigned short  mascara = 1 << bit;

	bool teste = false;

	if (solucao & mascara)
		return teste = true;
	else
		return teste;
}

unsigned short andBinario(unsigned short solucao, unsigned short solucao0)
{
	return solucao & solucao0;
}

unsigned short orBinario(unsigned short solucao, unsigned short solucao0)
{
	return solucao | solucao0;
}

unsigned short bitBaixo(unsigned short solucao)
{
	unsigned short  mascara = 255;
	return solucao & mascara;
}


unsigned short bitAlto(unsigned short solucao)
{
	unsigned short  mascara = 65280;
	return solucao & mascara;
}



