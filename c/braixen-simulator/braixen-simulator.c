#include <stdio.h>
int main() {
    // Pat 1 = has been patted, Pat 0 = has not been patted
    int pat = 0;
    printf("\nWelcome to Braixen simulator 1000! \n");
    printf("1. Pet Braixen\n");
    printf("2. Don't Pet Braixen\n");
    printf("Your Selection: \n");
    scanf("%d", &pat);
    if (pat == 1){
        printf("You've pet Braixen, she is happy :3 \n");
    }
    else {
        printf("You didn't pet Braixen! she is not happy :< \n");
    }
    return 0;
}
