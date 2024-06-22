#include <iostream>
#include <conio.h>
#include <Windows.h>

//Função que cria o jogo da velha exemplo com os números das linhas e colunas, sendo utilizada na função int main
void imprime_jogo_exemplo(double jogoExemplo[3][3]) {

	printf("\n");
	printf("  %.1f | %.1f | %.1f  \n", jogoExemplo[0][0] = 0.0, jogoExemplo[0][1] = 0.1, jogoExemplo[0][2] = 0.2);
	printf(" -----+-----+-----  \n");
	printf("  %.1f | %.1f | %.1f  \n", jogoExemplo[1][0] = 1.0, jogoExemplo[1][1] = 1.1, jogoExemplo[1][2] = 1.2);
	printf(" -----+-----+-----  \n");
	printf("  %.1f | %.1f | %.1f  \n", jogoExemplo[2][0] = 2.0, jogoExemplo[2][1] = 2.1, jogoExemplo[2][2] = 2.2);
	printf("\n");

	return;
}

//Função que cria a matriz do jogo da velha, sendo utilizada na função int main
void imprime_jogo(char jogo[3][3]) {

	printf("\n");
	printf("  %c | %c | %c  \n", jogo[0][0], jogo[0][1], jogo[0][2]);
	printf(" ---+---+--- \n");
	printf("  %c | %c | %c  \n", jogo[1][0], jogo[1][1], jogo[1][2]);
	printf(" ---+---+--- \n");
	printf("  %c | %c | %c  \n", jogo[2][0], jogo[2][1], jogo[2][2]);
	printf("\n");

	return;
}

//Função para limpar a matriz após cada partida
void matriz_limpa(char jogo[3][3]) {
	for (int linha = 0; linha < 3; linha++) {
		for (int coluna = 0; coluna < 3; coluna++) {
			jogo[linha][coluna] = ' ';
		}

	}
	return;
}

int main(void)
{
	//Declarando as variáveis
	char jogo[3][3], res = 's', opcao;
	double jogoExemplo[3][3];
	int escolha, inicio, linha, coluna;
	bool vitoria = false;

	//For utilizado para tirar os caracteres especiais da matriz e deixar os espaços vazios
	for (int linha = 0; linha < 3; linha++) {
		for (int coluna = 0; coluna < 3; coluna++) {
			jogo[linha][coluna] = ' ';
		}
	}

	//Iniciando e executando o jogo da velha
	//O jogo será executado normalmente, ao final se o usuário digitar a letra 'n' o programa será encerrado
	while (res == 's') {

		//Menu de opções
		system("cls");
		printf("Bem vindo ao Jogo da Velha, digite a opcao desejada: \n");
		printf("1- Iniciar o jogo \n");
		printf("0- Sair \n");
		scanf_s("%d", &escolha);

		switch (escolha) {
		case 1:
			matriz_limpa(jogo); //Função para limpar a matriz após cada partida
			vitoria = false; //Faz com que o jogo seja reiniciado

			//Jogo iniciando
			for (int i = 1; i < 10 && !vitoria; i++) {

				system("cls");
				printf("Abaixo segue o mapa de linhas e colunas do jogo da velha: \n");
				printf("Exemplo: 0.1, sendo linha 0 e coluna 1. \n");
				imprime_jogo_exemplo(jogoExemplo); //Jogo da velha de exemplo com colunas e linhas
				printf("Durante o jogo, para fazer as jogadas utilize o 'x' ou 'o' \n");
				printf("Bom jogo! \n\n");
				imprime_jogo(jogo); //Jogo da velha
				printf("\n");
				printf("Digite a sua jogada: \n");
				scanf_s(" %c", &opcao, 1); //Escolhendo entre 'x' e 'o'. O espaço antes do %c é para evitar que o loop pule essa parte

				printf("Digite a linha: \n");
				scanf_s("%d", &linha); //Linha da matriz

				printf("Digite a coluna: \n");
				scanf_s("%d", &coluna); //Coluna da matriz

				//Condições sobre a opção para que o jogo da velha seja preenchido
				switch (opcao) {
				case 'x':
					if (linha == 0 && coluna == 0) {
						jogo[0][0] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 0 && coluna == 1) {
						jogo[0][1] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 0 && coluna == 2) {
						jogo[0][2] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 1 && coluna == 0) {
						jogo[1][0] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 1 && coluna == 1) {
						jogo[1][1] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 1 && coluna == 2) {
						jogo[1][2] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição

					}
					else if (linha == 2 && coluna == 0) {
						jogo[2][0] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição

					}
					else if (linha == 2 && coluna == 1) {
						jogo[2][1] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição

					}
					else if (linha == 2 && coluna == 2) {
						jogo[2][2] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else {
						printf("Linha ou coluna incorreta \n");
						Sleep(2000); //Tempo para a mensagem ficar em tela
					}
					break;

				case 'o':
					if (linha == 0 && coluna == 0) {
						jogo[0][0] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 0 && coluna == 1) {
						jogo[0][1] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 0 && coluna == 2) {
						jogo[0][2] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 1 && coluna == 0) {
						jogo[1][0] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 1 && coluna == 1) {
						jogo[1][1] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else if (linha == 1 && coluna == 2) {
						jogo[1][2] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição

					}
					else if (linha == 2 && coluna == 0) {
						jogo[2][0] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição

					}
					else if (linha == 2 && coluna == 1) {
						jogo[2][1] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição

					}
					else if (linha == 2 && coluna == 2) {
						jogo[2][2] = opcao;
						imprime_jogo(jogo); //Imprime a tabela preechida segunda a condição
					}
					else {
						printf("Linha ou coluna incorreta \n");
						Sleep(2000); //Tempo para a mensagem ficar em tela
					}
					break;
				default:
					printf("jogada invalida \n");
					Sleep(2000); //Tempo para a mensagem ficar em tela
				}

				//Linhas: Se alguma condição for verdadeira, o jogador ganhou o jogo
				if (jogo[0][0] != ' ' && jogo[0][0] == jogo[0][1] && jogo[0][1] == jogo[0][2]) {
					printf("Linha preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;

				}
				else if (jogo[1][0] != ' ' && jogo[1][0] == jogo[1][1] && jogo[1][1] == jogo[1][2]) {
					printf("Linha preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}
				else if (jogo[2][0] != ' ' && jogo[2][0] == jogo[2][1] && jogo[2][1] == jogo[2][2]) {
					printf("Linha preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}
				//Colunas: Se alguma condição for verdadeira, o jogador ganhou o jogo
				else if (jogo[0][0] != ' ' && jogo[0][0] == jogo[1][0] && jogo[1][0] == jogo[2][0]) {
					printf("Coluna preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}
				else if (jogo[0][1] != ' ' && jogo[0][1] == jogo[1][1] && jogo[1][1] == jogo[2][1]) {
					printf("Coluna preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}
				else if (jogo[0][2] != ' ' && jogo[0][2] == jogo[1][2] && jogo[1][2] == jogo[2][2]) {
					printf("Coluna preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}
				//Diagonal: Se alguma condição for verdadeira, o jogador ganhou o jogo
				else if (jogo[0][0] != ' ' && jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2]) {
					printf("Diagonal preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}
				else if (jogo[0][2] != ' ' && jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0]) {
					printf("Diagonal preenchida, voce ganhou o jogo! \n");
					vitoria = true;
					break;
				}

			}
			//Se ninguem conseguir preencher linha, coluna ou diagonal, reflete essa mensagem e o jogo encerra.
			if (!vitoria) {
				printf("Empate, ninguem ganhou o jogo \n");
			}

			break;

		case 0:
			printf("Jogo encerrado! \n");
			break;

		default:
			printf("Opcao invalida \n");
			break;
		}

		printf("Deseja jogar de novo? (s/n) \n");
		res = _getche();
		printf("\n\n");
	}

	system("pause");
}
