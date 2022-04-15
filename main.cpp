#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

struct Cliente{         //creamos la estructura del cliente
    char nombre[30];
    char mail[50];
    long telefono;
};

void ingresarCliente(Cliente* a);
void guardarCliente();
void agregarCuenta();

int main(){
    
    //FILE* arch = fopen ("Lista.txt", "a+");

    int cantidadClientes;
    int hora;
    
    Cliente cliente;

    printf("Ingrese la cantidad de personas:\n");       //preguntamos cuántos clientes tendremos que guardar    
    scanf("%d", &cantidadClientes);

    if(cantidadClientes > 1){       //realizamos condiciones para ejecutar el programa debido a la cantidad de clientes que lo utilizarán

    int cont = 1;
    
    for (int i = 1; i < cantidadClientes+1; i++) {
    
        cout<<"Ingrese al compa numero " << cont<<"\n"; //agregamos un COUT porque no estábamos logrando imprimir bien con PRINTF y nuestro companero Marks nos ayudó con otra librería con la que trabajó anteriormente.
        ingresarCliente(&cliente);
        cont++;
    }

    }   else if (cantidadClientes == 1){

            printf("mejor solo que mal acompañado, eso si, este programa no te va a servir de nada :c");

    }       else {

                printf("si los compas restan, entonces no deberian ser compas");

    }

    agregarCuenta;

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

void guardarCliente(){

    FILE* arch = fopen ("ejemplo.txt", "a+");
    fprintf(arch, "%s", cliente.nombre);
    fprintf(arch, "%s", cliente.mail);
    fprintf(arch, "%s", cliente.telefono);
    fclose(arch);;

}

void agregarCuenta(){

    int consumioMas;

    printf("Hola %s, que consumiste? (favor ingresar de a uno)\n", clienteX);
    
    while (consumioMas == 1)
    {
        
    printf("ingrese el numero a la izquierda del consumible por favor\n");
    printf("1   Mojito\n2   Caipirinha\n3   Caipiroska\n4   Laguna Azul\n5  Blue Orange\n6  Shot de Tequila\n7  Piscola\n8  Piston\n9   Roncola\n10 Daikiri\n11 Papas Bravas");
    printf("cuantos de estos consumiste?");
    printf("consumiste algo mas?");
    printf("ingrese el numero a la izquierda de la respuesta por favor\n");
    printf("1   Si\n2   No\n");
    }

}
