#include <stdio.h>

int mdc(int num1, int num2){
  // calcula o mdc atravésdo algoritmo de Euclides
  int resto;
  resto = num1 % num2;
  num1 = num2;
  num2 = resto;
  if(resto == 0){
    // caso tenha encontrado um número que divide os dois, retorna 0
    return num1;
  } else {
    // recursividade e volta para a própria função
    return mdc(num1, num2);
  }
}

int main(){
  int num1, num2;
  scanf(" %d %d", &num1, &num2);
  printf("%d\n", mdc(num1, num2));
  // calcula o mmc a partir do mdc,na relação: mmc = num1 * num2 / mdc
    printf("%d\n", (num1 * num2)/mdc(num1, num2));
}

/*
1. O algoritmo funciona para os casos em que num1 e num2 são números inteiros diferentes de 0, visto que, sendo um dos números 0, o mdc será 0 e a divisão por 0 não é possível, e não tem como calcular o máximo divisor comum de números fracionários.

2. Sendo o algoritmo de Euclides comprovadamente eficaz dentro de seu domínio e aplicável, o algoritmo é capaz de calcular o mdc e consequentemente o mmc de qualquer par de números inteiros diferentes de 0.
*/
