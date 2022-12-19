//palindrome linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
}*head;

void create()
{
    int val;
    printf("enter value");
    scanf("%d",&val);
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->link= NULL;
    if(head == NULL)
         head = newNode;
    else
    {
        struct node *temp1 = head;
        while(temp1->link != NULL)
        {
            temp1 = temp1->link;
        }
        temp1->link = newNode;
    }
}

void print()
{
    struct node *temp = head;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->link;
    }
    printf("NULL\n");
}
int pallindrome(){
 struct node *temp = head;
 int c=0;
    while(temp != NULL)
    {
         c++;
         temp = temp->link;
    }
    struct node*a,*b;
    int i=0,j;
    while(i!=c/2){
     a=b=head;
     for(j=0;j<i;j++){
      a=a->link;
     }
     for(j=0;j<c-(i+1);j++){
      b=b->link;
     }
     if(a->data != b->data){
      printf("not pallindrome");
      return 0;
     }
     
     else{
      i++;
     }
    }
    printf("pallindrome");
    return 1;
}

void main(){
 create();
 create();
 create();
 print();
 pallindrome();
}
