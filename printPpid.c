#include <stdio.h>
#include <unistd.h>
int main (void){
    printf("Proceso padre: %5d\n", getppid());
}