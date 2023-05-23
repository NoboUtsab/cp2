#include<bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *createNode(int data)
{
    Node *newNode=(Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next=NULL;
    return newNode;
}
Node *insertData(Node *head,int data)
{
    Node *newNode=createNode(data);
    if(head==NULL)
    {
        head=newNode;
        return head;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;
    return head;

}
Node *betweenData(Node *head,int data,int pos)
{
    Node *newNode=createNode(data);
    Node *temp=head;
    if(pos==1)
    {
        head=newNode;
        return head;
    }
    for(int i=0; i<pos-1; i++)
    {
        temp=temp->next;
    }
    Node *temp1=temp->next;
    temp->next=newNode;
    newNode->next=temp1;
    return head;
}
Node *deleteData(Node *head,int pos)
{
    Node *temp=head;
    if(pos==1)
    {
        head=temp->next;
        return head;
    }
    for(int i=0; i<pos-1; i++)
    {
        temp=temp->next;
    }
    Node *temp1=temp->next;
    temp->next=temp1->next;
    free(temp1);
    return head;
}
Node *revLinkList(Node *head)
{
    Node *prev,*current,*next;
    prev=NULL;
    current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        current=next;
    }
    return prev;
}
void printLink(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

}
int main()
{
    Node *head=NULL;
    int n,x;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        head=insertData(head,x);

    }
    printLink(head);
}
