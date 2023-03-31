#include <stdio.h>

int main() {
    float nota,sumanota=0, totalnota=0;
    while(nota!=-1){
        printf("Ingrese las notas del alumno, si desea salir del programa colocar un | -1 |  \n");
        scanf("%f",&nota);
        printf("nota %.2f \n",nota);
        totalnota++;
        sumanota += nota;
    }
    totalnota= totalnota -1;
    printf("El promedio es: %.2f\n",sumanota/totalnota);

    return 0;
}

