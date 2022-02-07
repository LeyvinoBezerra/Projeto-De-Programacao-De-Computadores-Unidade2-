#include "Concurso.h"
#include <iostream>
using namespace std;
void Linha(char str, int quatidade) {                                 // Função para chamar linha

	for (int i = 0; i < quatidade; i++)
	{
		cout << str;
	}

	cout << endl;
}

int FuncaoHorario(Horario Inicio, Horario Fim) {            // Função para retornar o retorno "resto do horario
	int retorno;
	retorno = ((Fim.Hora * 60) + Fim.Minuto) - ((Inicio.Hora * 60) + Inicio.Minuto);
	return retorno;
}

Estatistica estatis(Questoes * vet, int TamnhoDoVetor, int Indice, int Passo) {      // Função para calcular a dificuldade média e o tempo medio
	double SomaTempo = 0, SomaDificuldade = 0;
	int k = 0;
	Estatistica Media;

	for (int i = Indice; i < TamnhoDoVetor; i += Passo)
	{
		SomaDificuldade += vet[i].Dificuldade;
		SomaTempo += FuncaoHorario(vet[i].inicio, vet[i].Fim);
		k++;
	}

	Media.DificudadeMedia = SomaDificuldade / k;
	Media.TempoMedio = SomaTempo / k;

	return Media;
}
