#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	//variavél que por receber verdadeiro ou falso
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

	//Laço: enquanto nossa condição for falsa continuamos fazendo repeticões
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
		
		//o programa fica parado até que digitem o próximo comando
		system("pause");

		//semente para deixar números aleatórios
		srand((int)time(0));
		dado6 = rand() % 6 + 1;
		//jog1

		//laço que usamos quando temos determinado a quantidade de loops que queremos dá
		//enquanto minha consição for verdadeira meu laço continua rodando
		if (dado6 > 4)
		  {
			dano = Ataq1 - Def2;
			vida2 = vida2 - dano;
			//mostra na tela
			cout << jog1 << " Acertou" << endl;
			//ir pra próxima linha
			cin.get();
		   }
		//condição: vai testar meu comando
		else if (dado6 <= 4)
		     {
			//mostra na tela
			cout << jog1 << " Errou " << endl;
			//ir pra próxima linha
			cin.get();
		     }

		// jog2
		dado6 = rand() % 6 + 1;
		//se. condição: vai testar meu comando
		if (dado6 > 4)
			{
			dano = Ataq2 - Def1;
			vida1 = vida1 - dano;
			cout << jog2 << " Acertou " << endl;;
			//ir pra próxima linha
			cin.get();
			}
		//condição: vai testar meu comando
		else if (dado6 <= 4)
			{	
			//mostra na tela
			cout << jog2 << " Errou " << endl;
			//ir pra próxima linha
			cin.get();
			}
		//limpar linhas
		system("cls");

		//se. condição: vai testar meu comando
		if (vida1 <= 0 || vida2 <= 0)
		{
			//quando sair for verdadeiro meu laço para de rodar
			sair = true;
		}
	}
		//se: condição vai testar meu comando 
		if (vida1 > 0)
			//mostra na tela
			cout << jog1 << " Venceu!" << endl;
		//condição: vai testar meu comando
		else if (vida2 > 0)
			//mostra na tela
			cout << jog2 << " Venceu!" << endl;
		//condição:vai testar meu comando 
		else
			cout << " Os dois perderam" << endl;
		return 0; 
}
