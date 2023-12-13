#include <stdio.h>
#include <stdlib.h> // for system("cls");
#include <conio.h> // for getch();

void main()
{
    int a[10], b[10], sum[10] /*3rd variable*/, i, n;
    system("cls");

    printf("\n\t=====================\n");
    printf("\t|| Sum of 2 Arrays ||\n");
    printf("\t=====================\n");
    
    printf("\nHow many elements: ");
    scanf("%d", &n);

    printf("\nEnter elements of 1st array:\n");
    
    for (i = 0; i < n; i++){
        printf("Element [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEnter elements of 2nd array:\n");
    
    for(i = 0; i < n; i++){
        printf("Element [%d]: ", i);
        scanf("%d", &b[i]);
        }

    printf("\nSum of array 1 and array 2:\n");
    
        for(i = 0; i < n; i++)
        sum[i] = a[i] + b[i];
		
        for(i = 0; i < n; i++){
        printf("Element [%d]: %d + %d = %d \n", i, a[i], b[i], sum[i]);
    	}
        getch();
}
