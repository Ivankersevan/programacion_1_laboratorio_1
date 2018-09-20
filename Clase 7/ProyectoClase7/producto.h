#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

typedef struct
{
    char nombre[32];
    char descripcion[128];
    float precio;
    int isEmpty;
}Producto;

void prod_inicializar(Producto* pBuffer,int len);
void prod_alta(Producto* pBuffer,int len,int posicion);

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);

int esNumerico(char str[]) ;
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);



#endif // PRODUCTO_H_INCLUDED
