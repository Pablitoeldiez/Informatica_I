#include<stdio.h>
int main(void){
    /*********************
    **** Ejercicio 1 ****
    **********************
    int nota, notaMinima ;
    printf ("Ingrese nota minima para aprobar\n");
    scanf ("%d", &notaMinima );
    printf ("Ingrese nota del alumno\n");
    scanf ("%d", &nota );
    if( nota >= notaMinima )
        printf ("Aprobado\n");
    if( nota < notaMinima )
        printf ("Desaprobado\n") ;
    */
    /*********************
    **** Ejercicio 2 ****
    **********************
    int nota, notaMinima ;
    printf ("Ingrese nota minima para aprobar\n");
    scanf ("%d", &notaMinima );
    printf ("Ingrese nota del alumno\n");
    scanf ("%d", &nota );
    if( nota >= notaMinima )
        printf ("Aprobado\nFelicitaciones!\n");
    if( nota < notaMinima )
        printf ("Desaprobado\nDebe recursar\n") ;
    */
    /*********************
    **** Ejercicio 3 ****
    **********************
    int a, b;
    printf("Este programa determina el mayor de 2 numeros.\n");
    printf("Ingrese el primer numero.\n");
    scanf("%d", &a);
    printf("Ingrese el segundo numero.\n");
    scanf("%d", &b);
    if(a == b){
    	printf("El valor %d es igual a %d\n", a, b);
	}
	else {
		if(a > b){
        printf("El valor %d mayor que %d.\n", a, b);
    	}
    	else {
        printf("El valor %d mayor que %d.\n", b, a);
    	}
	}*/
	/*********************
    **** Ejercicio 4 ****
    **********************
    printf("Este programa determina el estado(aprobado, desaprobado o promocionado)\nde un estudiante por su calificacion.\n");
    int nota;
    printf("\nIngrese la nota del estudiante.\n");
    scanf("%d", &nota);
	if(nota < 6){
	printf("Estudiante DESAPROBADO.\n");
	}
	else{
		if(nota >= 8){
			printf("Estudiante APROBRADO: PROMOCIONADO.\n");
		}
		else{
			printf("Estudiante APROBADO: REGULAR.\n");
		}
	}*/
	/*********************
    **** Ejercicio 5 *****
    **********************
	printf("Este programa determina el mayor de 3 numeros.\n");
	int uno, dos, tres, mayor, igual = 0;
	printf("Ingrese el 1%c numero.\n",167);
	scanf("%d", &uno);
	printf("Ingrese el 2%c numero.\n",167);
	scanf("%d", &dos);
	printf("Ingrese el 3%c numero.\n",167);
	scanf("%d", &tres);
	if(uno > dos){
		mayor = uno;
	} 
	else {
		if(uno < dos){
			mayor = dos;
		}
		else {
			mayor = dos;
		}
	}
	if(mayor > tres){
		printf("%d es el numero mas grande de los 3.\n", mayor);
	}
	else{
		printf("%d es el numero mayor.\n", tres);		
	}*/
	
	
    system("pause");
    return 0;
}
