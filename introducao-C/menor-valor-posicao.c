#include <stdio.h>

int main(void) {
  int tamanhoArray;
  int menorValor;
  int posicaoValor;
  

  
  scanf("%d", &tamanhoArray);

  int arrayNum[tamanhoArray];
   for(int i = 0; i<tamanhoArray; i++){
    scanf("%d", &arrayNum[i]);
  }

  menorValor = arrayNum[0];
  posicaoValor = 0;
  for(int i = 0; i<tamanhoArray; i++){
    if(menorValor > arrayNum[i]){
      menorValor = arrayNum[i];
      posicaoValor = i;
    }
  }

  printf("Menor valor: %d\n", menorValor);
  printf("Posicao: %d", posicaoValor);
  return 0;

}