//2) WAP in C to implement pointers to structures.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Kushal", 002, 87.5};
    struct Student *ptr;
    ptr = &s1;

    printf("Student Details:\n");
    printf("Name: %s\n", ptr.name);
    printf("Roll Number: %d\n", ptr.roll);
    printf("Marks: %.2f\n", ptr.marks);

    return 0;
}
