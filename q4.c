#include <stdio.h>

int ePrimo(int n){
  int cont = 0;
  for(int i = 1; i<=n; i++){
    if(n%i==0){
      cont++;
    }
  }
  if(cont==2){
    return 1;
  } else {
    return 0;
  }
}

int main(){
  int n;
  scanf("%d", &n);
  if(ePrimo(n)){
    printf("É primo");
  } else {
    printf("Não é primo");
  }
}
