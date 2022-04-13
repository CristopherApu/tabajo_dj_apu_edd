#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct Cliente{
    int clave;
    char nombre[30];
    char mail[50];
    long telefono;
};

void ingresarCliente(Cliente* a);

int main(){
    
    FILE * arch = fopen (Lista.txt, a+);

    int cantidadClientes;
    
    Cliente cliente;

    printf("Ingrese la cantidad de personas:\n");
    scanf("%d", &cantidadClientes);

    if(cantidadClientes > 1){

    int cont = 1;
    
    for (int i = 1; i < cantidadClientes+1; i++) {
    
        cout<<"Ingrese al compa numero " << cont<<"\n";
        ingresarCliente(&cliente);
        cont++;
    }

    }   else if (cantidadClientes == 1){

            printf("mejor solo que mal acompañado, eso si, este programa no te va a servir de nada :'c");

    }       else {

                printf("si los compas restan, entonces no deberian ser compas");

    }

    printf("%s\n", cliente.nombre);
    fclose(arch);
    return 0;
}

void ingresarCliente(Cliente* a){
    printf("Nombre o apodo:\n");
    scanf("%s", a->nombre);
    printf("Direccion de correo electronico:\n");
    scanf("%s", a->mail);
    printf("Numero de celular:\n+ 56 9 ");
    scanf("%lu", &(a->telefono));
    printf("--------------------------------\n");
}
