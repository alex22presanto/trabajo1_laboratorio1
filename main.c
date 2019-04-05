#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int op1,op2,opcion;
    int sum,rest,multi,divi,fac1,fac2;
    do
    {
        opcion=menu();
        switch(opcion){
        case 1:
            printf("ingrese primer operador: ");
            scanf("%d",&op1);
            break;
        case 2:
            printf("ingrese segundo operador: ");
            scanf("%d",&op2);
            break;
        case 3:
            sum=suma(op1,op2);
            rest=resta(op1,op2);
            multi=multiplicacion(op1,op2);
            divi=divicion(op1,op2);
            fac1=factorial(op1);
            fac2=factorial(op2);
            break;
        case 4:
            printf("El resultado de la suma de %d + %d es: %d \n",op1,op2,sum);
            printf("El resultado de la resta de %d - %d es: %d \n",op1,op2,rest);
            printf("El resultado de la muliplicacion de %d * %d es: %d \n",op1,op2,multi);
            if(op2 != 0)
            {
                printf("El resultado de la divicion de %d / %d es: %d \n",op1,op2,divi);
            }else
            {
                printf("No se puede dividir por 0 \n");
            }
            printf("El resultado del factorial del primer operador (%d) es: %d \n",op1,fac1);
            printf("El resultado del factorial del segundo operador (%d) es: %d \n\n",op2,fac2);
        }
    }while(opcion != 5);
    return 0;
}
