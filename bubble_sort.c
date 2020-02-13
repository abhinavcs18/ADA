#include <stdio.h>

void main()
{
    int a[100];
    int i,n,temp,j;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("After sorting, the array is given as...\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
