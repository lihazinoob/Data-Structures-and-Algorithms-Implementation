// Here I am going to insert a node at the start of a linked list, that means in "HEAD" position

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

// Creating a function to insert a node in head position
void InsertAtHead(int data, Node *&head)
{
  // First create a New Node
  Node *newNode = new Node(data);
  newNode->nextpointer = head;
  head = newNode;
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
  InsertAtHead(200,headnode);
  printingLinkedList(headnode);

}