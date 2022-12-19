#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*address;
};
 int mergelinklist(head1,head2)
{
	struct node*s=head1;
	struct node*t=head2;
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
//	newnode->data=data;
//	newnode->address=NULL;
    while(s!=NULL && t!=NULL)
    {
    	if(s->data < t->data)
    	{
    		newnode->data=s->data;
    		printf("%d->",newnode->data);
    		s=s->address;
    		
		}
		else
		{
			newnode->data=t->data;
			printf("%d->",newnode->data);
			t=t->address;
		}
	}
	while(s!=NULL)
	{
		newnode->data=s->data;
		printf("%d->",newnode->data);
		s=s->address;
	}
	while(t!=NULL)
	{
		newnode->data=t->data;
		printf("%d->",newnode->data);
		s=s->address;
	}
	return newnode;
}

void display(head2){
	struct node*s;
	s=head2;
	while(s!=NULL)
	{
		printf("%d",s->data);
		printf("->");
		s=s->address;
	}
}
int main()
{
	int head;
	struct node*head1=(struct node*)malloc(sizeof (struct node));
	struct node*first1=(struct node*)malloc(sizeof (struct node));
	struct node*second1=(struct node*)malloc(sizeof (struct node));
	struct node*third1=(struct node*)malloc(sizeof (struct node));
	struct node*head2=(struct node*)malloc(sizeof (struct node));
	struct node*first2=(struct node*)malloc(sizeof (struct node));
	struct node*second2=(struct node*)malloc(sizeof (struct node));
	head1->data=10;
	head1->address=first1;
	first1->data=19;
	first1->address=second1;
	second1->data=21;
	second1->address=third1;
	third1->data=33;
	third1->address=NULL;
	head2->data=5;
	head2->address=first2;
	first2->data=25;
	first2->address=second2;
	second2->data=27;
	second2->address=NULL;
	mergelinklist(head1,head2);
	//display(head2);
	
}

