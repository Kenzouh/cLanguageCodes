#include <stdio.h>

int main(int argc, const char * argv[])
{

    int class[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i;

    printf("Normal Order: ");
    for(i = 0; i <= 14; i++){
        printf("%d ", class[i]);
    }

    printf("\nReversed Order: ");
    for(i = 14; i >= 0; i--){
        printf("%d ", class[i]);
    }
    printf("\n");
    return 0;
}