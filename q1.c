#include <stdio.h>

int pa(int a, int b, int c){
  int d = a && (b || c);
  return d;
}

int pb(int a, int b, int c){
  int d = (a && b) || c;
  return d;
}

int pc(int a, int b, int c){
  int d = !(a && b) || c;
  return d;
}

int pd(int a, int b, int c){
  int d = !a || (!b && c);
  return d;
}

int main(){
  int a=1, b=0, c=1;
  char prop;
  scanf(" %c", &prop);
  switch(prop){
    case 'a':
      printf("%d", pa(a, b, c));
      break;
    case 'b':
      printf("%d", pb(a, b, c));
      break;
    case 'c':
      printf("%d", pc(a, b, c));
      break;
    case 'd':
      printf("%d", pd(a, b, c));
      break;
  }
  return 0;
}
