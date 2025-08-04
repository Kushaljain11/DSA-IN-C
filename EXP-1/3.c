
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
