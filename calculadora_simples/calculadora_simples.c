#include<stdio.h>
#include<locale.h>

void soma();
void parOuImpar();
void fat();
int menu();

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op=1;
	while(op!=4){
		op = menu();
		switch(op){
			case 1:
				soma();
				break;
				
			case 2:
				parOuImpar();
				break;
				
			case 3:
				fat();
				break;
				
			case 4:
				printf("Fim do programa....");
				break;
					
			default:
			printf("Op��o inv�lida!");
			break;		
		}	
	}
		
		
	}

int menu(){
	int aux1;
	printf("Digite uma op��o: \n");
	printf("\n1- Soma\n2- Par ou �mpar\n3- Fatorial\n4- Sair\n\nDigite Op��o: ");
	scanf("%d",&aux1);
	return aux1;
	
}

void soma(){
	int x, y;
	printf("Digite um n�mero: ");
	scanf("%d", &x);
	printf("Digite um n�mero: ");
	scanf("%d", &y);
	int soma = x + y;
	printf("\nO resultado da soma �: %d\n", soma);
	
}

void parOuImpar(){
	int a;
	printf("Digite um n�mero: ");
	scanf("%d", &a);
	if( a % 2 == 0){
		printf("O n�mero %d � par\n\n", a);	
	}else{
		printf("O n�mero %d � �mpar\n\n", a);
	}
		
}

void fat(){
	int n,fat = 1, j;
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	for(j = n; j > 1; j--){
		fat = fat * j;
	}
	
	printf("\nFatorial calculado: %d\n", fat);
	
}
