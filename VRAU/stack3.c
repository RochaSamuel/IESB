#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char pilha[100];
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

void pop(){
  if(isEmpyt()){
    return;
  }else{
    qtd--;
  }
}

int main(){
  char express[100];
  char aux;
  int i;

  printf("Digite a expressão: ");
  fflush(stdin);
  gets(express);

  for(i = 0; i < strlen(express); i++){
    if(express[i] == '('){
      push(express[i]);
    }
    if(express[i] == ')'){
      pop();
    }
  }
  if(isEmpyt()){
    printf("\nA expressao eh valida");
  }else{
    printf("\nA expressao nao eh valida");
  }

  return 0;
}
