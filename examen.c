#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Cuenta{
    int numero;
    double balance;
};


struct Cliente{
    char *nombre;
    struct Cuenta *cuenta;
};

struct Cliente *inicializar(char *nombre,int numero, double balance){
        struct Cliente *clte;

        clte = (struct Cliente*)malloc(sizeof(struct Cliente));
        clte->cuenta =(struct Cuenta*)malloc(sizeof(struct Cuenta));
        clte->nombre = (char *)malloc(80*sizeof(char));

        strcpy(clte->nombre,nombre);
        clte->cuenta->numero = numero;
        clte->cuenta->balance = balance;

        return clte;
};

void imprimir(struct Cliente *clte){
    printf("\nNombre del cliente: %s",clte->nombre);
    printf("\nNumero de Cuenta: %d",clte->cuenta->numero);
    printf("\nBalance de Cuenta: $%0.2f M/N",clte->cuenta->balance);
    
}

void liberar (struct Cliente *clte){
    free(clte);
}

int main(int argc, char const *argv[])
{
    struct Cliente *clte;
    clte = inicializar("Luis ALberto",12544,182547.21) ;
    imprimir(clte);
    liberar(clte);
    //imprimir(clte);
    return 0;
}
