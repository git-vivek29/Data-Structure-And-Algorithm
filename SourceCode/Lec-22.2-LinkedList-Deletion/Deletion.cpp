#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(node* &head,int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(node* &head,int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}
bool search(node* &head,int key)
{
    node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deletionAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node* &head,int val)
{
    if(head == NULL)
    {
        cout<<"Linked List empty"<<endl;
        return;
    }
    if(head->next == NULL || head->data == val)
    {
        deletionAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->data != val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
int main()
{
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    display(head);
    insertAtHead(head,4);
    insertAtHead(head,5);
    display(head);
    cout<<search(head,4)<<endl;
    node* head1 = NULL;
    insertAtTail(head1,1);
    display(head1);
    deletionAtHead(head1);
    display(head1);
    deletion(head,4);
    display(head);
    deletion(head,5);
    display(head);
    node* head2 = NULL;
    deletion(head2,NULL);
    return 0;
}