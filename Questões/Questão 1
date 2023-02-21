#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define MIN 10
#define MAX 99
int main(void) {
int array[SIZE];
int index;
int index;
int quantidade = 0;
srand(time(NULL));
printf("ARRAY[%i] de inteiros aleatórios entre [10.0, 99.0]:\n", SIZE);
for(index = 0; index < SIZE; index++){
array[index] = (rand() % (MAX - MIN - 1) + MIN);
printf("ARRAY[%i]: %i; \n", index, array[index]);
if((array[index] - 30) < 10 && (array[index] - 30) > 0) {
quantidade = quantidade + 1;
}
else if((array[index] - 3) % 10 == 0){
quantidade = quantidade + 1;
}
}
printf("Número de vezes que o 3 aparece na tela = %i \n", quantidade);
return 0;
}
