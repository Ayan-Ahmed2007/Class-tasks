#include <stdio.h>

struct course
{
    char code[8];
    char title[50];
    int semester;
    int theory;
    int lab;
};
struct student
{
    char regno[7];
    char name[50];
    struct course regs[8];
};

int main (void)
{
    struct student recap[45];

struct course courses[8] = {
    {"CSC1101",  "Calculus and Analytical Geometry", 1, 3, 0},
    {"CSC1102",  "English Composition and Comprehension", 1, 3, 0},
    {"CSC1103",  "Fundamentals of Programming", 1, 3, 0},
    {"CSCL1103", "Lab: Fundamentals of Programming", 1, 0, 1},
    {"CSC1108",  "Introduction to Computer Science", 1, 2, 0},
    {"CSCL1108", "Lab: Introduction to Computer Science", 1, 0, 1},
    {"CSC1107",  "Applied Physics", 1, 2, 0},
    {"CSCL1107", "Lab: Applied Physics", 1, 0, 1}
};    

    for (int i = 0; i < 45; i++)
    {
        for(int j=0; j<8; j++){
            recap[i].regs[j] = courses[j];
        }
    }
}
