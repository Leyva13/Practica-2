#include <stdio.h>
#include <stdlib.h>
int main(void){

    int n;
    int A=0, B=1, C=0, contador=0, i=1; 
    printf("Numero:");
    scanf("%d",&n);
		do{			
			C=A+B; 
			A=B; 
			B=C; 

			contador++;
			i++;
			
		}while(i<=n);
		printf("Termino %d:\n", contador); //Imprime el contador, No. del valor
		printf("Valor: %d\n", A);	//Imprme el valor n de fibonacci
        return 0;
}