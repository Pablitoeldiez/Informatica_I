# include<stdio.h>
# define N 100
main(){
	int edades[N], n, i, j, aux, mayor=0, cantMayor=0;
	do{
		printf("\nIngrese cantidad de edades a ingresar\n");
		scanf("%d", &n);
	}while(n<0 || n>N);
	for(i=0; i<n; i++){
		do{
			printf("\nIngrese edad[%d]: \n", i);
			scanf("%d", &edades[i]);
		}while(edades[i]<18);
	}
	for(i=0; i<n; i++){
		printf("\nEdad[%d]: %d", i, edades[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++){
			if(edades[j] < edades[j+1]){
				aux = edades[j];
				edades[j] = edades[j+1];
				edades[j+1] = aux;
			}
		}
	}
	mayor=edades[0];
	for(i=0; i<n; i++){
		printf("\nEdad[%d]: %d", i, edades[i]);
		if(edades[i]==mayor){
			cantMayor++;
		}
	}
	printf("\nCantidad del mas mayor: %d\n", cantMayor);
	getch();
	return 0;
}
