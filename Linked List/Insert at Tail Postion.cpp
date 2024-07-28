// Here I am going to insert a node at the end of a linked list, that means in "LAST or TAIL" position

#include <iostream>
using namespace std;


class Node
{
public:
  int data;
  Node *nextpointer;

  // Creating a Constructor to create a Node with manual data

  Node(int data)
  {
    this->data = data;
    this->nextpointer = NULL;
  }
};

void InsertAtTail(int data, Node* &tailNode)
{

  
  
  // Creating a Node at First Place
  Node* newNode = new Node(data);

  // Pointing the tailNode to the newNode that is created.
  tailNode -> nextpointer = newNode;
  tailNode = tailNode ->nextpointer;

}


void printingLinkedList(Node* &head)
{
  Node* temp = head;
  while(temp != NULL)
  {
    cout<<temp->data<<endl;
    temp = temp->nextpointer;
  }

}

int main()
{
  Node* headnode = new Node(100);
  Node* tailNode = headnode;
  InsertAtTail(200,tailNode);
  InsertAtTail(300,tailNode);

  printingLinkedList(headnode);

}