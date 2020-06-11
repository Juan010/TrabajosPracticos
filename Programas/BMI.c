#include <stdio.h>
int main(void)
{
	int height;
	float heightInM, weight, bmi;

	printf("Calculadora de Indice de Masa Corporal\n\n");
	printf("El objetivo de este programa es determinar\n");
	printf("su IMC para comparación con los datos provistos\n");
	printf("por <inserte nombre aqui>.\n\n");
	printf("Presione enter para continuar...\n");
	getchar();

	printf("Ingrese su altura en centimetros: ");
	scanf("%d",&height);
	heightInM = (float) height/100;

	printf("Ingrese su peso en kilogramos: ");
	scanf("%f",&weight);

	bmi = weight / (heightInM*heightInM);
	printf("\nSu Indice de Masa Corporal es de %.2f\n\n",bmi);

	printf("Puede comparar su resultado con la siguiente tabla:\n");
}
	
