#include <cstdio>

extern "C" {
int printi(int val) {
   return printf("%d\n", val);
}

/* define function of void type */
void printv(int val) {
   printf("%d\n", val);
}
}
