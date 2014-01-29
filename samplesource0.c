#include <stdio.h>
#define NUM 10

main(){
  int a[NUM];
  int i;

  for(i = 0; i < NUM; i++){
    a[i] = i*i;
    printf("%d^2 = %d\n", i, a[i]);
  }
}

