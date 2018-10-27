#include "DoublyLinked_List.h"
#include <iostream>
using namespace std ;

DoublyLinkedList::DoublyLinkedList()
{
    this->length = 0;
}

void DoublyLinkedList::AddNodeToEnd(Node* temp)
{
    if(this->length == 0)
    {
        this->Head = temp;
        this->Tail = temp;
    }
    else
    {
        this->Tail->Next = temp;  //Forward Link
        temp->Previous = this->Tail; //Reverse Link
        this->Tail = temp; //Adjusting the Tail of link
    }
    this->length++;
}

void DoublyLinkedList::DeleteNodeFromEnd()
{
    if(this->length == 0)
        return;
    else
    {
       this->Tail = this->Tail->Previous; //Adjusting tail to previous node
       this->Tail->Next = nullptr;
    }
    this->length--;
}

void DoublyLinkedList::PrintMyList()
{
    cout<<"\nPrinting List in Forward Direction\n";
    Node* temp;
    temp = this->Head;

    do
    {
        cout<<temp->data<<" ";
        temp = temp->Next;

    }while(temp!= nullptr);

    cout<<"\n Printing List in Reverse Direction\n";
    temp = this->Tail;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->Previous;
    }while(temp!= nullptr);
}
