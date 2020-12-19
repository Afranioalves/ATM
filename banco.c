#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

// variables
	int PIN = 1234;
	int codigo, operacao;

//Init a loop para que não ficarmos toda hora ter que reiniciar o terminal	
	while ("true")
	{
		system("clear");
	printf("==================###======#########====####======####=================\n");
	printf("=================#####=====#########====###=#====#=###=================\n");
	printf("================#######=======##========###==#==#==###=================\n");
	printf("================##===##=======##========###===##===###=================\n");
	printf("================#######=======##========###========###=================\n");
	printf("================##===##=======##========###========###=================\n");
	printf("================##===##=======##========###========###=================\n");
	printf("\n");
	printf("\n");
	printf("DIGITE O SEU PIN:");
	scanf("%i", &codigo);
	system("clear");
	if(PIN != codigo){
		printf("\n\n========================= PIN ERRADO ===============================\n\n\n");

	}else{
		printf("=====================================================================\n");
		printf("=====================================================================\n");
		printf("========================= ESCOLHA A OPERACÃO ========================\n");
		printf("=====================================================================\n");
		printf("=====================================================================\n");
		printf("\n");
		printf("\n");
		printf(" => 1) LEVANTAMENTO   \t\t\t => 2) TRÂNSFERENCIA \n\n");
		printf(" => 3) PAGAMENTOS      \t\t\t => 4) CONSULTA\n\n => 5) Alterar PIN\n\n");
		scanf("%i", &operacao);
		system("clear");
		
		switch(operacao){
			
			case 1:
					printf("=====================================================================\n");
					printf("=====================================================================\n");
					printf("========================= LEVANTAMENTO ==============================\n");
					printf("=====================================================================\n");
					printf("=====================================================================\n");
					printf("\n");
					printf("\n");
					printf(" => 1) 2.000 KZS     \t\t\t\t");
					printf(" => 2) 5.000 KZS \n");
					printf("\n");
					printf(" => 3) 10.0000 KZS \t\t\t\t");
					printf(" => 4) OUTRO MONTANTE \n");
					scanf("%d",&operacao);
					system("clear");

					printf("\n\nPós levantamento Retirar Cartão Multicaixa ? \n");
					printf(" 1) ==> Sim \t\t\t\t 2) ==> Não\n");
					scanf("%d",&operacao);

					if (operacao == 1)
					{
						system("clear");
						printf("\n\n\t\t\t\tFaz de conta que teu Dinheiro Saíu $$$$$ :)\n");
					}
					else if(operacao == 2)
					{
						system("clear");
						printf("\n\n\t\t\t\tFaz de conta que teu Dinheiro Saíu $$$$$ :)\n");
						system("exit");
					}
					else{
						printf("Operação não Encontrada !!\n");
					}
					

			break;
			case 3:
					printf("=====================================================================\n");
					printf("=====================================================================\n");
					printf("=========================== Trânsferencia ===========================\n");
					printf("=====================================================================\n");
					printf("=====================================================================\n");
					printf("\n\n");
			break;
			
			// Consultas
			case 4:
					printf("=====================================================================\n");
					printf("=====================================================================\n");
					printf("=========================== CONSULTA ================================\n");
					printf("=====================================================================\n");
					printf("=====================================================================\n");
					printf("\n\n");
					printf(" => 1) CONSULTAR SALDO DA CONTA\n");
					printf(" => 2) CONSULTAR IBAN	\n\n");
					printf(" => 0) CANCELAR \t\t\t\t\t\t\t => 3) OUTRAS OPÇÕES\n");
						int opt;
						scanf("%d",&opt); //variavel que vai pegar a opção selecionada.
					system("clear");
					switch (opt)
					{
						case 1:
							printf("=====================================================================\n");
							printf("=====================================================================\n");
							printf("=========================== CONSULTA SALDO DE CONTA =================\n");
							printf("=====================================================================\n");
							printf("=====================================================================\n");
							printf("\n");
							printf("\n");
							printf(" => 1) CONSULTAR NO ECRÃ\n\n => 2) PAPEL");
							printf("\n");
						break;
						
						
						default :
						
						printf("OPÇÃO NÃO ENCONTRADA :(");
						system("exit");
					
					}
			break;
			
			// Alterar pin
			case 5:
							printf("=====================================================================\n");
							printf("=====================================================================\n");
							printf("============================== ALTERAR PIN ==========================\n");
							printf("=====================================================================\n");
							printf("=====================================================================\n");
							printf("\n");
							printf("\n");
							printf("Insira o seu novo PIN: ");
								scanf("%d",&PIN);
							printf("\n\n\t\tPIN Alterado com Sucesso !\n\n");
							system("exit");
						break;
		default:
			printf("OPÇÃO NÃO ENCONTRADA :(");
		break;
		}
	}
	
	

	}
	
}
