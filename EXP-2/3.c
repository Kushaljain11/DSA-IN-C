// 3) WAP in C to perform swapping of two numbers by passing address of the variables to the functions.
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

#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

