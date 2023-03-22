#include <stdio.h>

int main(void) {
 /*5. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos. Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz.*/

  //ENTRADA: 3 elementos
  int matriz[3][3];
  int vetor[3];
  int multi;

  //INFORMAÇÕES:
  /*informar os elementos para o vetor*/
  for(int i =0; i<3;i++){
    printf("Vetor: ");
    scanf("%d", &vetor[i]);
  }
  printf("\n");
  
  /*informar os elementos para a matriz*/
  for(int i=0;i<3; i++){
     for(int m=0; m<3; m++){
       printf("Matriz: ");
       scanf("%d", &matriz[i][m]);
      }
    }
  printf("\n");
  
  /*Mostrar os valores do vetor e da matriz*/
  printf("Valores do vetor:");
  for(int i=0; i<3;i++){
    printf("\nLinha [%d]: %d",i, vetor[i]);
  }
  printf("\n\n");
  printf("Valores da matriz:");
  for(int i=0; i<3; i++){
    for(int m=0; m<3; m++){
      printf("\nLinha [%d] X coluna [%d]: %d", i, m, matriz[i][m]);
    }
  }
  printf("\n\n");
  
  /*Multiplicação do vetor pelas linhas da matriz*/
  printf("Valor da multiplicação: ");
  for(int i=0; i<3; i++){
    for(int m=0; m<3; m++){
      multi=vetor[i]*matriz[i][m];
      printf("\nVetor[%d] X Matriz[%d]: %d", vetor[i], matriz [i][m], multi);
    }
  }
}