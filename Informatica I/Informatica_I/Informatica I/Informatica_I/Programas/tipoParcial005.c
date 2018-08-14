# include<stdio.h>
# define N 3
main(){
	// Punto a)
	int legajos[N], asistencias[N], porcentajes[N];
	// Punto b)
	int n, i;
	do{
		printf("\nIngrese la cantidad de estudiantes: \n");
		scanf("%d", &n);
	}while(n<0 || n>N);
	// Punto c)
	int clases;
	do{
		printf("\nIngrese cantidad de clases");
		scanf("%d", &clases);
	}while(clases < 0);
	// Punto d)
	for(i = 0; i<n; i++){
		do{
			printf("\nIngrese legajo: ");
			scanf("%d",&legajos[i]);
		}while(legajos[i] < 0);
		do{
			printf("\nIngrese cantidad de asistencias: ");
			scanf("%d",&asistencias[i]);
		}while(asistencias[i] < 0 || asistencias[i] > clases);	
	}
	// Punto e)
	for(i = 0; i < n; i++){
			porcentajes[i] = (asistencias[i]*100)/clases; 
		}
	
	
	printf("\nSalimos del \'while\'");
	system("pause");
	return 0;
}
 
