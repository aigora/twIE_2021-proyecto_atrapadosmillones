#include<stdio.h>
int main()
{
    int eleccion;
   for(eleccion=0;eleccion<10000;eleccion++)
    {
    printf("Bienvenido a ATRAPA DOS MILLONES\n");
    printf("1-->Explicacion y reglas del juego\n");
    printf("2-->Condiciones iniciales\n");
    printf("3-->Juegos relacionados\n");
    printf("4-->Empezar el juego\n");
    printf("Antes de empezar a jugar,puedes revisar aqui la dinamica del concurso\n");
    scanf("%i",&eleccion);

    switch(eleccion)
    {
    case 1:
        printf("explicacion...\n");
        break;
    case 2:
        printf("condiciones...\n");
        break;
    case 3:
        printf("juegos...\n");
        break;
    case 4:
        printf("Has decidido iniciar el juego,¡VAMOS ALLA!\n");
        break;
    default:
        printf("La opcion elegida no esta en el menu\n");
        break;



    }
    }

    return 0;
}
