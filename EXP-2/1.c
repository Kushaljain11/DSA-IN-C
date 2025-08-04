// 1) WAP to implement arrays of pointers and pointers to arrays.
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

