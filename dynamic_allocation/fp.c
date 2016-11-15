#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
  double d = atof(argv[1]);

  double n;
  long long a; // 64b
  double b;

  for(n=1, a=0, b=0; n <= d; b+=n, n++, a++) {
    //printf("%f\n", b/a);
  }

  return 0;
}
