
#include <iostream> 
#include <string>
#include <ctime>
using namespace std;
void imprimir_espacos(int total1); 
int main() 
{
	// booleana: permmite receber verdadeiro ou falso
	bool sair = false; 
	//variavel
	string jog1, jog2; 
 	// variavel para numeros inteiros
	int total_jog1 = 0, total_jog2 = 0;

	//mostra na tela e pede para que o jogador digite o nome
	cout << "Digite o nome do jog 1:" << endl; 
	//salva o que foi posto no nosso "cout"
	cin >> jog1; 
	//mostra na tela e pede para que o jogador digite o nome
	cout << "Digite o nome do jog 2:" << endl; 
	//salva o que foi posto no nosso "cout"
	cin >> jog2; 
	
	//la�o: enquanto nossa condi��o for falsa continuamos fazendo repeti�oes
	while (sair == false)
	{
		//guardando o total de espa�os
		int total_espacos = 100;
		
		//Semente pra gerar numeros aleat�rios
		srand((int)time(0));
	
		//vai gerar um numero aleat�rio dentre 1 e 3
		total_espacos = rand() % 3 + 1;
	
		total1 = total1 + total_espacos;
		
		//vai gerar um numero aleat�rio dentre 1 e 3
		total_espacos = rand() % 3 + 1;
	
		total2 = total2 + total_espacos;
		
		//mostra na tela
		cout << "GO!" << endl;
	
		cout << "Inicio:                                           Fim:" << endl;
	
		//mostra na tela
		cout << "Jog1:" << jog1 << endl; 
		imprimir_espacos(total_jog1);
	 
	 	//mostra na tela
		cout << "  _  " << endl;
		imprimir_espacos(total_jog1);
	
		//mostra na tela
		cout << "-o-o>" << endl;
	
		//mostra na tela
		cout << "Percurso " << total_jog1 << endl;  
	
		//mostra na tela
		cout << "Jog2:" << jog2 << endl;
		imprimir_espacos(total_jog2);
		
		//mostra na tela
		cout << "  _  " << endl;
		imprimir_espacos(total_jog2);
        
		//mostra na tela
		cout << "-o-o>" << endl;
		
		//mostra na tela
		cout << "Percuso " << total_jog2 << endl;  
		
		//limpar linhas
		system("cls");
	    
		//se. condi��o: vai testar meu comando
		if (total1 >= 100 || total2 >= 100)
		{
			
			sair = true;

		}

		//limpar linhas
		else system("cls");
	}

	//mostra na tela
	cout << "Fim do jogo!" << endl;

   if (total_jog1 >= 100) cout << jog1 << "Voc� ganhou!" << endl;

	//Mensagem caso o jog 2 ganhe
	else if (total_jog2 >= 100) cout << jog2 << ", Voc� ganhou!" << endl;
	return 0; 
}



void imprimir_espacos(int total) 
{
	//la�o: enquanto a quantidade de espa�os n�o for atingida meu la�o vai continuar rodando
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		//mostra na tela
		cout << " ";


	}

}
