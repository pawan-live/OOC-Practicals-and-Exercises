#include <stdio.h>

int main() {
   int modMarks[3] = {0};
   float stuAvg[3] = {0};
   for (int stu = 0; stu < 3; stu++) {
      int stuTotal = 0;
      printf("Student %d:\n", stu + 1);
      
      for (int i = 0; i < 3; i++) {
         printf("Enter module %d marks: ", i + 1);
         scanf("%d", &modMarks[i]);
         stuTotal += modMarks[i];
      }

      stuAvg[stu] = stuTotal/3;
      puts("");
   }
   for (int i = 0; i < 3; i++) {
      printf("Student %d average is: %0.2f\n", i+1, stuAvg[i]);
   }
   return 0;
}