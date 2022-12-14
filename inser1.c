#include<stdio.h>
struct node{
	int data;
	struct node*address;
};
insertnode(data,head)
{
	struct node*temp,*s;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->address=NULL;
    s=head;
    head=temp;
    temp->address=s;
    printf("%d",temp->data);
    printf("->");
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
	head->data=10;
	head->address=second;
	second->data=20;
	second->address=third;
	third->data=30;
	third->address=NULL;
	insertnode(40,head);
   //	insertatbegin(70,head);
	display(head);
	
}

