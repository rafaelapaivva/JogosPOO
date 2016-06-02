#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int dado6, dano;
	int Ataque1 = 5, Ataque2 = 5;
	int Defesa1 = 3, Defesa2 = 3;

	cout << "Digite o nome do primeiro jogador: " << endl;
	cin >> jog1;
	cout << "Digite o nome do segundo jogador: " << endl;
	cin >> jog2;

	while (sair == false)
	{
		
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Ataque: " << Ataque1 << "          " << "Ataque: " << Ataque2 << endl;
		cout << "Defesa: " << Defesa1 << "          " << "Defesa: " << Defesa2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;

		system("pause");

		//Gera numeros aleatorios 
		srand((int)time(0));

		//Calcula a defesa e ataque do primeiro jogador.
		
		dado6 = rand() % 6 + 1;
		if (dado6 > 5)
		{
			dano = Ataque1 - Defesa2;
			vida2 = vida2 - dano;
			cout << jog1 << " Acertou" << endl;
			cin.get();
		}
		else if (dado6 <= 5)
		{
			cout << jog1 << " Errou " << endl;
			cin.get();
		}

		//Calcula a defesa e o ataque do segundo jogador.
		
		dado6 = rand() % 6 + 1;
		if (dado6 > 5)
		{
			dano = Ataque2 - Defesa1;
			vida1 = vida1 - dano;
			cout << jog2 << " Acertou " << endl;;
			cin.get();
		}
		else if (dado6 <= 5)
		{
			cout << jog2 << " Errou " << endl;
			cin.get();
		}
		
		system("cls");

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}

	if (vida1 > 0)
		cout << jog1 << " Parabens, voce ganhou! " << endl;
	else if (vida2 > 0)
		cout << jog2 << " Parabens, voce ganhou! " << endl;
	else
		cout << " Poxa, os dois perderam. :( " << endl;

	return 0;

}