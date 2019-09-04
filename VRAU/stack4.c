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
    printf("Pilha Vazia");
  }else{
    qtd--;
  }
}

int main(){
  char linha[100];
  char aux;
  int i, cont = 0;

  printf("Digite a linha: ");
  fflush(stdin);
  gets(linha);

  for(i = 0; i < strlen(linha); i++){
    if(linha[i] != '\0'){
      push(linha[i]);
    }
    if(linha[i] == '>'){
      if(linha[i-1] == '<'){
        while(!isEmpyt()){
          pop();
        }
        cont++;
      }
    }
  }

  printf("%d", cont);

}
