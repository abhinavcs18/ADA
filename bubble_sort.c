#include <stdio.h>

void main()
{
    int a[100];
    int i,n,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("After sorting, the array is given as...\n");
    for(i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
    }
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}    