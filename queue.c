#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1 ,rear = -1;
int isFull()
{
	return rear == MAX - 1;
}
int isEmpty()
{
	return front == -1 || front > rear;
}
void enqueue(int value)
{
	if(isFull())
	{
		printf("Queue overall cannot insert %d\n",value);
		return;
	}
	if(front == -1)
	front = 0;
	queue[++rear] = value;
	printf("%d inserted into queue.\n",value);
}
void dequeue()
{
if(isEmpty())
	{
		printf("Queue underflow! nothing to delete.\n");
		return;
	}
	printf("%d deleted from queue.\n",queue[front++]);
}
void display()
{
	if(isEmpty())
	{
		printf("Queue is empty.\n");
		return;
	}
	printf("Queue elements:");
	for(int i = front; i<= rear; i++)
	   {
	       printf("%d",queue[i]);
       }
    printf("\n");
}
int main()
{
	int choice,value;
	do
	{
		printf("\n---Queue Menu---\n");
		printf("1. Enqueue (insert)\n");
		printf("2. Enqueue (delete)\n");
		printf("3. Display");
		printf("4. Exit\n");
		printf("Enter ypour choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter valur to insert:");
				scanf("%d",&insert);
				enqueue(value);
				break;
		}
		case 2:
			dequeue();
			break;
		case 3:
		     display();
			 break;
		case4:
		    printf("Exiting program...\n");
			break;
		default;
		    printf("Invalid choice! Please try again");
	}
}while(choice ! =4);
return 0;
}
