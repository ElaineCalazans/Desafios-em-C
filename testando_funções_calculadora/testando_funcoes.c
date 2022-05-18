#include<stdio.h>
#include<locale.h>

void escolha();
void tabSoma();
void tabSub();
void tabDivi();
void tabMulti();

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	
	printf("Escolha: 1-Soma\n2-Sub\n3-Divi\n4-Multi: \nEscolha: ");
	scanf("%d", &op);
	
	while(op!=4){
		switch(op){
			case 1:
				printf("\n\tSoma\n");
				escolha();
				break;
			case 2:
				printf("\n\tSubtração\n");
				escolha();
				break;
		}
	}
		

}

void escolha(){
	int x, y;
	printf("\nDigite início da tabuada: ");
	scanf("%d",&x);
	printf("Digite fim da tabuada: ");
	scanf("%d",&y);
	
}

void tabSoma(int inicio, int fim){
	int i, j, aux;
	for(i=inicio;i<=fim;i++){
			for(j=0;j<10;j++){
				aux = i+j;
				printf("\n%d + %d = %d",i,j,aux);
			}
			printf("\n");
		}
}

void tabSub(int inicio, int fim){
	int i, j, aux;
	for(i=inicio;i<=fim;i++){
			for(j=0;j<10;j++){
				aux = i-j;
				printf("\n%d - %d = %d",i,j,aux);
			}
			printf("\n");
		}
}

void tabDivi(int inicio, int fim){
	int i, j, aux;
	for(i=inicio;i<=fim;i++){
			for(j=0;j<10;j++){
				aux = i/j;
				printf("\n%d / %d = %d",i,j,aux);
			}
			printf("\n");
		}
}

void tabMult(int inicio, int fim){
	int i, j, aux;
	for(i=inicio;i<=fim;i++){
			for(j=0;j<10;j++){
				aux = i*j;
				printf("\n%d * %d = %d",i,j,aux);
			}
			printf("\n");
		}
}
