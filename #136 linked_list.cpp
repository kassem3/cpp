#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}; // DO NOT FORGET the semicolon!

struct node *header = NULL;

// Function declaration
void insertNode(int);
void displayList(struct node *header);

int main()
{
    insertNode(4);
    insertNode(1);
    insertNode(7);
    insertNode(26);
    insertNode(59);

    displayList(header);

    return 0;
}

void insertNode(int value)
{
    struct node *newNode, *lastNode;
    newNode = new node;
    newNode->data = value;

    // Case 1: insert first
    if(header == NULL)
    {
        header = newNode;
        newNode->next = NULL;
    }

    // Case 2: insert last
    else
    {
        lastNode = header;

        while(lastNode->next != NULL)
            lastNode = lastNode->next;
    
        lastNode->next = newNode;
        newNode->next = NULL;
    }
}

void displayList(struct node *header)
{
    if(header==NULL)
    {
        cout<<"list is empty";
        return;
    }

    struct node *temp = header;
    while(temp != NULL)
    {
        cout<<temp->data<<"-->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl; // Optional
}
