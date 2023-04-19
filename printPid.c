#include <stdio.h>
#include <unistd.h>
int main (void){
    printf("Proceso: %5d\n", getpid());
}