#include <stdio.h>
#include <stdlib.h>

int main()
{
 int data[7];
 int i;
 for(i=0;i<7;i++)
 {
    scanf("Ingrese numeros: ",&data[i]);
 }
 intertion(data,7);

 //inser

 //print

}

void intertion(int data[],int len)
{
int i,j;
int temp;
for(i=1;i<len;i++)
    {
    temp = data[i];
    j=i-1;
    while(j=0 && temp<data[j])
        {
            data[j+1]=data[j];
            j--;
        }
    data[j+1]=temp;
    }
}
