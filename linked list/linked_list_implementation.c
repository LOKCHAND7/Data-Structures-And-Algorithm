#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void append(int data)
{
    struct node *newnode=malloc(sizeof(struct node));//dy
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
    temp->next=newnode;
    }
}
void display(){
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,data;
    printf("Enter number of node:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter Data %d :",i);
        scanf("%d",&data);
        if(data>0)
        {
            append(data);
        }
    }
    display();
    return 0;
}
