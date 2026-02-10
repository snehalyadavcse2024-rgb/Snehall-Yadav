//Write a menu driven C program to implement the following in an array:
//1 traverse & display
//2 search for an element
//3 insert for an element
//4 delete an element from any position
#include<stdio.h>
int main()
{
	int arr[5],n=0,choice,i,pos,val;
	printf("Enter number of elements(max 5):");
	scanf("%d",&n);
	while(1)
	{
		printf("\n---Menu---\n");
		printf("1. Traverse and display:\n");
		printf("2. Search for an element:\n");
		printf("3. Insert for an element:\n");
		printf("4. Delete an element:\n");
		printf("5. Exit:\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			 if(n==0)
			 {
			 	printf("Array is empty.\n");
			 }
			 else
			 {
			 	printf("Array elements:\n");
			 	for(i=0;i<n;i++)
			 	{
			 		printf("Index %d:%d\n",i,arr[i]);
				}
			 }
			 break;
			 
			 case 2:
			 	if(n==0)
			 	{
			 		printf("Array is empty.\n");
				}
				else
				{
					printf("Enter element to search:");
					scanf("%d",&val);
					int found=0;
					for(i=0;i<n;i++)
					{
						if(arr[i]==val)
						{
							printf("Element %d found at index %d.\n",val,i);
							found=1;
							break;
						}
					}
					if(found==0)
					{
						printf("Element not found.\n");
					}
				} 
				break;
				
				case 3:
					if(n>=5)
					{
						printf("Array is full.\n");
					}
					else
					{
						printf("Enter position to insert (0 to %d):",n);
						scanf("%d",&pos);
						if(pos<0 || pos>n)
						{
							printf("Invalid position.\n");
						}
						else
						{
							printf("Enter value to insert:");
							scanf("%d",&val);
							for(i=n;i>pos;i--)
							{
								arr[i]=arr[i-1];
							}
							arr[pos]=val;
							n++;
							printf("Element inserted.\n");
						}
					}
					break;
					
					case 4:
						if(n==0)
						{
							printf("Array is empty.\n");
						}
						else
						{
							printf("Enter position to delete (o to %d):",n-1);
							scanf("%d",&pos);
							if(pos<0 || pos>=n)
							{
								printf("Invalid position.\n");
							}
							else
							{
								for(i=pos;i<n-1;i++)
								{
									arr[i]=arr[i+1];
								}
								n--;
								printf("Element deleted.\n");
							}
						}
						break;
						
						case 5:
							printf("Exit program.\n");
							return 0;
						default:
							printf("Invalid choice. Try again.\n");
		}	 
	}
	return 0;
}
