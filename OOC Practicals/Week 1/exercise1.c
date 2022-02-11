#include <stdio.h>

int main() {
   int modMarks[3] = 0;
   for (int i = 0; i < 3; i++) {
      printf("Enter module %d marks: ", i + 1);
      scanf("%d", &modMarks[i]);
   }
   return 0;
}