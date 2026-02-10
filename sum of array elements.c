//Wap to calculate the sum of the elements of the array and find the average of all elements
#include<stdio.h>
int main()
{
	int i,n;
	int sum=0;
	float average;
	printf("Enter the size of array max(0 to 10):\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	average = (float)sum/n;
	printf("\n The sum of all elements: %d\n",sum);
	printf("\n Average of array elements: %.1f\n",average);
	return 0;
}
