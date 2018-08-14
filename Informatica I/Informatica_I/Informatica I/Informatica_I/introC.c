#include <stdio.h>
#define UNO 1
#define ERE 'R'
#define SIETE 7
int main(void){
	/********************
	**** Ejercicio 1 ****
	******************** 
	printf("Uno\n");
	printf("Dos\n");
	printf("Tres\n");
	printf("Cuatro\n");
	printf("Cinco\n");
	*/
	
	/********************
	**** Ejercicio 2 ****
	******************** 
	printf("Uno\nDos\nTres\nCuatro\nCinco\n");
	*/
	/********************
	**** Ejercicio 3 ****
	printf("Uno\v");
	printf("Dos\v");
	printf("Tres\n");
	printf("Cuatro    ");
	printf("Cinco\n");
	*/
	/********************
	**** Ejercicio 4 ****
	******************** 
	printf("Uno\vDos\vTres\nCuatro\tCinco");
	*/
	/********************
	**** Ejercicio 5 ****
	******************** 
	printf("Bienvenido al curso %d%c%d\n",UNO, ERE, SIETE);
	*/
	/********************
	**** Ejercicio 6 ****
	******************** 
	char uno = '1', ere = 'R', siete = '7';
	printf("Bienvenido al curso %c%c%c\n", uno, ere, siete);
	*/
	/********************
	**** Ejercicio 7 ****
	******************** 
	int uno = 1, ere = 'R', siete = 7;
	printf("Bienvenido al curso %d%c%d\n", uno, ere, siete);
	*/
	/********************
	**** Ejercicio 8 ****
	******************** 
	int uno = 1, ere = 'R';
	int division;
	printf("A que division pertenece: ");
	scanf("%d", &division);
	
	printf("Hola, %d%c%d\n", uno, ere, division);
	*/
	/********************
	**** Ejercicio 9 ****
	******************** 
	int a, b, suma;
	printf("Este programa calcula la suma de 2 numeros\n");
	printf("Ingrese el primer numero\n");
	scanf("%d", &a);
	printf("\nIngrese el segundo numero\n");
	scanf("%d", &b);
	suma = a + b;
	printf("La suma es igual a  %d\n", suma);
	*/
	/*********************
	**** Ejercicio 10 ****
	**********************
	int segundos, minutos, segundosFormato;
	printf("Este programa convierte segundos en su equivalente en minutos\n");
	printf("Ingrese la cantidad de segundos\n");
	scanf("%d", &segundos);
	minutos = (int)segundos / 60;
	segundosFormato = (segundos - (minutos * 60));
	printf("%d:%d\n", minutos, segundosFormato);
	*/
	/*********************
	**** Ejercicio 11 ****
	**********************
	printf("Este programa calcula el area de un circulo\n");
	float PI = 3.1415, area, radio;
	printf("Ingrese el valor del radio\n");
	scanf("%f", &radio);
	area = PI * (radio*radio);
	printf("El valor del area es %f", area);
	*/
	/*********************
	**** Ejercicio 12 ****
	**********************
	float a, b, perimetro, area;
	printf("Este programa calcula el perimetro y el area de un rectangulo\n");
	printf("Ingrese el primer lado del rectangulo\n");
	scanf("%f", &a);
	printf("Ingrese el segundo lado del rectangulo\n");
	scanf("%f", &b);
	perimetro = 2 * (a + b);
	area = a * b;
	printf("Perimetro %f\nArea %f\n", perimetro, area);
	*/
	/*********************
	**** Ejercicio 13 ****
	**********************
	int n1, n2, n3;
	float promedio;
	printf("Este programa calcula el promedio de 3 notas obtenidas en una materia\n");
	printf("Ingrese nota 1\n");
	scanf("%d", &n1);
	printf("Ingrese nota 2\n");
	scanf("%d", &n2);
	printf("Ingrese nota 3\n");
	scanf("%d", &n3);
	promedio = (float)(n1 + n2 + n3) / 3;
	printf("Promedio: %f", promedio);
	*/
	system("pause");
	return 0;
}
