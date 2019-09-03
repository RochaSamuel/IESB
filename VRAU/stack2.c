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

int palindromo(char word[]){
  char aux;
  int i;
  for(i = 0; i < strlen(word); i++){
    while(!isEmpyt()){
      aux = pop();
      if(aux != word[i]){
        return 1;
      }else{
        return 0;
      }
    }
  }
}

int main(){
  char word[30];
  int i;

  printf("Digite uma palavra: ");
  fflush(stdin);
  gets(word);

  for(i = 0; i < strlen(word); i++){
    if(word[i] != '\0'){
      push(word[i]);
    }
  }

  if(palindromo(word)){
    printf("Nao eh palindromo");
  }else{
    printf("Eh palindromo");
  }
  return 0;
}
