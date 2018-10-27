#include <iostream>
#include "DoublyLinked_List.h"
using namespace std;

int main()
{
    //Allocate space for Nodes
    Node* Node1 = new Node(1);
    Node* Node2 = new Node(3);
    Node* Node3 = new Node(5);
    Node* Node4 = new Node(7);

    DoublyLinkedList Mylist;

    Mylist.AddNodeToEnd(Node1);
    Mylist.AddNodeToEnd(Node2);
    Mylist.AddNodeToEnd(Node3);
    Mylist.AddNodeToEnd(Node4);


    Mylist.PrintMyList();

    Mylist.DeleteNodeFromEnd();

    Mylist.PrintMyList();

    //Free up space taken by nodes
    delete Node1;
    delete Node2;
    delete Node3;
    delete Node4;
    return 0;
}
