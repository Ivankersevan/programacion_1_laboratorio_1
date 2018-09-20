#include <stdio.h>
#include <stdlib.h>
#include "producto.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void prod_inicializar(Producto* pBuffer,int len)
{
    int i;

    for(i=0;i<len;i++)
    {
        pBuffer[i].isEmpty=1;

    }
}

void prod_alta(Producto* pBuffer,int len,int posicion)
{
    char nombre[32];
    char descripcion[128];
    float precio;
    int isEmpty;
    printf("Ingrese nombre");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Ingrese descripcion");
    fgets(descripcion,sizeof(descripcion),stdin);
    precio=getFloat("Ingrese precio: ");

    strncpy((*nombre),(fgets(nombre,sizeof(nombre),stdin)),32);
    strncpy((*descripcion),(fgets(descripcion,sizeof(descripcion),stdin)),128);


}



float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}


int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}



char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&auxiliar);
    return auxiliar;
}

char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}



int esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           return 0;
       i++;
   }
   return 1;
}

int esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           return 0;
       i++;
   }
   return 1;
}


int esAlfaNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
           return 0;
       i++;
   }
   return 1;
}



int esTelefono(char str[])
{
   int i=0;
   int contadorGuiones=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
           return 0;
       if(str[i] == '-')
            contadorGuiones++;
       i++;
   }
   if(contadorGuiones==1)
        return 1;

    return 0;
}

