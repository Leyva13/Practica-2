#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
int main (void){

	int pid, estado;
	char entrada[100];
	char ce[100]="./";
	do{	
		
	printf("= ");
	scanf("%s",entrada);
	pid = fork();//regresa 0 en el hijo y el identificador del hijo en el padre

	if(pid > 0){//se ejecuta el padre porque pid tiene el identificador del hijo
		pid = wait (&estado);
	}
	else if(pid == 0){//se ejecuta el hijo porque pid es 0

		if(strcmp(entrada,"exit")!=0){
			strcat(ce,entrada);
		
			//printf("\n");
			estado = execlp(ce, "", NULL);

			if (estado==-1){
				perror ("Error 1 en execlp");
			_exit(1);
  			}
		}
	}
	else
		printf("Error: No se pudo crear el proceso\n");
	
	
	}while(strcmp(entrada,"exit"));
}