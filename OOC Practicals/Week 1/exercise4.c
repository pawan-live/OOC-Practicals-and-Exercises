#include <stdio.h>
#define num 2

float findCA_1(int);
float findCA_2(int); 

float marksTable[5][5]; //[studentNo, mark1, mark2, ca1, ca2]

int main() {
    for (int i = 0; i < num; i++) {
        printf("Student %d:\n", i+1);
        for (int j = 0; j < 2; j++) {
            printf("Enter assignment %d marks", j+1);
            scanf("%d", &marksTable[i][j]);
        }
        marksTable[i][3] = findCA_1(marksTable[i][1]);
        marksTable[i][4] = findCA_1(marksTable[i][2]);
        puts("");
    }
    printf("Student\tMarks 1\tMarks 2\tCA 1\tCA 2\n");
    for (int i = 0; i < num; i++) {
        printf("%d\t%d\t%d\t%.2f\t%.2f\n", (int)marksTable[i][0], (int)marksTable[i][1], (int)marksTable[i][2], marksTable[i][3], marksTable[i][4]);
    }
    return 0;
}

float findCA_1(int t_marks1) {
    return (t_marks1 * 20 / 100);
}

float findCA_2(int t_marks2) {
    return (t_marks2 * 30 / 100);
}