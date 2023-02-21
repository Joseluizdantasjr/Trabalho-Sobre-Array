#include <stdio.h>
#define SIZE 3
int main(void) {
int matricula[SIZE];
int tempo[SIZE];
int index = 0;
int soma = 0;
float media = 0;
for (index = 0; index < SIZE; index++){
printf("Insira matricula do corredor %i: ", index + 1);
scanf("%i", &matricula[index]);
printf("Insira tempo do corredor %i: ", index + 1);
scanf("%i", &tempo[index]);
soma = soma + tempo[index];
media = soma / (index + 1);
}
printf("\nAtletas abaixo da média: \n");
for (index = 0; index < SIZE; index++){
if (tempo[index] < media){
printf("Atleta da matrícula %i; \n", matricula[index]);
}
}
}
