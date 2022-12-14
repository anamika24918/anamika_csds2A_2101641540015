#include<stdio.h>

struct node{
	int data;
	struct node*address;
};
int findmiddle(struct node*head)
{
	struct node*a=head;
	struct node*b=head;
	while(b!=NULL && b->address!=NULL && b->address->address!=NULL)
	{
		a=a->address;
		b=b->address->address;
	}
	return a;
}

int main()
{
    int answer;		
	struct node*head=(struct node*)malloc(sizeof (struct node));
	struct node*second=(struct node*)malloc(sizeof (struct node));
	struct node*third=(struct node*)malloc(sizeof (struct node));
	head->data=10;
	head->address=second;
	second->data=20;
	second->address=third;
	third->data=30;
	third->address=NULL;
	answer=findmiddle(head);
	printf("%d",answer);
	
}
