#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int maxAnd = 0, maxOr = 0, maxEor = 0;

  for(int a = 1; a <= n; a++){
      for(int b = a+1; b <= n; b++){
          int myAnd = a & b;
          int myOr = a | b;
          int myEor = a ^ b;

          if(myAnd > maxAnd && myAnd < k){
              maxAnd = myAnd;
          }
          if(myOr > maxOr && myOr < k){
              maxOr = myOr;
          }
          if(myEor > maxEor && myEor < k){
              maxEor = myEor;
          }
      }
  }
  printf("%d\n", maxAnd);
  printf("%d\n", maxOr);
  printf("%d\n", maxEor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
