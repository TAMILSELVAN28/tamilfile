#include <stdio.h>
 
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
void insert();
void deletess();
void display();
void exit(int);
void displayall();
main()
{
    int choice;
    do
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display first elements of queue \n");
        printf("4.Display all elements of queue \n");
        printf("5.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            deletess();
            break;
            case 3:
            display();
            break;
            case 4:
            displayall();
            break;
            case 5:
            break;
            default:
            printf("Wrong choice \n");
        } /*End of switch*/
    } while(choice!=5);/*End of while*/
} /*End of main()*/
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} /*End of insert()*/
 
void deletess()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /*End of delete() */
void displayall()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
void display()
{
	int i=queue_array[front];
	if ( front == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Queue is: \n");
		printf("%d ",&i);
	}
}
