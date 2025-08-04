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
