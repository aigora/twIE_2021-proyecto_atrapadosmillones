#include<stdio.h>
typedef struct //estructura para  identificar a la persona que usa el programa
{
    char nombre[50];
    char usuario[50];
    int edad;

}jugador;

typedef struct //estructura que se usa al final para hacer un resumen de la jugada diciendo el dinero que ha perdido en cada pregunta y el dinero ganado
{
    int perdidas[10];
    int fin;
}premio;

 int drestante(int d,int r); //funcion que calcula el dinero restante despues de cada pregunta
 int resta(int election[5],int correcta); //funcion que calcula el dinero que se tiene que restar despues de cada pregunta
 void pregunta11(),respuesta11();
 void pregunta12(),respuesta12();
 void pregunta13(),respuesta13();
 void pregunta14(),respuesta14();


int main()
{
     int eleccion,dinicial;
    jugador n,e,u;
    //cadenas de caracteres para poder imprimir en pantalla los ficheros
    char norma[650];
    char ciniciales[350];
    char juego[500];
    //punteros de ficheros
    FILE *no;
    FILE *ci;
    FILE *j;
    //uso de la estructura "jugador"
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
    case 1: //lee e imprime en pantalla el fichero que explica las normas
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

    case 2: //lee e imprime en pantalla el fichero que explica las condiciones iniciales
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

    case 3: //lee e imprime en pantalla el fichero con la lista de juegos
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

        if(dinicial==1) //si elige la primera opcion (50k)
        {
            int reparticion1[5];
            int i,r,dres,correct1;
            printf("Perfecto, empiezas el juego con 50k euros.\n");
            printf("\n");
            pregunta11();
            printf("\n");

            for(i=0;i<5;i++)
                scanf("%i",&reparticion1[i]); //el usuario introduce en cada componente del vector la cantidad de dinero que quiere introducir en cada opcion
            correct1=reparticion1[1]; //respuesta correcta
            //uso de las funciones
            r=resta(reparticion1,correct1);

            dres=drestante(50000,r);



                if(dres<=0) //si el dinero que queda es 0 o menor
                {
                    printf("\n");
                    respuesta11();
                    printf("\n");
                    printf("No me lo puedo creer, te has quedado sin dinero en la primera pregunta...otra vez sera\n");
                }
                else //si el dinero restante es mayor que 0
                {
                int reparticion2[5],dres1,correct2;
                printf("\n");
                respuesta11();
                printf("\n\n");

                printf("Por lo tanto,te quedan %i euros\n",dres);
                printf("\n");
                pregunta12();
                printf("\n");

                printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres/1000);
                for(i=0;i<5;i++)
                    scanf("%i",&reparticion2[i]);
                correct2=reparticion2[3];
                r=resta(reparticion2,correct2);
                dres1=drestante(dres,r);



                    if(dres1<=0)
                    {
                        printf("\n");
                        respuesta12();
                        printf("\n\n");
                        printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);
                    }
                    else
                    {
                        int reparticion3[5],dres2,correct3;
                         printf("\n");
                        respuesta12();
                        printf("\n\n");

                        printf("Por lo tanto, te quedan %i euros\n",dres1);
                        printf("\n\n");
                        pregunta13();
                        printf("\n");

                        printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres1/1000);
                        for(i=0;i<5;i++)
                            scanf("%i",&reparticion3[i]);
                        correct3=reparticion3[1];
                        r=resta(reparticion3,correct3);
                        dres2=drestante(dres1,r);


                                if(dres2<=0)
                                {
                                    printf("\n");
                                    respuesta13;
                                    printf("\n\n");
                                    printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);
                                }
                                else
                                {
                                   int reparticion4[5],dres3,correct4;
                                    printf("\n");
                                    respuesta13();
                                    printf("\n\n");

                                    printf("Despues de esta pregunta te quedan...%i euros",dres2);
                                    printf("\n\n");
                                    pregunta14();
                                    printf("\n");

                                    printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres2/1000);
                                    for(i=0;i<5;i++)
                                        scanf("%i",&reparticion4[i]);
                                    correct4=reparticion4[3];
                                    r=resta(reparticion4,correct4);
                                    dres3=drestante(dres2,r);


                                            if(dres3<=0)
                                            {
                                               printf("\n");
                                                respuesta14();
                                                printf("\n\n");
                                                printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);

                                            }
                                            else
                                            {
                                                printf("\n");
                                                respuesta14();
                                                printf("\n\n");
                                                printf("Muy bien jugado, llegas al ecuador del juego con %i euros",dres3);
                                            }
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


void pregunta11()
{
    FILE *p1;
    int p11=0;
    char pregunta1[500];
    p1=fopen("pregunta11.txt","r");
    fscanf(p1,"%[^'.']",pregunta1);
    fclose(p1);
    while(pregunta1[p11]!='\0')
    {
        printf("%c",pregunta1[p11]);
        p11++;
    }
}


                    void respuesta11()
                    {
                        FILE *r1;
                        int r11=0;
                        char respuesta1[700];
                        r1=fopen("respuesta11.txt","r");
                        fscanf(r1,"%[^'!']",respuesta1);
                        fclose(r1);
                        while(respuesta1[r11]!='\0')
                        {
                            printf("%c",respuesta1[r11]);
                            r11++;
                        }
                    }


void pregunta12()
{
    FILE *p2;
    int p12=0;
    char pregunta2[500];
    p2=fopen("pregunta12.txt","r");
    fscanf(p2,"%[^'.']",pregunta2);
    fclose(p2);
    while(pregunta2[p12]!='\0')
    {
        printf("%c",pregunta2[p12]);
        p12++;

    }

}


                    void respuesta12()
                    {
                        FILE *r2;
                        int r12=0;
                        char respuesta2[500];
                        r2=fopen("respuesta12.txt","r");
                        fscanf(r2,"%[^';']",respuesta2);
                        fclose(r2);
                        while(respuesta2[r12]!='\0')
                        {
                            printf("%c",respuesta2[r12]);
                            r12++;
                        }

                    }


void pregunta13()
{
    FILE *p3;
    int p13=0;
    char pregunta3[500];
    p3=fopen("pregunta13.txt","r");
    fscanf(p3,"%[^'.']",pregunta3);
    fclose(p3);
    while(pregunta3[p13]!='\0')
    {
        printf("%c",pregunta3[p13]);
        p13++;

    }
}


                        void respuesta13()
                        {
                            FILE *r3;
                            int r13=0;
                            char respuesta3[500];
                            r3=fopen("respuesta13.txt","r");
                            fscanf(r3,"%[^';']",respuesta3);
                            fclose(r3);
                            while(respuesta3[r13]!='\0')
                            {
                                printf("%c",respuesta3[r13]);
                                r13++;
                            }
                        }


void pregunta14()
{
    FILE *p4;
    int p14=0;
    char pregunta4[500];
    p4=fopen("pregunta14.txt","r");
    fscanf(p4,"%[^'.']",pregunta4);
    fclose(p4);
    while(pregunta4[p14]!='\0')
    {
        printf("%c",pregunta4[p14]);
        p14++;

    }

}


                            void respuesta14()
                            {
                                FILE *r4;
                                int r14=0;
                                char respuesta4[500];
                                r4=fopen("respuesta14.txt","r");
                                fscanf(r4,"%[^';']",respuesta4);
                                fclose(r4);
                                while(respuesta4[r14]!='\0')
                                {
                                    printf("%c",respuesta4[r14]);
                                    r14++;
                                }
                            }


