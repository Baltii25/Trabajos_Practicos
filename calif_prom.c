#include <stdio.h>
int main(){
	int cant, calif, max=0, min=100;
	float prom;
	printf("Ingrese la cantidad de estudiantes: ");
	scanf("%d", &cant);
	while(cant<1){
		printf("\nLa cantidad debe ser por lo menos 1, ingresela de nuevo: ");
		scanf("%d", &cant);
	}
	for (int i=0; i<cant;i++){
		printf("\nIngrese la calificación del alumno %d :", i+1);
		scanf("%d", &calif);
		while (calif<0||calif>100){
			printf("\nLas calificaciones solo pueden ir del 0 al 100, ingresela de nuevo: ");
			scanf("%d", &calif);
		}
		if (calif>max)
			max=calif;
		if (calif<min)
			min=calif;
		prom+=calif;
	}
	prom/=(float)cant;
	printf("\nEl promedio de notas es: %.2f", prom);
	printf("\nLa mayor nota fue: %d", max);
	printf("\nLa menor nota fue: %d", min);
	return 0;
}
