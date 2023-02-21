#include <stdio.h>
#define SIZE 3
#define MAX 9999
#define MIN 0
int main(void) {
int matricula[SIZE];
int tempo[SIZE];
int index = 0;
int soma = 0;
float media = 0;
int matGanhador;
int tempGanhador = MIN;
int matUltimo;
int tempUltimo = MAX;
for (index = 0; index < SIZE; index++)
{
printf("Insira matricula do corredor %i: ", index + 1);
scanf("%i", &matricula[index]);
printf("Insira tempo do corredor %i: ", index + 1);
scanf("%i", &tempo[index]);
if(tempo[index] < MIN || tempo[index] > MAX)
{
printf("Erro de inserção de dados\n");
break;
}
if (tempo[index] > tempGanhador){
matGanhador = matricula[index];
}
else if (tempo[index] < tempUltimo ){
matUltimo = matricula[index];
}
}
if(tempo[index] > MIN && tempo[index] < MAX){
printf("Vencedor: %i\n", matGanhador);
printf("Último lugar: %i\n", matUltimo);
}
}
