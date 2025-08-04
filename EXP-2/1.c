#include <stdio.h>

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrArr[3];

    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    printf("Array of Pointers:\n");
    for (int i = 0; i < 3; i++) {
        printf("Value at ptrArr[%d] = %d\n", i, *ptrArr[i]);
    }

    int arr[5] = {1, 2, 3, 4, 5};
    int (*pArr)[5];

    pArr = &arr;

    printf("\nPointer to an Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("(*pArr)[%d] = %d\n", i, (*pArr)[i]);
    }

    return 0;
}

//2
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Rahul", 101, 87.5};
    struct Student *ptr;

    ptr = &s1;

    printf("Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}

//3
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
