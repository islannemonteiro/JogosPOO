#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	//variav�l que por receber verdadeiro ou falso
	bool sair = false;
	string jog1, jog2;
	//recebendo valores inteiros
	int vida1 = 20, vida2 = 20;
	int dado6, dano;
	int Ataq1 = 4, Ataq2 = 4, Def1 = 2, Def2 = 2;

	//mostra na tela
	cout << "Digite o nome do jogador 1: " << endl;
	//salva o que foi posto no "cout"
	cin >> jog1;
	//mostra na tela
	cout << "Digite o nome do jogador 2: " << endl;
	//salva o que foi posto no "cout"
	cin >> jog2;

	//La�o: enquanto nossa condi��o for falsa continuamos fazendo repetic�es
	while (sair == false)
	{
		//Mostra na tela
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Ataque: " << Ataq1 << "          " << "Ataque: " << Ataq2 << endl;
		cout << "Defesa: " << Def1 << "          " << "Defesa: " << Def2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;
		
		//o programa fica parado at� que digitem o pr�ximo comando
		system("pause");

		//semente para deixar n�meros aleat�rios
		srand((int)time(0));
		dado6 = rand() % 6 + 1;
		//jog1

		//la�o que usamos quando temos determinado a quantidade de loops que queremos d�
		//enquanto minha consi��o for verdadeira meu la�o continua rodando
		if (dado6 > 4)
		  {
			dano = Ataq1 - Def2;
			vida2 = vida2 - dano;
			//mostra na tela
			cout << jog1 << " Acertou" << endl;
			//ir pra pr�xima linha
			cin.get();
		   }
		//condi��o: vai testar meu comando
		else if (dado6 <= 4)
		     {
			//mostra na tela
			cout << jog1 << " Errou " << endl;
			//ir pra pr�xima linha
			cin.get();
		     }

		// jog2
		dado6 = rand() % 6 + 1;
		//se. condi��o: vai testar meu comando
		if (dado6 > 4)
			{
			dano = Ataq2 - Def1;
			vida1 = vida1 - dano;
			cout << jog2 << " Acertou " << endl;;
			//ir pra pr�xima linha
			cin.get();
			}
		//condi��o: vai testar meu comando
		else if (dado6 <= 4)
			{	
			//mostra na tela
			cout << jog2 << " Errou " << endl;
			//ir pra pr�xima linha
			cin.get();
			}
		//limpar linhas
		system("cls");

		//se. condi��o: vai testar meu comando
		if (vida1 <= 0 || vida2 <= 0)
		{
			//quando sair for verdadeiro meu la�o para de rodar
			sair = true;
		}
	}
		//se: condi��o vai testar meu comando 
		if (vida1 > 0)
			//mostra na tela
			cout << jog1 << " Venceu!" << endl;
		//condi��o: vai testar meu comando
		else if (vida2 > 0)
			//mostra na tela
			cout << jog2 << " Venceu!" << endl;
		//condi��o:vai testar meu comando 
		else
			cout << " Os dois perderam" << endl;
		return 0; 
}
