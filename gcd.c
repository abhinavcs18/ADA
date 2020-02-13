#include<stdio.h>
int gcd(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
void main()
{
	int m, n, res;
	printf("Enter two numbers m & n :\n");
	scanf("%d%d",&m,&n);
	res=gcd(m,n);
	printf("GCD of %d and %d is : %d", m,n,res);
}