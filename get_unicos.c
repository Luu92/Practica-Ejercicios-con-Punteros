#include<stdio.h>
#include<stdlib.h>

int *get_unicos(int *numeros,int num_elementos){

    int *lista2, *carruzel, i,k;

    lista2 = (int*)malloc(10*sizeof(int));
    int posicion_carruzel = 1;
    int agregar;

    for(k=0; k < num_elementos; k++){

        carruzel = numeros+1;
        agregar = 1;
        for (i = posicion_carruzel; i < num_elementos-1; i++)
        {
            if(*numeros == *carruzel){
                agregar = 0;
                break;
            }
            carruzel++;
        }

        if (agregar == 1)
        {
            *lista2 = *numeros;
            printf("Unico -> %d\n",*lista2);
            lista2++;
        }
        
        posicion_carruzel++;
        numeros++;
    }

    return lista2;
}



int main(int argc, char const *argv[])
{
    int *numeros,i;

    numeros = (int*)malloc(10*sizeof(int));

    *(numeros) = 1;
    *(numeros+1) = 1;
    *(numeros+2) = 3;
    *(numeros+3) = 4;
    *(numeros+4) = 5;
    *(numeros+5) = 6;
    *(numeros+6) = 7;
    *(numeros+7) = 8;
    *(numeros+8) = 9;
    *(numeros+9) = 9;
    printf("Lista de numeros [ ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ",numeros[i]);
    }
    printf("]\n");
    get_unicos(numeros,10);
    
    free(numeros);

    return 0;
}
