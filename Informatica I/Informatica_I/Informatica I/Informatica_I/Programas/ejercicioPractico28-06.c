#include <stdio.h>

#define N 150


int main(void)
{
  float temp[N];                /* arreglo para las temperaturas */
  int i;                        /* contador para los for */
  int cantTemp;                 /* cantidad de temperaturas a ingresar */
  int contadorTemp50 = 0;       /* contador de temperaturas mayores o iguales a 50 */ 
  int contadorTemp70 = 0;       /* contador de temperaturas mayores o iguales a 70 */
  int maxTemp = 0;              /* variables para la máxima temperatura */
  int minTemp = 0;              /* variables para la mínima temperatura */
  float tempProm = 0;           /* variable para la temperatura promedio */


/* ingresar la cantidad de temperaturas en un rango de 1 a 150*/
  do {  
    printf("Ingrese la cantidad de temperaturas (1 - 150): ");
    scanf("%d", &cantTemp);
  } while ( cantTemp > 150 || cantTemp <= 0 );

  /* ingresar las temperaturas en un rango de 1 a 100 */
  for (i = 0; i < cantTemp; i++) 
  {
    do {
      printf("Ingrese la temperatura[%d]: ", i);
      scanf("%f", &temp[i]);
    } while ( temp[i] > 100 || temp[i] <= 0 );  
  
  }

  /* contar temp >= 50 y temp >= 70 */
  for (i = 0; i < cantTemp; i++ ) 
  {
      if ( temp[i] >= 50 )
      {
        contadorTemp50++;
      }

      if ( temp[i] >= 70 )
      {
        contadorTemp70++;
      }
  }

  /* imprimir las temperaturas en el rango >=50 y >= 70 */
  printf("La cantidad de temperaturas mayores o iguales a 50 es: %d\n", contadorTemp50);
  printf("La cantidad de temperaturas mayores o iguales a 70 es: %d\n", contadorTemp70);

  /* buscar las temp máxima y mínima */
  maxTemp = temp[0];
  minTemp = temp[0];
  for ( i = 0; i < cantTemp; i++ ) 
  {
    if ( temp[i] > maxTemp ) 
    {
      maxTemp = temp[i];   
    }
   if ( temp[i] < minTemp ) 
    {
      minTemp = temp[i];   
    }
  }

  /* imprimir la temperatura máxima y mínima */
  printf("La temperatura máxima es: %d\n", maxTemp);
  printf("La temperatura mínima es: %d\n", minTemp);

  /* calcular el promedio de las temperaturas ingresadas */
  for ( i = 0; i < cantTemp; i++ ) 
  {
    tempProm += temp[i];
  }
    tempProm /= cantTemp;

  /* imprimir la temperatura promedio */
  printf("La temperatura promedio es: %.1f\n", tempProm);

  /* imprimir el arreglo */
  for ( i = 0; i < cantTemp; i++ ) 
  {
    printf("La temperatura[%d] es:  %.1f\n", i, temp[i]);
  }

  return 0;
}

