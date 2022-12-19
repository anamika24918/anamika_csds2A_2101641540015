#include<stdio.h>
struct node{
	int data;
	struct node*address;
};
int reverse(struct node*head)
{
	struct node*newhead;
	struct node*first;
	if (head==NULL|| head->address==NULL)
	return head;
    
	newhead=reverse(head->address);
	first=head->address;
	first->address=head;
	head->address=NULL;
	return newhead;
}
void display(head){
	struct node*s;
	s=head;
	while(s!=NULL)
	{
		printf("%d",s->data);
		printf("->");
		s=s->address;
	}
}
int main()
{
	struct node*head=(struct node*)malloc(sizeof (struct node));
	struct node*second=(struct node*)malloc(sizeof (struct node));
	struct node*third=(struct node*)malloc(sizeof (struct node));
	struct node*fourth=(struct node*)malloc(sizeof (struct node));
	head->data=10;
	head->address=second;
	second->data=20;
	second->address=third;
	third->data=30;
	third->address=fourth;
	fourth->data=40;
	fourth->address=NULL;
	reverse(head);
	
	display(head);
	
}

