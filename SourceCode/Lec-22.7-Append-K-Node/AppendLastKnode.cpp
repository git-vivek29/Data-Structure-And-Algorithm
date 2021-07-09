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

node* reverse(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node* recursiveReverse(node* &head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = recursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

node* reverseK(node* &head,int k)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr != NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr != NULL)
    {
        head->next = reverseK(currptr,k);
    }
    return prevptr;
}

void makeCycle(node* &head,int k)
{
    node* temp = head;
    node* startnode;
    int count = 1;
    while(temp->next != NULL)
    {
        if(count == k)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectCycle(node* &head)
{
    node* slowptr = head;
    node* fastptr = head;
    
    while(fastptr != NULL && fastptr->next != NULL)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        
        if(slowptr == fastptr)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node* &head)
{
    node* slowptr = head;
    node* fastptr = head;
    
    do
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    }while(slowptr != fastptr);
    
    fastptr = head;
    
    while(slowptr->next != fastptr->next)
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next;
    }
    slowptr->next = NULL;
}

int length(node* &head)
{
    int length = 0;
    node* temp = head;
    while(temp!= NULL ){
        length++;
        temp = temp->next;
    }
    return length;
}

node* Kappend(node* &head,int k)
{
    int l = length(head);
    node* newTail;
    node* newHead;
    node* tail = head;
    int count = 1;
    k = k%l; // to handle overflow
    while(tail->next != NULL)
    {
        if(count == l-k)
        {
            newTail = tail;
        }
        if(count == l-k+1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newTail->next = NULL;
    tail->next = head;
    return newHead;
}

int main()
{
    node* head = NULL;
    int a[] ={1,2,3,4,5,6};
    for(int i = 0;i<6;i++)
    {
        insertAtTail(head,a[i]);
    }
    display(head);
    node* newHead = Kappend(head,3);
    display(newHead);
    return 0;
}