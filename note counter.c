#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0};  // to store number of each note
    
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            count[i] = amount / notes[i];   // how many notes of this denomination
            amount = amount % notes[i];     // remaining amount
        }
    }

    printf("Minimum number of notes required:\n");
    for (int i = 0; i < 9; i++) {
        if (count[i] > 0) {
            printf("%d x %d-rupee notes\n", count[i], notes[i]);
        }
    }
    
    return 0;
}
