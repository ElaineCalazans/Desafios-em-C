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
	
	printf("[1] p/ recebi dia 1º \n[2] p/ recebi dia 15 \n[3] p/ recebi dia 28\nDigite: ");
	scanf("%d", &dadoUsuario);	
	
	if(dadoUsuario == 1){
		printf("\nQual mês? [1 - 12]: ");
		scanf("%d", &mes);
		if(mes == 2){
			printf("\nDigite o saldo disponível: ");
			scanf("%f", &saldoAtualUsuario);
				if(saldoAtualUsuario > 900){
					saldoRemanes = saldoAtualUsuario - salario;
						printf("\nSaldo do mês anterior = R$ %.2f", saldoRemanes);
						printf("\nQue dia é hoje?\n");
						scanf("%d", &dtAtual);
							aux = 29 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 28;
								printf("\nGasto padrão do mês = R$ %.2f", gastoPadrao);
								printf("\nGasto diário disponível = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}else{
						printf("\nQue dia é hoje?\n");
						scanf("%d", &dtAtual);
							aux = 29 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 28;
								printf("\nGasto padrão do mês = R$ %.2f", gastoPadrao);
								printf("\nGasto diário disponível = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}
		}else if( mes == 4 || mes == 6 || mes == 9 || mes == 11){
			printf("\nDigite o saldo disponível: ");
			scanf("%f", &saldoAtualUsuario);
				if(saldoAtualUsuario > 900){
					saldoRemanes = saldoAtualUsuario - salario;
						printf("\nSaldo do mês anterior = R$ %.2f", saldoRemanes);
						printf("\nQue dia é hoje?\n");
						scanf("%d", &dtAtual);
							aux = 30 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 30;
								printf("\nGasto padrão do mês = R$ %.2f", gastoPadrao);
								printf("\nGasto diário disponível = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}else{
						printf("\nQue dia é hoje?\n");
						scanf("%d", &dtAtual);
							aux = 30 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 30;
								printf("\nGasto padrão do mês = R$ %.2f", gastoPadrao);
								printf("\nGasto diário disponível = R$ %.2f", mediaSimples);
				
				}				printf("\nDias restantes = %d", aux);
		}else{
			printf("\nDigite o saldo disponível: ");
			scanf("%f", &saldoAtualUsuario);
				if(saldoAtualUsuario > 900){
					saldoRemanes = saldoAtualUsuario - salario;
						printf("\nSaldo do mês anterior = R$ %.2f", saldoRemanes);
						printf("\nQue dia é hoje?\n");
						scanf("%d", &dtAtual);
							aux = 31 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 31;
								printf("\nGasto padrão do mês = R$ %.2f", gastoPadrao);
								printf("\nGasto diário disponível = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}else{
						printf("\nQue dia é hoje?\n");
						scanf("%d", &dtAtual);
							aux = 31 - dtAtual;
							mediaSimples = saldoAtualUsuario / aux;
							gastoPadrao = salario / 31;
								printf("\nGasto padrão do mês = R$ %.2f", gastoPadrao);
								printf("\nGasto diário disponível = R$ %.2f", mediaSimples);
								printf("\nDias restantes = %d", aux);
				}
		}
			
	}
	
}
