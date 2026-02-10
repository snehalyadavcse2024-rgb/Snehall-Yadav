//wap to display all odd numbers from 1 to 30
#include<stdio.h>
int main()
{
	int i;
	printf("Enter odd numbers from 1 to 30:");
	for(i=1;i<=30;i++)
	if(i%2==1)
	{
		printf("%d \n",i);
	}
	return 0;
}
