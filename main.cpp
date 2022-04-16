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
void cuenta();

int main(){
    
    //FILE* arch = fopen ("Lista.txt", "a+");

    int cantidadClientes;

    Cliente cliente;

    printf("Ingrese la cantidad de personas:\n");       //preguntamos cuántos clientes tendremos que guardar    
    scanf("%d", &cantidadClientes);

    if(cantidadClientes > 1){       //realizamos condiciones para ejecutar el programa debido a la cantidad de clientes que lo utilizarán

    int cont = 1;
    
    for (int i = 1; i < cantidadClientes+1; i++) {
    
        cout<<"\nIngrese al compa numero " << cont<<"\n"; //agregamos un COUT porque no estábamos logrando imprimir bien con PRINTF y nuestro companero Marks nos ayudó con otra librería con la que trabajó anteriormente.
    
        ingresarCliente(&cliente);      //Ingresamos al cliente

        cuenta();                   //consultamos por su consumo

        cont++;
    }

    }   else if (cantidadClientes == 1){

            printf("mejor solo que mal acompañado, eso si, este programa no te va a servir de nada :c");

    }       else {

                printf("si los compas restan, entonces no deberian ser compas");

    }

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

void cuenta(){

    int hora = 0;
    int consumioMas = 1;
    int queConsumio;
    int montoPorPersona = 0;
    int porcentajePropina = 0;
    int montoFinal = 0;

    printf("Hola , que consumiste? (favor ingresar de a uno)\n");
    
    while (consumioMas == 1){
        
    printf("Ingrese el numero a la izquierda del consumible por favor\n\n");
    printf("1    Mojito\n2    Caipirinha\n3    Laguna Azul\n4    Blue Orange\n5    Daikiri\n6    Shot de Tequila\n7    Piscola\n8    Roncola\n9    Papas Bravas\n10   Pizza\n11   Completo\n\n"); 
   
    scanf("%d", &queConsumio);
   
         if (queConsumio == 1){

          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);
          
          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }

        }else if (queConsumio == 2){

          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }

        }else if (queConsumio == 3){

          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }

        }else if (queConsumio == 4){
            
          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }

        }else if (queConsumio == 5){
            
          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }
        }else if (queConsumio == 6){
            
          montoPorPersona = montoPorPersona + 5000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 3000;

          }
        }else if (queConsumio == 7){
            
          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }
        }else if (queConsumio == 8){

          montoPorPersona = montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%d", &hora);

          if(hora < 19000){

            montoPorPersona = montoPorPersona - 1500;

          }
        }else if (queConsumio == 9){
            
          montoPorPersona = montoPorPersona + 6000;
          
        }else if (queConsumio == 10){
        
          montoPorPersona = montoPorPersona + 12000;
    
        }else if (queConsumio == 11){
            
          montoPorPersona = montoPorPersona + 1500;
          
        }else{

    printf("Error al ingresar Consumible\n");

    }
    printf("\nConsumiste algo mas?\n");
    printf("ingrese el numero a la izquierda de la respuesta por favor\n");
    printf("1   Si\n2   No\n");
    scanf("%d", &consumioMas);
    }
    
    printf("De cuanto es la propina a agregar?\n%");
    scanf("%d", &porcentajePropina);
    montoFinal = ((montoPorPersona / 100) * porcentajePropina) + montoPorPersona;
    printf("Usted debe pagar %d CLP\n", montoFinal);
    printf("\n-------------------------------\n");

}
