# include<stdio.h>
# define N 100
main(){
	int legajo[N], notas[N], i=0, j, cant=0, prom=0, aprob=0, desaprob=0;
	do{
		printf("\nIngrese legajo[%d]", i);
		scanf("%d", &legajo[i]);
		if(legajo[i]!=0){
			do{
				printf("\nIngrese nota: ");
				scanf("%d", &notas[i]);
				
			}while(notas[i]<1 || notas[i]>10);
			i++;
			cant++;
		}
		
	}while(legajo[i]!=0);
	for(j=0; j<i; j++){
		printf("\nLegajo[%d]: %d - Nota: %d\n", j, legajo[j], notas[j]);
		if(notas[j] >= 6)
			aprob++;
		if(notas[j]<6)
			desaprob++;
		if(notas[j]>=8)
			prom++;
	}
	printf("\nPromocionados: %d - Aprobados: %d - Desaprobados: %d", prom, aprob, desaprob);
	getch();
	return 0;
}
