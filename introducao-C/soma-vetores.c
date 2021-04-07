#include <stdio.h>

int main(void) {
  int vetor1[10];
  int vetor2[10];
  int vetorSoma[10];

  for(int i=0;i<10;i++){
    scanf("%d", &vetor1[i]);
  }

  for(int i=0;i<10;i++){
    scanf("%d", &vetor2[i]);
  }

  for(int i=0; i<10; i++){
    vetorSoma[i] = vetor1[i] + vetor2[i]; 
    printf("%d ", vetorSoma[i]);
    }
}