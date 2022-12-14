#include<stdio.h>
struct node{
	int data;
	struct node*address;
};
insertionatend(data,head)
{
	struct node*temp,*s;
	
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->address=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	s=head;
	while(s->address!=NULL)
	{
		s=s->address;
	}
	s->address=temp;
}
display(head){
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
	head->data=10;
	head->address=second;
	second->data=20;
	second->address=third;
	third->data=30;
	third->address=NULL;
	insertionatend(40,head);
	display(head);
	
}

