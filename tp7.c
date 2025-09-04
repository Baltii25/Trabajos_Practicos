// https://github.com/Baltii25/Trabajos_Practicos	

#include <stdio.h>
#define TAM 10

void llenarArreglos(int codigos[], float precios[]){
	for(int i=0; i<TAM;i++){
		printf("\nIngrese el código del elemento %d (1-999999999): ", i);
		scanf("%d", &codigos[i]);
		while(codigos[i]<1 || codigos[i]>999999999){
			printf("\nError. Introduzca un número del 1 al 999999999: ");
			scanf("%d", &codigos[i]);
		}

		printf("\nIngrese el precio del elemento %d: ", i);
		scanf("%f", &precios[i]);
		while(precios[i]<0){
			printf("\nError. El precio debe ser positivo, introduzca otro: ");
			scanf("%f", &precios[i]);
		}
	}
}

int main(){
	int indMax=0;
	int indMin=0;
	int codigos[TAM]={0};
	float precios[TAM]={0};
	printf("Ingrese %d productos, se solicita el código de barras y el precio", TAM);
	llenarArreglos(codigos, precios);
	printf("\nCódigo \t\t Precio");
	for(int i=0; i<TAM; i++){
		printf("\n%d \t\t %.2f", codigos[i], precios[i]);
		if(precios[indMax]<precios[i])
			indMax=i;
		if(precios[indMin]>precios[i])
			indMin=i;
	}
	printf("\n\nMás caro: (%d) %.2f", codigos[indMax], precios[indMax]);
	printf("\nMás barato: (%d) %.2f", codigos[indMin], precios[indMin]);
	return 0;
}
