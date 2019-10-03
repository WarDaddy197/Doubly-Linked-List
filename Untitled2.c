#include<stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
    struct node *prev;
};
struct node *start, *last, *newnode, *temp;
main()
{
    int ch,c;
    start=NULL;
    last=NULL;
    while (1)
    {
        printf(" 1. Insert Start\n 2. Insert End\n 3. Display\n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1 : newnode = (struct node*)malloc(sizeof(start));
                     printf("\n Enter Value to be inserted\n"); scanf("%d", &c);
                     newnode->info=c;
                     newnode->prev=NULL;
                     newnode->next=NULL;
                     if (start==NULL)
                     {
                         start=newnode;
                         last= newnode;
                     }
                     else
                     {
                         newnode ->next=start;
                         start->prev=newnode;
                         start=newnode;
                     }
                     break;
            case 3 : if(start!=NULL)
                     {
                         temp = start;
                         while(temp!=NULL)
                         {
                             printf("Value is : %d \n",temp->info);
                             temp=temp->next;

                         }

                     }
                     else
                     {
                         printf("Stack is empty !!\n");
                     }
                     break;
        }
    }

}
