#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node * CreateNode(int d)
{
    struct Node *NewNode=(struct Node *)malloc(sizeof(struct Node));
    if(NewNode==NULL)
    {
        return NULL;
    }
    NewNode->data=d;
    NewNode->next=NULL;
    return NewNode;
}

struct Node * InsertAtStart(struct Node *head,int d)
{
    struct Node *NewNode=CreateNode(d);
    if(NewNode==NULL)
    {
        printf("\nMEMORY ALLOCATION FAILED..");
        return head;
    }
    if(head==NULL)
    {
        return NewNode;
    }
    
    NewNode->next=head;
    return NewNode;
}

struct Node * InsertAtEnd(struct Node *head,int d)
{
    struct Node *NewNode=CreateNode(d);
    if(NewNode==NULL)
    {
        printf("\nMEMORY ALLOCATION FAILED!");
        return head;
    }

    if(head==NULL)
    {
        return NewNode;
    }

    struct Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NewNode;
    return head;
}

struct Node * InsertInBetween(struct Node *head,int d,int p)
{
    struct Node *NewNode=CreateNode(d);
    if(NewNode==NULL)
    {
        printf("\nMEMORY ALLOCATION FAILED!");
        return head;
    }

    if(head==NULL)
    {
        printf("\nCANNOT INSERT");
        return head;
    }

    if(p==1)
    {
        NewNode->next=head;
        return NewNode;
    }

    struct Node *temp=head;

    for(int i=1;i<p-1;i++)
    {
        temp=temp->next;
    }   
    NewNode->next=temp->next;
    temp->next=NewNode;
    return head;
}

struct Node * DeleteNode(struct Node *head,int d)
{
    struct Node *temp=head;
    struct Node *ahead=NULL;
    while(temp->data!=d)
    {
        temp=temp->next;
        ahead=temp;
    }
    ahead->next=temp->next;
    free(temp);
    return head;
}
void displaylist(struct Node *head)
{
    struct Node *temp=head;

    while(temp!=NULL)
    {
        printf("%d -> ", temp->data);
        temp=temp->next;
    }
}


int main()

{
    struct Node *head=NULL;
    head=InsertAtStart(head,10);
    head=InsertAtEnd(head,40);
    head=InsertInBetween(head,20,2);
    head=InsertInBetween(head,30,3);
    head=DeleteNode(head,20);
    displaylist(head);
    return 0;
}