#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

void mediaGasto();

int main(void){
	setlocale(LC_ALL, "Portuguese");
	mediaGasto();
	
}

void mediaGasto(){
	
	int dadoUsuario, mes, dtAtual, aux;
	float saldoAtualUsuario, mediaSimples, gastoPadrao, saldoRemanes;
	float salario = 900;
	
	printf("[1] p/ recebi dia 1� \n[2] p/ recebi dia 15 \n[3] p/ recebi dia 28\nDigite: ");
	scanf("%d", &dadoUsuario);	
	
	if(dadoUsuario == 1){
		printf("\nQual m�s? [1 - 12]: ");
		scanf("%d", &mes);
		if(mes == 2){
			printf("\nDigite o saldo dispon�vel: ");
			scanf("%f", &saldoAtualUsuario);
				if(saldoAtualUsuario > 900){
					saldoRemanes = saldoAtualUsuario - salario;
						printf("\nSaldo do m�s anterior = R$ %.2f", saldoRemanes);
						printf("\nQue dia � hoje?\n");
						scanf("%d", &dtAtual);
							aux = 29 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 28;
								printf("\nGasto padr�o do m�s = R$ %.2f", gastoPadrao);
								printf("\nGasto di�rio dispon�vel = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}else{
						printf("\nQue dia � hoje?\n");
						scanf("%d", &dtAtual);
							aux = 29 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 28;
								printf("\nGasto padr�o do m�s = R$ %.2f", gastoPadrao);
								printf("\nGasto di�rio dispon�vel = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}
		}else if( mes == 4 || mes == 6 || mes == 9 || mes == 11){
			printf("\nDigite o saldo dispon�vel: ");
			scanf("%f", &saldoAtualUsuario);
				if(saldoAtualUsuario > 900){
					saldoRemanes = saldoAtualUsuario - salario;
						printf("\nSaldo do m�s anterior = R$ %.2f", saldoRemanes);
						printf("\nQue dia � hoje?\n");
						scanf("%d", &dtAtual);
							aux = 30 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 30;
								printf("\nGasto padr�o do m�s = R$ %.2f", gastoPadrao);
								printf("\nGasto di�rio dispon�vel = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}else{
						printf("\nQue dia � hoje?\n");
						scanf("%d", &dtAtual);
							aux = 30 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 30;
								printf("\nGasto padr�o do m�s = R$ %.2f", gastoPadrao);
								printf("\nGasto di�rio dispon�vel = R$ %.2f", mediaSimples);
				
				}				printf("\nDias restantes = %d", aux);
		}else{
			printf("\nDigite o saldo dispon�vel: ");
			scanf("%f", &saldoAtualUsuario);
				if(saldoAtualUsuario > 900){
					saldoRemanes = saldoAtualUsuario - salario;
						printf("\nSaldo do m�s anterior = R$ %.2f", saldoRemanes);
						printf("\nQue dia � hoje?\n");
						scanf("%d", &dtAtual);
							aux = 31 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 31;
								printf("\nGasto padr�o do m�s = R$ %.2f", gastoPadrao);
								printf("\nGasto di�rio dispon�vel = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}else{
						printf("\nQue dia � hoje?\n");
						scanf("%d", &dtAtual);
							aux = 31 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 31;
								printf("\nGasto padr�o do m�s = R$ %.2f", gastoPadrao);
								printf("\nGasto di�rio dispon�vel = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}
		}
			
	}
	
}
