#include <stdio.h>

int main(int argc, const char * argv[])
{

    int class[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i;
    char name[80];

    printf("Welcome to my ARRAY PROGRAM!\n\n");
    printf("Please, enter your name: ");
    scanf("%s", &name);

    printf("\n\nHello there, %s!", name);

    printf("\n\nNormal Order: ");
    for(i = 0; i <= 14; i++){
        printf("%d ", class[i]);
    }

    printf("\nReversed order: ");
    for(i = 14; i >= 0; i--){
        printf("%d ", class[i]);
    }

    printf("\n\nThank you for using my program, %s! :)", name);
    return 0;
}