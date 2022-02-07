#include<iostream>
#include"Concurso.h"

using namespace std;

int main() {

    cout << " Qual o numero de participantes? " << endl;    // Entrada de numero de participante para o vetor dinamico
	int NumeroDeParticipante;
	cin >> NumeroDeParticipante;

	cout << " Qual o numero de questoes? " << endl;        // entrada de numero de questoões para o veor dinamico 
	int NumeroDeQuestoes;
	cin >> NumeroDeQuestoes;

	char separador;                                       // separador de número :

	Linha('=', 30);                                       // Função linha 
	
	int tamanhoVetor = NumeroDeParticipante*NumeroDeQuestoes;
	Questoes * vet = new Questoes[tamanhoVetor];                    // Vetor Dinamico de questão
	
	char letra = 'A';
	int Numer = 1;
	int contador = 0;
	
	for (int k = 0; k < NumeroDeParticipante; k++){               // For do vetor dinamico para participante
		
		 cout << "participante " << Numer << endl;
		 Linha('-', 17);
         char letra = 'A';
		 Numer += 1;
		
		 for (int p = 0; p < NumeroDeQuestoes; p++)               // For do vetro dinamico para questões 
		 {
			cout << "Questão " << letra << endl;
			letra += 1;
		

			cout << "Dificudade: " << endl;
			cin >> vet[contador].Dificuldade;
			cout << "INICIO: " << endl;
			cin >> vet[contador].inicio.Hora >> separador >> vet[contador].inicio.Minuto;
			cout << "FIM: " << endl;
			cin >> vet[contador].Fim.Hora >> separador >>vet[contador].Fim.Minuto;

			++contador;
			            

			Linha('=',30);

			}
	}
	
	     char letraConc = 'A';
	
	     cout << "Estatisticas " << endl;
	     Linha('-', 17);

		 for (int x = 0; x <NumeroDeQuestoes ; x++)
	 {
	     Estatistica defineEstatistica = estatis(&vet[0], tamanhoVetor, x, NumeroDeQuestoes);
		 cout << "Questao " << letraConc << ": Dificuldade Media ( " << defineEstatistica.DificudadeMedia << " ) - Tempo Medio ( " << defineEstatistica.TempoMedio<<" )"<< endl;
		
		 letraConc += 1;
	 }
		
		 Estatistica defineEstatistica = estatis(&vet[0], tamanhoVetor, 0, 1);
		 cout << "Concurso : Dificuldade Media (" << defineEstatistica.DificudadeMedia << ") - Tempo Medio(" << defineEstatistica.TempoMedio << ")" << endl;
	 
		 
    system("pause");
	return 0;
}



