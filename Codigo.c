#include <stdio.h>
int main () {
    int vetor[10];
    int i;
    int maior;

    printf("Irei pedir 10 numeros, me de apenas numeros inteiros.\n");
    for(i=0;i<10;i++) {
        printf("Me de o %d Numero\n",i+1);
        scanf("%d", &vetor[i]);
    }
    maior = vetor[0];
    for(i=1;i<10;i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    printf("Esse é o maior numero do vetor: %d", maior);
}