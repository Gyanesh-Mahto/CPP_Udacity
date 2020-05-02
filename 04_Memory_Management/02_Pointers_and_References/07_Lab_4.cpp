/*
Doubly linked lists
Doubly linked list is a type of data structure that is made up of so called objects
that are created using self referential structures. Each of these nodes contain three
attributes, namely the value and the reference to the next list object and the reference
to the previous list object.

Because the list is linked in both directions, any node has the ability to access any
other node. That means that the user of a doubly linked list need only keep track of
a single node.

The last node in the list points forward to nothing, which can be represented by nullptr.
The same is true for the first node in the list, which points backward to nothing.

In this exercise you will create a doubly linked list, which exposes 4 methods:

    push_back(): add values to the end of the list
    push_front(): add values to the beginning to the list
    pop_back(): delete values from the end of the list
    pop_front(): delete values from the front of the list

Also, you will implement a helper function, empty(), which returns whether or not
the list has any nodes.

Steps
    Declare class List to represent the doubly linked list
    Declare struct Node to represent the nodes in the list
    Declare a constructor for struct Node
    Declare a member variable head that belongs to class List and points to the first node in the list
    Declare a member variable head that belongs to class List and points to the first node in the list
    Declare a constructor for the doubly linked list
    Declare a destructor for class List
    Implement the class List destructor to delete all of the nodes in the list
    Declare List::PushFront() to push nodes onto the front of the list
    Declare List::PushBack() to push nodes onto the back of the list
    Declare List::PopFront() to delete nodes from the front of the list
    Declare List::PopBack() to delete nodes from the back of the list
    Declare List::Size() to count the number of nodes in the list
    Test that all member functions in class List behave properly, even if the list is empty

*/

#include<iostream>
using namespace std;

class Node  //Declare struct Node to represent the nodes in the list
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val, Node* prev_Node, Node* next_Node) //Declare a constructor for struct Node
    {
        data=val;
        prev=prev_Node;
        next=next_Node;
    }

};

class List //Declare class List to represent the doubly linked list
{
  private:
  Node* head;  //Declare a member variable head that belongs to class List and points to the first node in the list
  Node* tail;

  public:
  List()  //Declare a constructor for the doubly linked list
  {
      head=nullptr;
      tail=nullptr;
  }
  ~List();  //Declare a destructor for class List
  void push_back(int);
  void push_front(int);
  int pop_back();
  int pop_front();
  bool empty() const;
  int size() const;
};

List::~List()
{
    while(List::head!=nullptr)
    {
        Node* tmp= List::head;
        List::head=List::head->next;
        delete tmp;
    }
}

void List::push_back(int val)
{
    List::tail=new Node(val, List::tail, nullptr);
    if(List::head==nullptr)
    {
        List::head=List::tail;
    }
    else
    {
        List::tail->prev->next=List::tail;
    }
}
void List::push_front(int val)
{
    List::head=new Node(val, nullptr, List::head);
    if(List::tail==nullptr)
    {
        List::tail=List::head;
    }
    else
    {
        List::head->next->prev=List::head;
    }
    
}

int List::pop_back()
{
    if(List::empty())
    {
        throw("Cannot List::pop_front() since List::empty()");
    }
    
    Node* tmp=tail;
    int value=tail->data;
    tail=tail->prev;
    if(tail!=nullptr)
    {
        tail->next=nullptr;
    }
    else
    {
        head=nullptr;
    }
    delete tmp;
    return value;
}

int List::pop_front()
{
    if(List::empty())
    {
        throw("Cannot List::pop_front() since List::empty()");
    }
    Node* tmp=List::head;
    int value=tmp->data;
    head=head->next;
    if(head!=nullptr)
    {
        head->prev=nullptr;
    }
    else
    {
        tail=nullptr;
    }
    delete tmp;
    return value;
}

bool List::empty() const
{
    return(head==nullptr);
}

int List::size() const
{
    Node* tmp=List::head;
    int count=0;
    while(tmp!=nullptr)
    {
        tmp=tmp->next;
        count++;
    }
    return count;
}

int main()
{
 List List1, List2;
 List1.push_back(5);
 List1.push_front(9);
 List1.push_front(19);
 cout<<"Size of List1: "<<List1.size()<<endl;
 cout<<"First Element poped: "<<List1.pop_front()<<endl;
 cout<<"Last Element popped: "<<List1.pop_back()<<endl;
 List2.push_back(15);
 List2.push_front(2);
 List2.push_back(9);
 cout << "Size of List2: " << List2.size() << std::endl;
 cout<<"First Element poped: "<<List2.pop_front()<<endl;
 cout<<"Last Element popped: "<<List2.pop_back()<<endl;
}

/*
Size of List1: 3
First Element poped: 19
Last Element popped: 5
Size of List2: 3
First Element poped: 2
Last Element popped: 9
*/
