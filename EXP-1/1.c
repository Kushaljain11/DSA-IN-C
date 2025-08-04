#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];
    int i, j;

    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}




//2
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    char address[100];
};

int main() {
    int i, n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar();
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Address: ");
        getchar();
        fgets(students[i].address, sizeof(students[i].address), stdin);
        students[i].address[strcspn(students[i].address, "\n")] = '\0';
    }

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Address: %s\n", students[i].address);
    }

    return 0;
}


//3
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int min, max, secondMin, secondMax;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two elements to find second min and max.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    secondMin = max;
    secondMax = min;

    for (i = 0; i < n; i++) {
        if (arr[i] > secondMax && arr[i] < max)
            secondMax = arr[i];
        if (arr[i] < secondMin && arr[i] > min)
            secondMin = arr[i];
    }

    printf("\nMinimum element: %d", min);
    printf("\nMaximum element: %d", max);

    if (secondMin == max)
        printf("\nSecond smallest element: Not found");
    else
        printf("\nSecond smallest element: %d", secondMin);

    if (secondMax == min)
        printf("\nSecond largest element: Not found");
    else
        printf("\nSecond largest element: %d", secondMax);

    return 0;
}
