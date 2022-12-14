#include<stdio.h>
struct node{
	int data;
	struct node*address;
};
insertbefore(data,databefore,head)
{
	struct node*temp,*s;
	s=head;
	{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->address=NULL;
    }
    while(s->address->data!=databefore)
    {
    	s=s->address;
	}
	temp->address=s->address;
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
	insertbefore(15,30,head);
	display(head);	
}

