#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funcion.c"

int main()
{
    char seguir='s';
    int opcion=0;
    float x,y,resultado=0;

    while(seguir=='s')
    {

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("elige una opcion\n");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {   case 3:
            suma(resultado);
            break;
        case 4:
            resta(resultado);
            break;
        case 5:
            division(resultado);
            break;
        case 6:
            multiplicacion(resultado);
            break;
        case 7:
            factorial(resultado);
            break;
        case 8:
            allOper(resultado);


            break;
        case 9: seguir = 'n';
        break;
        default:
            printf("opcion incorrecta \n");
        }
    printf("\nDesea seguir? s/n \n");
    seguir = getche();
    system("cls");
    }



    return 0;
}
