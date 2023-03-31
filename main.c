#include <stdio.h>

int main() {
    float nota,sumanota=0, totalnota=0;
    while(nota!=-1){
        printf("Ingrese las notas del alumno, si desea salir del programa colocar un | -1 |  \n");
        scanf("%f",& nota);
        //printf("valor agregado es2 %.2f \n",nota);
        if(nota!=-1 || nota<0){
        totalnota++;
        sumanota += nota;}
    }

    printf("El promedio es: %.2f\n",sumanota/totalnota);

    return 0;
}

