#ifndef DOUBLYLINKED_LIST_H
#define DOUBLYLINKED_LIST_H

struct Node
{
    int data;
    Node* Next;
    Node* Previous;
    Node(int d)
    {
        data = d;
        Next = nullptr;
        Previous = nullptr;
    }

};

class DoublyLinkedList
{
    public:
    int length;
    Node* Head;
    Node* Tail;
    DoublyLinkedList();
    void AddNodeToEnd (Node*);
    void DeleteNodeFromEnd(void);
    void PrintMyList(void);
};



#endif // DOUBLYLINKED_LIST_H
