// stack implementation using SLL attempt 2
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next=NULL;
    }
};

void push(Node *&top,int data)
{
    Node *newNode = new Node(data);
    if(top == NULL)
    {
        top = newNode;
        return;
    }
    newNode->next = top;
    top = newNode;
}

void pop(Node *&top)
{
    Node *tempTop;
    if(top == NULL)
    {
        cout<<"STACK UNDERFLOW"<<endl;
        return;
    }

    tempTop = top;
    top = top->next;
    cout<<tempTop->data<<" element popped from stack"<<endl;
    delete tempTop;

}

void displayStack(Node *top)
{
    if(top == NULL)
    {
        cout<<"stack underflow"<<endl;
        return;
    }
    while(top != NULL)
    {
        cout<<top->data<<endl;
        top = top->next;
    }
}

int main()
{
    Node *top=NULL;
    push(top,1);
    push(top,2);
    push(top,3);

    displayStack(top);
    pop(top);
    displayStack(top);
    return 0;
}