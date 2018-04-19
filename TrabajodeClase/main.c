#include <stdio.h>
#include <stdlib.h>
#define T 3
float promo(int , int);
int mostrar(int[T],char[T][30],int[T],int[T],float[T]);
int BuscarLetra(char[T][30],char);
int main()
{
    int legajo[T];
    char nombre[T][30];
    int nota1[T];
    int nota2[T];
    float promedio[T];
    int i;
    char letra;
    int esta;

    for(i=0;i<3;i++)
    {
        printf("Ingrese numero de legajo\n");
        scanf("%d",&legajo[i]);
        printf("Ingrese nombre\n");
        fflush(stdin);
        gets(nombre[i]);
        printf("Ingrese nota numero 1\n");
        scanf("%d",&nota1[i]);
        printf("Ingrese nota numero 2\n");
        scanf("%d",&nota2[i]);
        promedio[i]=promo(nota1[i],nota2[i]);
    }
    /*
    mostrar(legajo,nombre,nota1,nota2,promedio);
    */

    printf("ingrese letra a buscar\n");
    fflush(stdin);
    scanf("%c",&letra);
    esta=BuscarLetra(nombre,letra);
    if(esta==1)
    {
        printf("La letra %c , esta en el nombre\n",letra);
    }
    else
    {
        printf("La entra %c, no esta en el nombre\n",letra);
    }



    return 0;
}
float promo(int nota1, int nota2)
{
    float promedio;
    promedio=(float)(nota1+nota2)/2;
    return promedio;
}
int mostrar(int legajo[T],char nombre[T][30],int nota1[T],int nota2[T],float promedio[T])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("USUARIO NUMERO %d\n",i+1);
        printf("Legajo:%d\nNombre:%s\nNota 1:%d\nNota 2:%d\nPromedio:%f\n",legajo[i],nombre[i],nota1[i],nota2[i],promedio[i]);
    }
    return 0;
}
int BuscarLetra(char nombre[T][30],char letra)
{
    int i,x;
    int siono=-1;
    for(i=0;i<3;i++)
    {
        for(x=0;x<30;x++)
        {
            if(letra==nombre[i][x])
            {
                siono=1;

            }
        }
    }
    return siono;
}
