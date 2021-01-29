
#include<string.h>
#include<stdio.h>

struct Alumno{
    char nombre[30];
    int edad;
};

struct Escuela{
    char *Alumno;
    char escuela[30];
};


int main(int argc, char const *argv[])
{
    int vector[] = {1,2,3,4,5,-3,-5,-30};
    int longitud = sizeof(vector)/sizeof(vector[0]);
    int *puntero = &vector[0];
    
    for(int i = 0; i < longitud; i++){
        printf("\nDireccion : %d = %d " ,puntero+i,*(puntero+i));
    }

    return 0;
}