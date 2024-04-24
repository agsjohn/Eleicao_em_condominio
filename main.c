#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define CANDI 5

main() {
  int x, codigo, vet[CANDI], maior, vencedor, empate = 0;
  for(x = 0; x < 5; x++){
    vet[x] = 0;
  }
  printf("Eleição do novo síndico\n\n");
  do{
    printf("Código - Candidato\n1 - Seu pedro\n2 - Dona Maria\n3 - Tia Daiana\n4 - Seu Antônio\n5 - Voto nulo\n");
    scanf("%i", &codigo);
    switch (codigo){
      case 1:
        vet[0]++;
      break;
      case 2:
        vet[1]++;
      break;
      case 3:
        vet[2]++;
      break;
      case 4:
        vet[3]++;
      break;
      case 5:
        vet[4]++;
      break;
      case 0:
        printf("\nFinalizando votação\n");
      break;
      default:
      printf("\nOpção inválida\n\n");
    }
  }while(codigo != 0);
  for(x = 0; x < 4; x++){
    if(x == 0){
      maior = vet[x];
      vencedor = x;
    }
    else{
      if(maior < vet[x]){
        maior = vet[x];
        vencedor = x;
      }
      if(maior == vet[x]){
        empate = 1;
      }
    }
  }
  printf("\n");
  printf("Total de votos Seu Pedro: %i\n", vet[0]);
  printf("Total de votos Dona Maria: %i\n", vet[1]);
  printf("Total de votos Tia Daiana: %i\n", vet[2]);
  printf("Total de votos Seu Antônio: %i\n", vet[3]);
  printf("Total de votos nulos: %i\n", vet[4]);
  printf("\n");
  if(empate != 1){
    switch(vencedor){
      case 0:
        printf("O vencedor da eleição é o Seu Pedro");
      break;
      case 1:
        printf("O vencedor da eleição é a Dona Maria");
      break;
      case 2:
        printf("O vencedor da eleição é a Tia Daiana");
      break;
      case 3:
        printf("O vencedor da eleição é o Seu Antônio");
      break;
    }
  }
  else{
    printf("Aconteceu um empate na votação");
  }
}