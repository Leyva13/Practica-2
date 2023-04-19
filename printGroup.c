#include <stdio.h>
#include <unistd.h>
int main (void){
    printf("Grupo de procesos: %5d\n", getpgrp());
    return 0;
}