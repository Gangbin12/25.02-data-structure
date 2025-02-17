#include <iostream>

using namespace std;

template<typename T>
class DoubleLinkedList
{
private :
	struct Node
	{
		T data;
		Node* next;
		Node* previous;
	};

	Node * head;
	Node * tail;

	int size;
public:

	DoubleLinkedList()
	{
		head = nullptr;
		next = nullptr;
		size = 0;
	}

	void push_front(T data)
	{
		Node* newNode = new Node;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
			newNode->data = data;
			newNode->next = nullptr;
			newNode->previous = nullptr;
		}
		else
		{
			newNode->data = data;
			newNode->next = head;

			tail = newNode;
		}
	}
};


int main()
{
   

	return 0;
}