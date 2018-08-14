#include<stdio.h>
#define N 8

int main(){
    int  i, j, n, legajos[N]={0}, asistencias[N]={0}, clases;
    float porcentaje[N]={0}, auxL,auxP, auxA;
    
    do{
        printf("Ingrese la cantidad de estudiantes.\n");
        scanf("%d", &n);
        if(n<0 || n>N)
            printf("Ingrese un valor valido\n");
    }while(n<0 || n>N);
    do{
        printf("Ingrese la cantidad de clases dictadas.\n");
        scanf("%d", &clases);
        if(n<0 || n>N)
            printf("Ingrese un valor valido\n");
    }while(n<0);
    for(i = 0; i < n; i++){
        do{
            printf("Ingrese el legajo del alumno_%d\n", i);
            scanf("%d", &legajos[i]);
            if(legajos[i] < 0)
                printf("Ingrese legajo valido.\n");
        }while(legajos[i] < 0);
        do{
            printf("Ingrese la cantidad de asistencias del alumno_%d\n", i);
            scanf("%d", &asistencias[i]);
            if(asistencias[i]<0 || asistencias[i]>clases)
                printf("Ingrese un numero valido de asistencias.\n");
            
        }while(asistencias[i]<0 || asistencias[i]>clases);
        porcentaje[i] = (float)(asistencias[i]*100) / clases;
    }
    for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<n-1-i ; j++){
            if(legajos[j]>legajos[j+1]){
                auxL = legajos[j];
                legajos[j] = legajos[j+1];
                legajos[j+1] = auxL;
                auxP = porcentaje[j];
                porcentaje[j] = porcentaje[j+1];
                porcentaje[j+1] = auxP;
                auxA = asistencias[j];
                asistencias[j] = asistencias[j+1];
                asistencias[j+1] = auxA;
            }
        }
    }
    for(i=0 ; i<n ; i++){
        printf("Legajo: %d Porcentaje: %.2f Asistencias: %d ",  legajos[i], porcentaje[i], asistencias[i]);
        if(porcentaje[i] >= 75)
            printf("Regular\n");
        else
            printf("Libre\n");
        
    }
    
getch();
return 0;
}
