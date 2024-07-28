// Here I will try to add a Node in postion given by the user. 

#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* nextpointer;

  // Creating a Constructor to create a Node with manual data
  
  Node(int  data)
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
void InsertAtNthPosition(Node* &head,int position,int data)
{
  Node* temp = head;
  int count = 1;
  while(count < position -1)
  {
    ++count;
    temp = temp -> nextpointer;
  }

  // Now create the node that need to be inserted
  Node* nodeToBeInserted = new Node(data);
  nodeToBeInserted -> nextpointer = temp->nextpointer;
  temp->nextpointer = nodeToBeInserted;

}


int main()
{
  Node* headnode = new Node(100);
  Node* tailNode = headnode;
  InsertAtTail(200,tailNode);
  InsertAtTail(300,tailNode);
  InsertAtTail(400,tailNode);

  InsertAtNthPosition(headnode,3,500);
  
  printingLinkedList(headnode);

}


