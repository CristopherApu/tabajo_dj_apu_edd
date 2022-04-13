#include <stdio.h>
#include <string.h>

struct Cliente{
    char nombre[30];
    int clave;
    char mail[50];
    long telefono;
};

void ingresarCliente(Cliente* a);

int main(){
    Cliente cliente;
    ingresarCliente(&cliente);
    printf("%s\n", cliente.nombre);
    printf("%s\n", cliente.mail);
    printf("%s\n", cliente.telefono);
    return 0;
}

void ingresarCliente(Cliente* a){
    printf("Ingrese el nombre o apodo:\n");
    scanf("%s", a->nombre);
    printf("Ingrese su email:\n");
    scanf("%s", a->mail);
    printf("Ingrese su telefono:\n+ 56 9 ");
    scanf("%lu", &(a->telefono));
}
