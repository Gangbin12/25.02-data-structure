#include <iostream>

using namespace std;

template<typename T>
class SingleLinkedList
{
private:
    int size;

    struct Node
    {
        T data;
        Node* next;
    };

    Node* head;
public:

    SingleLinkedList()
    {
        size = 0;
        head = nullptr;
        currentNode 
    }
        
    void push_front(T data)
    {
        Node* newNode = new Node;

        if (head == nullptr)
        {
            head = newNode;

            newNode->data = data;
            newNode->next = nullptr;
        }
        else
        {
            newNode->data = data;
            newNode->next = head;
            
            head = newNode;
        }

        size++;
    }

    void push_back(T data)
    {
        Node* newNode = new Node;

        if (head == nullptr)
        {
            head = newNode;

            newNode->data = data;
            newNode->next = nullptr;
        }
        else
        {
            currentNode

            newNode->data = data;
            newNode->next = nullptr;

            head->next = newNode
        }
    }

};

int main()
{
    SingleLinkedList<int> singleLinkedList;

    singleLinkedList.push_front(10);
    singleLinkedList.push_front(20);
    
    singleLinkedList.push_back(10);
    singleLinkedList.push_back(20);

    return 0;
    


   // 단일 연결리스트
   // 
   //     class SingleLinkedList {};
   // 
   //           >   
   //                   Stack- Heap
   //     struct Node    head
   // data  next

    return 0;
}