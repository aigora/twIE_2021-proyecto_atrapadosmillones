#include<stdio.h>
typedef struct //estructura para  identificar a la persona que usa el programa
{
    char nombre[50];
    char usuario[50];
    int edad;

}jugador;

typedef struct //estructura que se usa al final para hacer un resumen de la jugada diciendo el dinero que ha perdido en cada pregunta y el dinero ganado
{
    int perdidas[6];
    int fin;
}premio;

 int drestante(int d,int r); //funcion que calcula el dinero restante despues de cada pregunta
 int resta(int election[5],int correcta); //funcion que calcula el dinero que se tiene que restar despues de cada pregunta
 void pregunta11(),respuesta11();
 void pregunta12(),respuesta12();
 void pregunta13(),respuesta13();
 void pregunta14(),respuesta14();
 void pregunta15(),respuesta15();
 void pregunta16(),respuesta16();
 void pregunta17(),respuesta17();

 void pregunta21(),respuesta21();
 void pregunta22(),respuesta22();
 void pregunta23(),respuesta23();
 void pregunta24(),respuesta24();
 void pregunta25(),respuesta25();
 void pregunta26(),respuesta26();


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
        printf("Has decidido iniciar el juego,�VAMOS ALLA!\n");
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
            correct1 = reparticion1[1]; //respuesta correcta
            //uso de las funciones
            r = resta(reparticion1,correct1);

            dres = drestante(50000,r);



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
                correct2 = reparticion2[3];
                r = resta(reparticion2,correct2);
                dres1 = drestante(dres,r);



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
                        correct3 = reparticion3[1];
                        r = resta(reparticion3,correct3);
                        dres2 = drestante(dres1,r);


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
                                    correct4 = reparticion4[3];
                                    r = resta(reparticion4,correct4);
                                    dres3 = drestante(dres2,r);


                                            if(dres3<=0)
                                            {
                                               printf("\n");
                                                respuesta14();
                                                printf("\n\n");
                                                printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);

                                            }
                                            else
                                            {
                                                int reparticion5[5],dres4,correct5;
                                                printf("\n");
                                                respuesta14();
                                                printf("\n\n");
                                                printf("Muy bien jugado %s, llegas al ecuador del juego con %i euros",u.usuario,dres3);

                                                printf("\n\n");
                                                pregunta15();
                                                printf("\n");

                                                printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres3/1000);
                                                for(i=0;i<5;i++)
                                                    scanf("%i",&reparticion5[i]);
                                                correct5 = reparticion5[0];
                                                r = resta(reparticion5,correct5);
                                                dres4 = drestante(dres3,r);


                                                            if(dres4<=0)
                                                            {
                                                                printf("\n");
                                                                respuesta15();
                                                                printf("\n\n");
                                                                printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);

                                                            }
                                                            else
                                                            {
                                                                int reparticion6[5],dres5,correct6;
                                                                printf("\n");
                                                                respuesta15();
                                                                printf("\n\n");
                                                                printf("Y sigue el juego, continuas con %i euros",dres4);
                                                                printf("\n\n");
                                                                pregunta16();
                                                                printf("\n");
                                                                printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres4/1000);
                                                                for(i=0;i<5;i++)
                                                                    scanf("%i",&reparticion6[i]);
                                                                correct6 = reparticion6[3];
                                                                r = resta(reparticion6,correct6);
                                                                dres5 = drestante(dres4,r);


                                                                                if(dres5<=0)
                                                                                {
                                                                                    printf("\n");
                                                                                    respuesta16();
                                                                                    printf("\n\n");
                                                                                    printf("%s siento decirte que ya te has quedado sin dinero...otra vez sera\n",u.usuario);

                                                                                }
                                                                                else
                                                                                {
                                                                                    int reparticion7[5],dres6,correct7;
                                                                                    printf("\n");
                                                                                    respuesta16();
                                                                                    printf("\n\n");
                                                                                    printf("Y llegas a la ultima pregunta con %i eurazos",dres5);
                                                                                    printf("\n\n");
                                                                                    pregunta17();
                                                                                    printf("\n");

                                                                                    printf("Selecciona cuantos fajos de billetes quieres poner en cada una de ellas teniendo en cuenta que cada fajo es de 1k (en total te quedan %i fajos)\n",dres5/1000);
                                                                                    for(i=0;i<5;i++)
                                                                                        scanf("%i",&reparticion7[i]);
                                                                                    correct7 = reparticion7[1];
                                                                                    r = resta(reparticion7,correct7);
                                                                                    dres6 = drestante(dres5,r);


                                                                                                    if(dres6<=0)
                                                                                                    {
                                                                                                        printf("\n");
                                                                                                        respuesta17();
                                                                                                        printf("\n\n");
                                                                                                        printf("No me lo puedo creer %s, has dejado escapar todo el dinero en la ultima pregunta. Seguro que la proxima vez tienes mas suerte!",u.usuario);
                                                                                                    }

                                                                                                    else
                                                                                                    {
                                                                                                         premio v,p;
                                                                                                        v.perdidas[0]=50000-dres;
                                                                                                        v.perdidas[1]=dres-dres1;
                                                                                                        v.perdidas[2]=dres1-dres2;
                                                                                                        v.perdidas[3]=dres2-dres3;
                                                                                                        v.perdidas[4]=dres3-dres4;
                                                                                                        v.perdidas[5]=dres4-dres5;
                                                                                                        v.perdidas[6]=dres5-dres6;
                                                                                                        p.fin=dres6;
                                                                                                        printf("\n");
                                                                                                        printf("Y ahora si...ENHORABUENAAA, has ganado %i eurazos\n",p.fin);
                                                                                                        printf("Por haber llegado hasta aqui nos gustaria hacer contigo un recorrido de tu gran concurso:\n");
                                                                                                        printf("En la primera pregunta has perdido %i euros y en la segunda has perdido %i euros mientras que en la tercera\nte has dejado %i. En las 3 siguientes te has dejado %i  %i y %i euros respectivamente y en la ultima has perdido %i",v.perdidas[0],v.perdidas[1],v.perdidas[2],v.perdidas[3],v.perdidas[4],v.perdidas[5],v.perdidas[6]);
                                                                                                    }
                                                    }
                                                }

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
    p1=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta11.txt","r");
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
                        r1=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta11.txt","r");
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
    p2=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta12.txt","r");
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
                        r2=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta12.txt","r");
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
    p3=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta13.txt","r");
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
                            r3=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta13.txt","r");
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
    p4=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta14.txt","r");
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
                                r4=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta14.txt","r");
                                fscanf(r4,"%[^';']",respuesta4);
                                fclose(r4);
                                while(respuesta4[r14]!='\0')
                                {
                                    printf("%c",respuesta4[r14]);
                                    r14++;
                                }
                            }


void pregunta15()
{
    FILE *p5;
    int p15=0;
    char pregunta5[500];
    p5=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta15.txt","r");
    fscanf(p5,"%[^'.']",pregunta5);
    fclose(p5);
    while(pregunta5[p15]!='\0')
    {
        printf("%c",pregunta5[p15]);
        p15++;

    }

}


                            void respuesta15()
                            {
                                FILE *r5;
                                int r15=0;
                                char respuesta5[500];
                                r5=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta15.txt","r");
                                fscanf(r5,"%[^';']",respuesta5);
                                fclose(r5);
                                while(respuesta5[r15]!='\0')
                                {
                                    printf("%c",respuesta5[r15]);
                                    r15++;
                                }
                            }


void pregunta16()
{
    FILE *p6;
    int p16=0;
    char pregunta6[500];
    p6=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta16.txt","r");
    fscanf(p6,"%[^'.']",pregunta6);
    fclose(p6);
    while(pregunta6[p16]!='\0')
    {
        printf("%c",pregunta6[p16]);
        p16++;

    }

}
                           void respuesta16()
                            {
                                FILE *r6;
                                int r16=0;
                                char respuesta6[500];
                                r6=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta16.txt","r");
                                fscanf(r6,"%[^'.']",respuesta6);
                                fclose(r6);
                                while(respuesta6[r16]!='\0')
                                {
                                    printf("%c",respuesta6[r16]);
                                    r16++;
                                }
                            }


void pregunta17()
{
    FILE *p7;
    int p17=0;
    char pregunta7[500];
    p7=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta17.txt","r");
    fscanf(p7,"%[^'.']",pregunta7);
    fclose(p7);
    while(pregunta7[p17]!='\0')
    {
        printf("%c",pregunta7[p17]);
        p17++;

    }

}

                           void respuesta17()
                            {
                                FILE *r7;
                                int r17=0;
                                char respuesta7[500];
                                r7=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta17.txt","r");
                                fscanf(r7,"%[^'.']",respuesta7);
                                fclose(r7);
                                while(respuesta7[r17]!='\0')
                                {
                                    printf("%c",respuesta7[r17]);
                                    r17++;
                                }
                            }


   void pregunta24()
{
    FILE *pr4;
    int pr24=0;
    char pregunta4[500];
    pr4=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta24.txt","r");
    fscanf(pr4,"%[^'.']",pregunta4);
    fclose(pr4);
    while(pregunta4[pr24]!='\0')
    {
        printf("%c",pregunta4[pr24]);
        pr24++;

    }

}

                            void respuesta24()
                            {
                                FILE *re4;
                                int re24=0;
                                char respuesta4[500];
                                re4=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta24.txt","r");
                                fscanf(re4,"%[^'.']",respuesta4);
                                fclose(re4);
                                while(respuesta4[re24]!='\0')
                                {
                                    printf("%c",respuesta4[re24]);
                                    re24++;
                                }
                            }


  void pregunta25()
{
    FILE *pr5;
    int pr25=0;
    char pregunta5[500];
    pr5=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta25.txt","r");
    fscanf(pr5,"%[^'.']",pregunta5);
    fclose(pr5);
    while(pregunta5[pr25]!='\0')
    {
        printf("%c",pregunta5[pr25]);
        pr25++;

    }

}

                            void respuesta25()
                            {
                                FILE *re5;
                                int re25=0;
                                char respuesta5[500];
                                re5=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta25.txt","r");
                                fscanf(re5,"%[^'.']",respuesta5);
                                fclose(re5);
                                while(respuesta5[re25]!='\0')
                                {
                                    printf("%c",respuesta5[re25]);
                                    re25++;
                                }
                            }


void pregunta26()
{
    FILE *pr6;
    int pr26=0;
    char pregunta6[500];
    pr6=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta26.txt","r");
    fscanf(pr6,"%[^'.']",pregunta6);
    fclose(pr6);
    while(pregunta6[pr26]!='\0')
    {
        printf("%c",pregunta6[pr26]);
        pr26++;

    }

}

                            void respuesta26()
                            {
                                FILE *re6;
                                int re26=0;
                                char respuesta6[500];
                                re6=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta26.txt","r");
                                fscanf(re6,"%[^')']",respuesta6);
                                fclose(re6);
                                while(respuesta6[re26]!='\0')
                                {
                                    printf("%c",respuesta6[re26]);
                                    re26++;
                                }
                            }


    void pregunta27()
{
    FILE *pr7;
    int pr27=0;
    char pregunta7[500];
    pr7=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros preguntas/pregunta27.txt","r");
    fscanf(pr7,"%[^'.']",pregunta7);
    fclose(pr7);
    while(pregunta7[pr27]!='\0')
    {
        printf("%c",pregunta7[pr27]);
        pr27++;

    }

}

                           void respuesta27()
                            {
                                FILE *re7;
                                int re27=0;
                                char respuesta7[500];
                                re7=fopen("c:/Users/David/Documents/GitHub/twIE_2021-proyecto_atrapadosmillones/ficheros respuestas/respuesta27.txt","r");
                                fscanf(re7,"%[^'.']",respuesta7);
                                fclose(re7);
                                while(respuesta7[re27]!='\0')
                                {
                                    printf("%c",respuesta7[re27]);
                                    re27++;
                                }
                            }
