# include<stdio.h>
# define N 100
main(){
	// Punto 1)
	int n, temp[N], i, sobre90=0, bajo10=0, acu=0;
	float prom;
	do{
		printf("\nIngrese la cantidad de valores a cargar.\n");
		scanf("%d", &n);
	}while(n<0 || n>N);
	for(i = 0; i<n; i++){
		do{
			printf("\nIngrese valor de temperatura: ");
			scanf("%d", &temp[i]);
			acu += temp[i];
		}while(temp[i] < 0 || temp[i]>100);
	}
	for(i = 0; i<n; i++){
		printf("\n%d\n", temp[i]);
		if(temp[i]>90){
			sobre90++;
		}
		if(temp[i]<10){
			bajo10++;
		}
	}
	prom = (float)acu/n;
	printf("\nMayores a 90: %d\nMenores a 10: %d\nPromedio: %f\n", sobre90, bajo10, prom);
	getch();
	return 0;
}
