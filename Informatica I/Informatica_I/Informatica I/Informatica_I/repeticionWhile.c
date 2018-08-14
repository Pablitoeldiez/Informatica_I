#include<stdio.h>
int main(void){
	long numero, aux = 0, contador = 1, resto, incremento = 1, otroNumero, resultado;
    printf("Ingrese el numero a invertir\n");
    scanf("%d", &numero);
    otroNumero = numero;
    while(otroNumero > 0){
        
        otroNumero /= 10;
        if(otroNumero != 0)
            incremento *= 10;
    }
    //  printf("%d\n", incremento);
    while(numero > 0){
        //printf("Modulo: %d\n", numero%10);
        //printf("Incremento: %d\n", incremento);
  
        aux += (numero%10) * incremento;
        //printf("auxiliar: %d\n", aux);
        //printf("numero: %d\n", numero);
        incremento /= 10;
        numero/=10;
        
        //printf("Aux: %d", aux);
        //printf("%d\n", numero);
    }
    
    printf("Invertido es : %d\n", aux);
    system("pause");
	return 0;
    
}
