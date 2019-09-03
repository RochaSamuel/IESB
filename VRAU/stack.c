#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char pilha[30];
int qtd = -1;

int isEmpyt(){
  if(qtd == -1){
    return 1;
  }else{
    return 0;
  }
}

void push(char x){
  if(qtd == 30){
    printf("Pilha Cheia");
  }else{
    qtd++;
    pilha[qtd] = x;
  }
}

char pop(){
  char aux;
  if(isEmpyt()){
    printf("Pilha Vazia");
  }else{
    aux = pilha[qtd];
    qtd--;
    return aux;
  }
}

int main(){
  char texto[100];
  char aux;
  int i;

  printf("Digite o texto: ");
  fflush(stdin);
  gets(texto);

  for(i = 0; i < strlen(texto); i++){
    if(texto[i] != ' ' && texto[i] != '.'){
      push(texto[i]);
    }
    if(texto[i] == ' ' || texto[i] == '.'){
      printf(" ");
      while(!isEmpyt()){
        aux = pop();
        printf("%c", aux);
      }
    }
  }
  return 0;
}
