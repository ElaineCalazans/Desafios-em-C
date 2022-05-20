#include<stdio.h>
#include<locale.h>

int menu();
void soma();
void div();
void sub();
void multi();

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	menu();
	
}

int menu(){
	int op;
	printf("\n\tCalculadora\n");
	printf("\n1-Soma \n2-Div \n3-Sub \n4-Multi \n\nDigite uma opção\n");
	scanf("%d", &op);
	
	if(op==1){
		soma();
	}else if(op==2){
		div();
	}else if(op==3){
		sub();
	}else{
		multi();
	}
	
}

void soma(){
	int i, j, aux, inicio, fim, res;
	printf("Digite o início da tabuada: ");
	scanf("%d", &inicio);
	printf("Digite o fim da tabuada: ");
	scanf("%d", &fim);
	
	for(i=inicio;i<=fim;i++){
		for(j=0; j<10; j++){
			aux = i+j;
			printf("\n%d + %d = %d",i,j,aux);
		}
		printf("\n");
	}
	
}

void div(){
	int i, j, aux, inicio, fim, res;
	printf("Digite o início da tabuada: ");
	scanf("%d", &inicio);
	printf("Digite o fim da tabuada: ");
	scanf("%d", &fim);
	
	for(i=inicio;i<=fim;i++){
		for(j=0; j<10; j++){
			aux = i%j;
			printf("\n%d / %d = %d",i,j,aux);
		}
		printf("\n");
	}
}

void sub(){
	int i, j, aux, inicio, fim, res;
	printf("Digite o início da tabuada: ");
	scanf("%d", &inicio);
	printf("Digite o fim da tabuada: ");
	scanf("%d", &fim);
	
	for(i=inicio;i<=fim;i++){
		for(j=0; j<10; j++){
			aux = i-j;
			printf("\n%d - %d = %d",i,j,aux);
		}
		printf("\n");
	}
}

void multi(){
	int i, j, aux, inicio, fim, res;
	printf("Digite o início da tabuada: ");
	scanf("%d", &inicio);
	printf("Digite o fim da tabuada: ");
	scanf("%d", &fim);
	
	for(i=inicio;i<=fim;i++){
		for(j=0; j<10; j++){
			aux = i*j;
			printf("\n%d * %d = %d",i,j,aux);
		}
		printf("\n");
	}
}
