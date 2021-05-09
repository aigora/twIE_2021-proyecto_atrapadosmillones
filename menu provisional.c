#include<stdio.h>
typedef struct
{
    char nombre[50];
    char usuario[50];
    int edad;

}jugador;

typedef struct
{
    int perdidas[10];
    int fin;
}premio;

 int drestante(int d,int r);
 int resta(int election[5],int correcta);


int main()
{
     int eleccion,dinicial;
    jugador n,e,u;
    char norma[650];
    char ciniciales[350];
    char juego[500];
    FILE *no;
    FILE *ci;
    FILE *j;

   printf("Antes de empezar a jugar, conozcamonos un poco. Cual es tu nombre y tu edad?\n");
    scanf("%s %i",n.nombre,&e.edad);
    printf("Perfecto %s, encantado de conocerte. Necesito que me indiques el nombre de usuario con el que quieres que me refiera a ti durante el juego\n",n.nombre);
    scanf("%s",u.usuario);
    printf("\n");
    printf("Vale,pues %s entonces. Ahora que nos conocemos un poco mas vamos a empezar el juego. Mucha suerte y sobre todo MUCHO DINERO\n",u.usuario);
    printf("\n\n");


   for(eleccion=0;eleccion<10000;eleccion++)
    {
    int i=0,t=0,g=0;
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
        printf("\n");

        no=fopen("normas.txt","r");
        fscanf(no,"%[^'!']",norma);
        fclose(no);

            while(norma[i]!='\0')
            {
                printf("%c",norma[i]);
                i++;
            }


        printf("\n\n\n");
        break;

    case 2:
       printf("\n");
        ci=fopen("condicioninicial.txt","r");
        fscanf(ci,"%[^'!']",ciniciales);
        fclose(ci);
        while(ciniciales[t]!='\0')
        {
            printf("%c",ciniciales[t]);
            t++;
        }
        printf("\n\n\n");
        break;

    case 3:
        printf("\n");
        j=fopen("juegos.txt", "r");
        fscanf(j,"%[^'.']",juego);
        fclose(j);
        while(juego[g]!='\0')
        {
            printf("%c",juego[g]);
            g++;
        }
        printf("\n\n\n");

        break;

    case 4:
       printf("\n");
        printf("Has decidido iniciar el juego,¡VAMOS ALLA!\n");
        printf("Antes de comenzar, elija la cantidad de dinero con la que quieres empezar. Selecciona por teclado '1' o '2'\n");
        printf("OPCION 1 --> 50k euros\n");
        printf("OPCION 2 --> 100k euros\n");
        scanf("%i",&dinicial);

        if(dinicial==1)
        {
            int reparticion1[5];
            int i,r,dres,correct1;
            printf("Perfecto, empiezas el juego con 50k euros.\n");
            printf("\n");
            printf("Comenzamos con la primera pregunta\n");
            printf("¿Cual es el rio mas largo de Europa?");
            printf("\n");
            printf("Opcion A--> Danubio\n");
            printf("Opcion B--> Volga\n");
            printf("Opcion C--> Tajo\n");
            printf("Opcion D--> Ural\n");
            printf("Opcion E--> Dnieper\n");
            printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total tienes 50 fajos)\n");
            for(i=0;i<5;i++)
                scanf("%i",&reparticion1[i]);
            correct1=reparticion1[1];
            r=resta(reparticion1,correct1);

            dres=drestante(50000,r);



                if(dres<=0)
                {
                printf("La opcion correcta es la B, el rio Volga\n");
                printf("\n");
                printf("No me lo puedo creer, te has quedado sin dinero en la primera pregunta...otra vez sera\n");
                }
                else
                {
                int reparticion2[5],dres1,correct2;
                printf("\n");
                printf("La opcion correcta es la B, el rio Volga\n");
                printf("Por lo tanto,te quedan %i euros\n",dres);
                printf("\n");

                printf("Contiunuemos con la segunda pregunta que dice asi:\n");
                printf("Como se llamaron los reinos en los que se dividio Al-Andalus en su epoca de mayor crisis?\n");
                printf("\n");
                printf("Opcion A-->Reinos celtas\n");
                printf("Opcion B-->Reinos germanos\n");
                printf("Opcion C-->Reinos de guerra\n");
                printf("Opcion D-->Reinos de taifas\n");
                printf("Opcion E-->Reinos alados\n");
                printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres/1000);
                for(i=0;i<5;i++)
                    scanf("%i",&reparticion2[i]);
                correct2=reparticion2[3];
                r=resta(reparticion2,correct2);
                dres1=drestante(dres,r);



                    if(dres1<=0)
                    {
                        printf("La opcion correcta es la D,reinos de taifas\n");
                        printf("\n");
                        printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);
                    }
                    else
                    {
                        int reparticion3[5],dres2,correct3;
                        printf("La opcion correcta es la D,reinos de taifas\n");
                        printf("Por lo tanto, te quedan %i euros\n",dres1);
                        printf("\n\n");
                        printf("Vamos con la tercera pregunta:\n");
                        printf("Que seleccion nacional ha ganado mas mundiales de futbol?\n");
                        printf("\n");
                        printf("Opcion A-->Francia\n");
                        printf("Opcion B-->Brasil\n");
                        printf("Opcion C-->Holanda\n");
                        printf("Opcion D-->Belgica\n");
                        printf("Opcion E-->Argentina\n");
                        printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres1/1000);
                        for(i=0;i<5;i++)
                            scanf("%i",&reparticion3[i]);
                        correct3=reparticion3[1];
                        r=resta(reparticion3,correct3);
                        dres2=drestante(dres1,r);


                                if(dres2<=0)
                                {
                                    printf("La opcion correcta es la B,Brasil. Eta seleccion ha ganado 5 mundiales, lo que hace que sea la que mas ha ganado\n");
                                    printf("\n");
                                    printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);
                                }
                                else
                                {

                                }



                    }


                }








        }






        else if(dinicial==2)
        {
            printf("Perfecto, empiezas el juego con 100k euros.\n");
        }



        else
        {
            printf("Lo siento, no puedes empezar a jugar con esa cantidad de dinero\n");
        }
        printf("\n");

        break;

    default:
        printf("\n");
        printf("La opcion elegida no esta en el menu\n");
        printf("\n");
        break;



    }
    }

    return 0;
}



int drestante(int d,int r)
{
    int dres;
    dres=d-(r*1000);
    return dres;
}
int resta(int election[5],int correcta)
{
    int r;
    r=election[0]+election[1]+election[2]+election[3]+election[4]-correcta;
    return r;

}

