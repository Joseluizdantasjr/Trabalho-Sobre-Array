#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
int main(void) {
int A[SIZE];
int B[SIZE];
int C[SIZE];
int index = 0;
srand(time(NULL));
for(index = 0; index < SIZE; index++){
A[index] = rand() % SIZE;
B[index] = rand() % SIZE;
C[index] = 3 * A[index] - B[index];
printf("Vetor A%i = %i, Vetor B%i = %i, Vetor C%i = %i\n", index, A[index], index, B[index], index, C[index]);
}
}
