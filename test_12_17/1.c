#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
typedef struct
{
    int id;
    char name[50];
    int math_score;
    int physics_score;
    int english_score;
    int average_score;
} Student;

int main() {
    Student students[10];
    int num_students;
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++)
    {
        scanf("%d", &students[i].id);
        scanf("%s", students[i].name);
        scanf("%d", &students[i].math_score);
        scanf("%d", &students[i].physics_score);
        scanf("%d", &students[i].english_score);
        students[i].average_score = (students[i].math_score + students[i].physics_score + students[i].english_score) / 3;
    }

    for (int i = 0; i < num_students; i++) {
        printf("The average score of the %dth student is %d.\n", i + 1, students[i].average_score);
    }

    return 0;
}