#pragma once


struct Horario            // Registros
{
	int Hora;
	int Minuto;

};

struct Questoes 
{
	short Dificuldade;
	Horario inicio;
	Horario Fim;

};

struct Estatistica
{
	float DificudadeMedia;
	float TempoMedio;

};

void Linha(char, int);                                    // Prototipos da funções  
int FuncaoHorario(Horario, Horario);
Estatistica estatis(Questoes * vet_quest, int TamnhoDoVetor, int Indice, int Passo);