// Here I am going to create a Node in a linked list

// First creating a class named "Node" to represent the data type of a node.
#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* nextpointer;



};

int main ()
{
  Node* node1 = new Node(); // Remember, new keyword returns a pointer to the allocated object in C++
  cout<<node1->data<<endl;
  cout<<node1->nextpointer;
}