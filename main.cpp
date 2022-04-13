#include <stdio.h>
#include <string.h>

struct Cliente{
    char nombre[30];
    int clave;
    char mail[50];
    long telefono;
};

void ingresarCliente(Cliente* a);
Cliente crearCliente(); 

int main(){
    Cliente cliente;
    ingresarCliente(&cliente);
    printf("%s\n", cliente.nombre);
    printf("%d\n", cliente.clave);
    Cliente nuevo = crearCliente();
    printf("%s\n", nuevo.nombre);
    printf("%d\n", nuevo.clave);
    return 0;
}

void ingresarCliente(Cliente* a){
    printf("Ingrese el nombre o apodo:\n");
    scanf("%s", a->nombre);
    printf("Ingrese su email:\n");
    scanf("%s", a->mail);
    printf("Ingrese su teléfono:\n+ 56 9 ");
    scanf("%lu", &(a->telefono));
}

Cliente crearCliente(){
    Cliente a;
    printf("Ingrese su nombre:\n");
    scanf("%s", a.nombre);
    printf("Ingrese su email:\n");
    scanf("%s", a.mail);
    printf("Ingrese su teléfono:\n");
    scanf("%lu", &(a.telefono));
    return a;
}
