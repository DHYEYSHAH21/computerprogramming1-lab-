#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 values:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("4th value = %d\n", arr[3]);
    printf("7th value = %d\n", arr[6]);
    printf("9th value = %d\n", arr[8]);

    return 0;
}
