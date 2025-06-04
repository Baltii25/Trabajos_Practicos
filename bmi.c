
#include <stdio.h>

int main (int argc,char **argv)
{
float Weight;
float Height;
float Result;

	printf("Introduce tu peso en kilogramos: ");
	scanf("%f", &Weight);
	printf("Introduce tu altura en metros: ");
	scanf("%f", &Height);
	Result = Weight/(Height*Height);

	printf("Tu indice BMI es de %.2f\n\n", Result);
	printf("Tabla BMI: \n IMC	 	Nivel de peso\n");
	printf("Menos de 18,5	Bajo peso \n18,5 - 24,9	Normal \n25 - 29,9	Sobrepeso \n30 o más	Obesidad\n");
	if(Result<18.5){
		printf("Tu IMC indica bajo peso");
	}
	else{
		if(Result<25) {
			printf("Tu IMC es normal");
		}
		else{
			if(Result <30){
				printf("Tu IMC indica sobrepeso");
			}
			else{
				printf("Tu IMC indica obesidad");
			}
		}
	}
return 0;
}
