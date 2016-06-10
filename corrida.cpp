//Corrida 
//Entra nas bibliotecas
#include <iostream> 
#include <string>
#include <ctime>

//Os recursos de entrada e saída das bibliotecas
using namespace std;

// Funçao do programa(Void), que faz parte do código, mesmo estando separado da parte principal. 
void imprimir_espacos (int total);

//Main é a função principal. O que está entre parenteses é necessario, caso o programa precise que o usuario passe argumentos, ao ser chamado pelo console.
int main (int argc, char* args[])
{
	bool sair = false; //Valores em Booleano podem ser: Verdeiro(true) e Falso(false).
	string mot1; //Variavel referente ao motorista 1
	string mot2; //Variavel referente ao motorista 2
	int rodada = 0, rodada2 = 0; //Variavel inteira com os valores iniciais
	int total_espacos = 10; //Variavel inteira com a quantidade de espaços


	cout << "Digite o nome do primeiro piloto :" << endl; //Imprime na tela.
	cin >> mot1; //Comando de entrada que salva na variavel. 
	cout << "Digite o nome do segundo piloto :" << endl; //Imprime na tela.
	cin >> mot2; //Comando de entrada que salva na variavel.

 //While é um laço de repetiçao que é usado quando nao sabemos quantas vezes vamos repetir ou quando vamos parar.
	while (sair == false)//Sair == False, retomando a bool para dizer quando queremos sair do laço.
	{

		srand((int)time(0)); //O rand() gera uma sequência de valores que se repete quando programa é executado.
		total_espacos = rand() % 3 + 1; //Gerando numeros aleatorios.
		rodada = rodada + total_espacos; // A primeira rodada vai ser somada com o total de espaço. 

		//Imprimir os carrinhos e seus nomes, em tela.
		cout << "PARTIDA                                                                      CHEGADA" << endl;
		cout << "piloto " << mot1 << endl;
		imprimir_espacos(rodada); //Vai contabilizar a quantidade de espacos
		cout << "   _  " << endl;
		imprimir_espacos(rodada);//Vai contar a quantidade de espacos e o carro vai continuar com o teto.
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		//Agora vai ser a vez do segundo motorista, fazendo as mesmas coisas do primeiro motorista.
		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;

		cout << "PARTIDA                                                                      CHEGADA" << endl;
		cout << "piloto " << mot2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		cout << "Quer ir para a próxima jogada?? (Digite enter)" << endl; //Início da proxima jogada.


		system("pause");//Vai esperar que o usuario aperte alguma tecla, para continuar.

		system("cls"); //Limpar a tela.



		if (rodada >= 20 || rodada2 >= 20) //Quando os carros chegarem na vigessima rodada, irão parar.
		{
			sair = true; //Em Booleano
		}
		else //Caso o contrario.
			system("cls"); //Limpar a tela.
	}


	if (rodada = 20)  //O primeiro jogador chegar a 20, ele ganha.
		cout << mot1 << "Ganhou o primeiro lugar!!" << endl;

	else if (rodada2 = 20) //O segundo jogador chegar a 20, entao ele ganha.
		cout << mot2 << "Ganhou o primeiro lugar!!" << endl;

	else //Caso tudo acima seja descartado, será dado empate.
		cout << "EMPATE :(" << endl; //Empate!


	system("pause"); //Vai dar uma pausa.

	return 0; //Retorna 0.
}

void imprimir_espacos(int total) //A funçao declarada la no inicio.
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) //Laço for com a variavel qntd_atual

	{
		cout << " ";
	}
}