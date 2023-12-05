#include <stdio.h>

void conjuncao(){
  int temp;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      temp = i && j;
      printf("| %d ^ %d | %d |\n", i, j, temp);
    }
  }
}

void disjuncao(){
  int temp;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      temp = i || j;
      printf("| %d v %d | %d |\n", i, j, temp);
    }
  }
}

void condicional(){
  int temp;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      temp = !i || j;
      printf("| %d -> %d | %d |\n", i, j, temp);
    }
  }
}

void bicondicional(){
  int temp;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      temp = i == j;
      printf("| %d <==> %d | %d |\n", i, j, temp);
    }
  }
}

void xor(){
  int temp;
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      temp = i ^ j;
      printf("| %d ⊕ %d | %d |\n", i, j, temp);
    }
  }
}


int main(){
  int a;
  scanf("%d", &a);
  switch(a){
    case 1:
      conjuncao();
      break;
    case 2:
      disjuncao();
      break;
    case 3:
      condicional();
      break;
    case 4:
      bicondicional();
      break;
    case 5:
      xor();
      break;
    default:
      printf("Inválido");
  }
}
