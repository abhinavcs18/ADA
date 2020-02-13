#include<stdio.h>
void tower(int n,char src,char temp,char dest);
int main()
{
	int num;
	printf("Enter the number of discs");
	scanf("%d", &num);
	tower(num,'A','B','C');
	return 0;
}
void tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		printf("move %d disc from %c to %c",n,src,dest);
	}
	else
	{
		tower(n-1,src,dest,temp);
		printf("move %d disc from %c to %c",n,src,dest);
		tower(n-1,temp,src,dest);
	}
}
