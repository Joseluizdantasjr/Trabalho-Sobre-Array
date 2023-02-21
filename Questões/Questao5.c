#include <stdlib.h>
#include <string.h>
#define SIZE 100 // Estático: Máxima
int main(void) {
char txt[SIZE]; // STRING: Nome do array (HEX)
int i = 0;// Index: i
int contador = 0;
printf("\nDigite uma mensagem para ver ela com um espaço entre cada caractere, digite FIM para encerrar o programa \n");
for(contador = 0; contador < SIZE; contador++){
printf("\nEntre com o Texto: ");
scanf("\n%[^\n]", txt);
if(strcmp(txt, "FIM") == 0){
break;
}
else{
for(i = 0; txt[i] != '\0'; i++) {
printf("%c ", txt[i]);
}
}
}
return 0;;
}
