#include <conio.c>
#include <stdio.h>
#define  PIN  1234

main(){
	textcolor(3);
	int codigo, operacao;
	float money = 100000;
	float saque;
	

	printf("=================##========#########==========####=====####==========\n");
	printf("================#####======#########===========###====###============\n");
	printf("===============#######========##===============###===###=============\n");
	printf("===============##===##========##===============####=####=============\n");
	printf("===============##===##========##===============#########=============\n");
	printf("===============##===##========##===============####==####============\n");
	printf("\n");
	printf("\n");
	printf("DIGITE O SEU PIN:");
	scanf("%i", &codigo);
	system("cls");
	if(PIN != codigo){
		printf("========================= PIN ERRADO ===============================\n");
	}else{
		printf("=====================================================================\n");
		printf("=====================================================================\n");
		printf("========================= ESCOLHA A OPERACAO ========================\n");
		printf("=====================================================================\n");
		printf("=====================================================================\n");
		printf("\n");
		printf("\n");
		printf(" => 1) LEVANTAMENTO                        ");
		printf(" => 2) TRANSFERENCIA \n");
		printf("\n");
		printf(" => 3) DEPOSITO                            ");
		printf(" => 4) CONSULTA \n");
		scanf("%i", &operacao);
		system("cls");
		
		switch(operacao){
			
			case 1:
				printf("=====================================================================\n");
				printf("=====================================================================\n");
				printf("========================= LEVANTAMENTO ==============================\n");
				printf("=====================================================================\n");
				printf("=====================================================================\n");
				printf("\n");
				printf("\n");
				printf(" => 1) 2.000 KZS                        ");
				printf(" => 2) 5.000 KZS \n");
				printf("\n");
				printf(" => 3) 10.0000 KZS                      ");
				printf(" => 4) OUTRO MONTANTE \n");
			break;
		}
	}
	
	
	
}
