#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100
int main(void) {
char txt[SIZE];
printf("Escreva a mensagem, para ver o número de caracteres: \n");
scanf("\n%[^\n]", &txt);
for(int i = 0; i < strlen(txt); i++)
{
char carac = txt[i];
int contador = 0;
for(int a = 0; a < strlen(txt); a++)
{
if(carac == txt[a])
{
contador++;
}
}
printf("%c: %i aaa\n", carac, contador);
}
}
