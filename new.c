#include<stdio.h>

int main()
{
    int n, a[100], i;

    printf("Enter the number of digits:\n");
    scanf("%d", &n);

    printf("Enter the digits:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
}
    a[n - 1]++;
    
    printf("Result:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}



