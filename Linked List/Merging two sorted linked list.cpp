// Here given two sorted linked list I will merge them such that the new list becomes sorted.
// My idea is to store those given lists into a vector and then sort the vector. 
// Then I will create the resultant list from that vector


#include <bits/stdc++.h>
using namespace std;
vector<int>container;

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

void TraversingLinkedList(Node* &head)
{
  Node* temp = head;
  while(temp != NULL)
  {
    // cout<<temp->data<<endl;
    container.push_back(temp->data);
    temp = temp->nextpointer;
  }

}

int main()
{
  // For the insertion of the first linked list.
  cout<<"Enter the size of the fisrt linked list: ";
  int n1;
  cin>>n1;
  cout<<"Enter the data of the first linked list: ";
  Node* headnode1;
  Node* tailnode1;
  for(int i = 0;i<n1;i++)
  {
    int data;
    cin>>data;

    if(i == 0)
    {
       headnode1 = new Node(data);
       tailnode1 = headnode1;
    }
    else
    {
      InsertAtTail(data,tailnode1);
    }
  }
  TraversingLinkedList(headnode1);
  // printingLinkedList(headnode1);

  // For the insertion of second linked list.

  cout<<"Enter the size of the second linked list: ";
  int n2;
  cin>>n2;
  cout<<"Enter the data of the second linked list: ";
  Node* headnode2;
  Node* tailnode2;
  for(int i = 0;i<n2;i++)
  {
    int data;
    cin>>data;

    if(i == 0)
    {
       headnode2 = new Node(data);
       tailnode2 = headnode2;
    }
    else
    {
      InsertAtTail(data,tailnode2);
    }
  }
  TraversingLinkedList(headnode2);
  // printingLinkedList(headnode2);
  
  sort(container.begin(),container.end());

  for(auto x:container)
  {
    cout<<x<<endl;
  }


}

