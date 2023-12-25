#include <stdio.h>
#define M 10

struct person {
    long int student_id;
    char name[20];
    int bornyear;
    int age;
};
struct person stu[M];
int year_of_year;

void input(int i);
void output(int m);
void age_count();

int main()
{
    int i;
    for (i = 0; i < 10; i++) {
        input(i);
    }
    scanf("%d", &year_of_year);
    age_count();
    for (i = 0; i < 10; i++) {
        if (stu[i].age > 20) {
            output(i);
        }
    }

    return 0;
}

void input(int i)
{
    scanf("%ld", &stu[i].student_id);
    getchar();
    gets(stu[i].name, 20, stdin);
    scanf("%d", &stu[i].bornyear);
}

void output(int m)
{
    printf("%ld,%s,%d,%d\n", stu[m].student_id, stu[m].name, stu[m].bornyear, stu[m].age);
}

void age_count()
{
    int i;
    for (i = 0; i < 10; i++) {
        stu[i].age = year_of_year - stu[i].bornyear;
    }
}
