#include <stdio.h>

    int main(){

    int hora;
    int consumioMas = 1;
    int queConsumio;
    int montoPorPersona = 0;
    int porcentajePropina;
    int montoFinal;
    int esperarRespuesta;

    printf("Hola , que consumiste? (favor ingresar de a uno)\n");
    
    while (consumioMas == 1){
        
    printf("Ingrese el numero a la izquierda del consumible por favor\n\n");
    printf("1    Mojito\n2    Caipirinha\n3    Laguna Azul\n4    Blue Orange\n5    Daikiri\n6    Shot de Tequila\n7    Piscola\n8    Roncola\n9    Papas Bravas\n10   Pizza\n11   Completo\n\n"); 
   
    scanf("%i", &queConsumio);
   
         if (queConsumio == 1){

          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);
          
          if(hora < 19000){

            montoPorPersona - 1500;

          }

        }else if (queConsumio == 2){

          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 1500;

          }

        }else if (queConsumio == 3){

          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 1500;

          }

        }else if (queConsumio == 4){
            
          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 1500;

          }

        }else if (queConsumio == 5){
            
          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 1500;

          }
        }else if (queConsumio == 6){
            
          montoPorPersona + 5000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 3000;

          }
        }else if (queConsumio == 7){
            
          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 1500;

          }
        }else if (queConsumio == 8){

          montoPorPersona + 3000;
          
          printf("Favor ingrese la hora en la que pidio el consumible\n");
          scanf("%i", &hora);

          if(hora < 19000){

            montoPorPersona - 1500;

          }
        }else if (queConsumio == 9){
            
          montoPorPersona + 6000;
          
        }else if (queConsumio == 10){
        
          montoPorPersona + 12000;
    
        }else if (queConsumio == 11){
            
          montoPorPersona + 1500;
          
        }else{

    printf("Error al ingresar Consumible\n");

    }
    printf("\nConsumiste algo mas?\n");
    printf("ingrese el numero a la izquierda de la respuesta por favor\n");
    printf("1   Si\n2   No\n");
    scanf("%i", &consumioMas);
    }
    
    printf("Usted consumio %i CLP\n", &montoPorPersona);
    printf("De cuanto es la propina a agregar?\n%");
    scanf("%i", &porcentajePropina);
    montoFinal = (montoPorPersona / 100) * porcentajePropina;
    printf("Usted debe pagar %i CLP", montoFinal);
    scanf("%i", esperarRespuesta);
    return 0;

}
