#include<stdio.h>
struct node{
	int data;
	struct node * address;
};

void findnthfromend(int n,struct node *head)
{
	struct node*s=head;
	struct node*h=head;
	while(n>0)
	{
		s=s->address;
		n--;
	}
	while(s->address!=NULL)
	{
		h=h->address;
		s=s->address;
	}
	printf("%d",h->data);
}
int main()
{
	struct node*head=(struct node*)malloc(sizeof (struct node));
	struct node*second=(struct node*)malloc(sizeof (struct node));
	struct node*third=(struct node*)malloc(sizeof (struct node));
	struct node*fourth=(struct node*)malloc(sizeof (struct node));
	struct node*fifth=(struct node*)malloc(sizeof (struct node));
	struct node*sixth=(struct node*)malloc(sizeof (struct node));
	head->data=10;
	head->address=second;
	second->data=20;
	second->address=third;
	third->data=30;
	third->address=fourth;
	fourth->data=40;
	fourth->address=fifth;
	fifth->data=50;
	fifth->address=sixth;
	sixth->data=30;
	sixth->address=NULL;
	findnthfromend(3,head);
	
}
	
