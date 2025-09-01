#include <stdio.h>
#include <math.h>
#define PI 3.1416

float calcularAreaRectangulo(float altura, float longitud){
	float area=0;
	area=altura*longitud;
	return area;
}

float calcularPerimetroRectangulo(float altura, float longitud){
	float perimetro=0;
	perimetro = altura*2 + longitud*2;
	return perimetro;
}

float calcularDiagonalRectangulo(float altura, float longitud){
	double diagonal=0;
	diagonal = sqrt((altura*altura + longitud*longitud));
	return diagonal;
}

float calcularAreaCirculo(float radio){ 
	float area=0;
	area = PI * radio * radio;
	return area;
}

float calcularPerimetroCirculo(float radio){
	float perimetro=0;
	perimetro = 2*PI*radio;
	return perimetro;
}
void imprimirResultados(float area, float perimetro){
	printf("\nEl área es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}

	
int main(){
	int figura;
	float altura, longitud, radio;
	printf("Ingrese la figura que desea calcular (1: Rectangulo, 2: Circulo): ");
	scanf("%d", &figura);
	switch(figura){
		case 1:
			printf("Ingrese la altura del rectangulo: ");
			scanf("%f",&altura);
			printf("Ingrese la longitud del rectangulo: ");
			scanf("%f",&longitud);
			imprimirResultados(calcularAreaRectangulo(altura, longitud), calcularPerimetroRectangulo(altura, longitud));
			break;
		case 2: 
			printf("Ingrese el radio del circulo: ");
			scanf("%f", &radio);
			imprimirResultados(calcularAreaCirculo(radio), calcularPerimetroCirculo(radio));
			break;
		default:
			printf("Valor invalido, no puede continuar");
			break;
	}
	
	return 0;
}

