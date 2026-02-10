//WAP TO CHECK THE NUMBER IS MULTIPLE BY BOTH 3 AND 5
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%3==0)
	{
		printf(" %d number is multiple of 3",n);
	}
	else if(n%5==0)
	{
		printf(" %d number is multiple of 5",n);
	}
	else
	{
		printf(" %d number is not multiple of 3 and 5");
	}
	return 0;
}
