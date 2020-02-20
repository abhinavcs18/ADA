#include<stdio.h>
//kth largest element in array

int main(void)
{
    int n,a,t,arr[100];
	printf("Enter the number of elements\n");
        scanf("%d",&n);
	printf("Enter the elements of the array\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<arr[i+1])
            {
                a=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=a;
            }
        }
for(int i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}

	int k;
printf("\nEnter value of k\n");
scanf("%d",&k);
for(int i=0;i<k;i++)
{
printf("%d\t",arr[i]);
}




return 0;
}
