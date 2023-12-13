#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int grades[10] = {90, 91, 92, 93, 94, 95, 96, 97, 98, 99};
    
    int i;
    
    printf("Normal Order:");
    for(i = 0; i <= 9; i++){
        printf("%d ", grades[i]);
    }
    printf("\n");
    
    printf("Reversed Order: ");
    for(i = 9; i >= 0; i--){
        printf("%d ", grades[i]);
    }
    printf("\n");
    
    return 0;
}