#include<stdio.h>
struct node{
	int data;
	struct node*address;
};
struct node* deleteatend(head)
{
	struct node*temp,*s;
	temp=(struct node*)malloc(sizeof(struct node));
	s=head;
	while(s->address->address!=NULL)
	{
		s=s->address;
	}
	temp=s->address;
	s->address=NULL;
	free(temp);
	
}

struct node *deletionatfirst(head)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp=head;
	head=head->address;
	free(temp);
	
}
struct node *deletionbefore(head,value)
{
	struct node*temp,*s;
	temp=(struct node*)malloc(sizeof(struct node));
	s=head;
	while(s->address->address->data!=value)
	{
		s=s->address;
	}
	temp=s->address;
	s->address=s->address->address;
	free(temp);
	
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
	
void main()

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
	//printf("deleteatend:\n");
	 //   deleteatend(head);
	    
	//printf("deletionatfirst:\n");    
		deletionatfirst(head);
		
	//printf("deletionbefore:\n");	
    	//deletionbefore(head,30);
        display(head);
    

	
}

