#include<stdio.h>
#define size 10
int stack[size];
int tos = -1;
int isFull()
{
	if(tos==size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int ele)
{
	if(isFull()==1)
	{
		printf("\n Stack is full");
	}
	else
	{
		tos++;
		stack[tos]=ele;
	}
}
int isEmpty()
{
	if(tos == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop()
{
	int poppedElement;
	if(isEmpty()==1)
	{
		return -1;
	}
	else
	{
		poppedElement = stack[tos];
		tos--;
		return poppedElement;
	}	
}
int main()
{
	int ele,ch,choice,i;
	int poppedElement;
	do
	{
		printf("\n1. Push");
		printf("\n2. Pop");
		printf("\n3. Peak");
		printf("\n4. Count");
		printf("\n5. Print");
		printf("\n6. Exit");
		printf("\n1. Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n Enter element to push");
				scanf("%d",&ele);
				push(ele);
				break;
			case 2:
				poppedElement = pop();
				if(poppedElement == -1)
				{
					printf("\nElement could not be deleted");
				}
				else
				{
					printf("Popped element is %d",poppedElement);
				}
				break;
			case 3:
			//printf("\nPeak is %d",Peak());
			break;
			case 4:
			//print("\nNumber of ele in stack:%d",count());		
			break;
			case 5:
			{
				printf("\nStack elements...\n");
				for( i=0; i <= tos-1 ; i++)
				{
					printf("%d",stack[i]);
				}
			}
			break;
			case 6:
			    return 0;
		}
		}while(choice != 6);	
}
