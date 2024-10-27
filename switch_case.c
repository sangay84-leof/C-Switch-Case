#include <stdio.h>

int main() {
    int choice;

    printf("Choose an option (1-3):\n");
    printf("1. Print Hello\n");
    printf("2. Print Welcome\n");
    printf("3. Print Goodbye\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Hello!\n");
            break;
        case 2:
            printf("Welcome!\n");
            break;
        case 3:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please choose a number between 1 and 3.\n");
    }

    return 0;
}
