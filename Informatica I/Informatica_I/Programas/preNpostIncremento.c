# include<stdio.h>
# define n 7
main(){
	int aux, a, j, c[n] = {3, 7, 1, 9, 5, 23, 33};
	long int m, r, o=0, i;
	for(i=0 ; i<n-1 ; i++){
        for(j=0 ; j<n-1-i ; j++){
        	if(c[j] < c[j+1]){
        		aux = c[j];
        		c[j] = c[j+1];
        		c[j+1] = aux;
			}
		}
	}
	printf("\nIngrese numero a invertir\n");
	scanf("%d", &m);
	r = m;
	while(m > 0){
		m /=10;
		a++;
	}
	printf("Invertido: ");
	for(i=0; i<a; i++){
		
		o = r % 10;
		r /= 10;
		printf("%d", o);
	}
	for(i=0 ; i<n ; i++){
		printf("\nc[%d] = %d\n", i, c[i]);
	}
	
	getch();
	return 0;
}
