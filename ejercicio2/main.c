#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char minLetra;
    char maxLetra;
    char seguir ='s';
    int numero;
    int contPares = 0;
    int contImpares = 0;
    int contPositivos=0;
    int contCeros=0;
    int acumPositivos = 0;
    int acumNegativos = 0;
    int minNumero = 0;
    int maxNumero = 0;
    int flag=0;
    float promPositivos;


    do{
        printf("\nIngrese un numero entre -100 y 100: ");
        fflush(stdin);
        scanf("%d", &numero);

        while(numero<-100 || numero>100){
            printf("Error. Ingrese un numero entre -100 y 100:");
            scanf("%d", &numero);
        }

        printf("Ingrese una letra: ");
        fflush(stdin);
        scanf("%c", &letra);






        if(numero%2 == 0){
            contPares++;
        }
        else if (numero%2 != 0){
            contImpares++;
        }

        if(numero == 0){
            contCeros++;
        }

        if(numero>=0){
            acumPositivos= numero + acumPositivos;
            contPositivos++;
        }
        else{
            acumNegativos= numero + acumNegativos;
        }

        if(numero < minNumero || flag==0){
            minNumero=numero;
            minLetra=letra;
        }

        if(numero > maxNumero || flag==0){
            maxNumero=numero;
            maxLetra=letra;
            flag = 1;
        }
        printf("Desea seguir ingresando numeros? s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);



    }while(seguir == 's');

    promPositivos=(float) acumPositivos/contPositivos;

    printf("La cantidad de numeros pares es: %d \n", contPares);
    printf("La cantidad de numeros impares es: %d \n", contImpares);
    printf("La cantidad de ceros es: %d\n ", contCeros);
    printf("El promdedio de los postivos es: %.2f \n", promPositivos);
    printf("El numero minimo y la letra del minimo son:%d %c \n", minNumero, minLetra);
    printf("El numero maximo y la letra del maximo son:%d %c \n",maxNumero,maxLetra);
























    return 0;
}
