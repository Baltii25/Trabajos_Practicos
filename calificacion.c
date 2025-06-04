#include <stdio.h>
int main(){
	int calificacion;
	printf("Ingrese la calificación: ");
	scanf("%d", &calificacion);
	if (calificacion>=60){
		if (calificacion>=70){
			if (calificacion>=80){
				if (calificacion >=90){
					printf("\nCalificación: A");
				}
				else {
					printf("\nCalificación: B");
				}
			}
			else {
				printf("\nCalificación: C");
			}
		}
		else {
			printf("\nCalificación: D");
		}
	}
	else {
		printf("\nCalificación: F");
	}
	return 0;
}


	
					
