#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}node;

node *first = NULL;

void insert(int data)
{
	node *tmp = (node *) malloc(sizeof(node));
	tmp -> data = data;
	tmp -> next = NULL;
	if (first == NULL)
		first = tmp;
	else
	{
		node *t = first;
		while ( t-> next)
			t = t -> next;
		t -> next = tmp;
	}

}

void delete()
{
	node *t = first;
	while (t -> next -> next)
		t = t -> next;
	free(t-> next -> next);
	t -> next = NULL;
}

void insert_pos(int pos, int data)
{
	node *tmp = (node *) malloc(sizeof(node));
	tmp -> data = data;
	tmp -> next = NULL;
	node *tt = first;
	node *follower = first;
	for (int i = 0; i < pos - 1; i++){
		follower = tt;
		tt = tt -> next;
	}
	tmp -> next = tt;
	follower -> next = tmp;

}
void display()
{
	node *t = first;
	while (t){
		printf("%d ",t -> data);
		t = t-> next;
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	insert(70);
	insert(80);
	delete();
	int position, data;
	printf("Enter your Position: ");
	scanf("%d",&position);
	printf("Enter your Data: ");
	scanf("%d",&data);
	if (position % 2 == 0)
		insert_pos(position, data);
	else
		printf("Invalid Position");

	display();
	getch();
}
