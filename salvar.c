#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  

int contaMatchs(int aposta[], int sorteados[]){

  int conta_matchs = 0;

  for(int i = 0; i < 6; i++){
      for(int j = 0; j < 6; j++){
        if(aposta[i] == sorteados[j])
        conta_matchs++;
      }
    }
  return conta_matchs;
}

int main(void) 
{   
    int conta_matchs, resposta;
    int aposta[6];
    int sorteados[6];

    srand(time(NULL));

     printf("\n");
    printf("BEM VINDO(A) A LOTERIA! BOA SORTE!\n");
     printf("\n");

    while(1){
    printf("Insira sua aposta:\n");

    for(int i = 0; i < 6; i++){
      scanf("%d", &aposta[i]);
    }

    printf("\n");
    printf("Numeros sorteados:\n");

    for(int i = 0; i < 6; i++) {
        sorteados[i] = rand() % 60 + 1;
        printf("%d ", sorteados[i]);
    }

    printf("\n");
    
    conta_matchs = contaMatchs(aposta, sorteados);

    printf("\n");
    printf("RESULTADO:\n");

    switch(conta_matchs){

      case 0 : printf("azar\n");
       break;
      case 1 : printf("azar\n");
       break;
      case 2 : printf("azar\n");  
       break;  
      case 3 : printf("terno\n"); 
       break;
      case 4 : printf("quadra\n");  
       break; 
      case 5 : printf("quina\n");
       break;  
      case 6 : printf("sena\n");
       break;
    }
      do{
      printf("Deseja tentar novamente? 1 para sim | 0 para nao\n");
       scanf("%d", &resposta);
      
    }while(resposta < 0 || resposta > 1);

    if(resposta == 1)
     continue;
    else
     break;

    }

    return 0;
}