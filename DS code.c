#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *start = NULL;

node* getnode()
{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    printf("\nEnter data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

void createlist()
{
    int i;
    node *newnode;
    node *temp;
    for(i=0;i<3;i++)
    {
        newnode = getnode();
        if(start==NULL)
            start = newnode;
        else
        {
            temp = start;
            while(temp->next!=NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }

}

int countnode(node *ptr)
{
    int count = 0;
    while(ptr!=NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void ins_beg()
{
    node *newnode;
    newnode = getnode();
    if(start==NULL)
    {
        start = newnode;
    }
    else
    {
        newnode->next=start;
        start = newnode;
    }
}

void ins_onlyOdd()
{
    node *newnode,*temp,*prev;
    int pos,nodectr,ctr=1;
    newnode = getnode();
    printf("Enter the position:");
    scanf("%d",&pos);
    nodectr = countnode(start);
    if(pos>1&&pos<=nodectr&&(pos%2!=0))
    {
        temp=prev=start;
        while(ctr<pos)
        {
            prev = temp;
            temp = temp->next;
            ctr++;
        }
        prev->next = newnode;
        newnode->next = temp;
    }
    else if(pos%2==0)
    {
        printf("You can't add at even position...Please enter odd position");
    }
    else
        printf("Position %d is not a middle position.",pos);
}

int main()
{
    printf("...Program for linked list...");
    createlist();
    printf("List created...");
    printf("\nADD data at beginning");
    ins_beg();
    printf("\nEven position restriction!!!!");
    ins_onlyOdd();
}
