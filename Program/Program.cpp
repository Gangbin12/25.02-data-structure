#include <iostream>

#define SIZE 6

using namespace std;

template<typename KEY, typename VALUE>
class HashTable
{
private:
    struct Node
    {
        KEY key;
        VALUE value;

        Node* next;
    };

    struct Bucket
    {    // 버킷 카운트 변수
        int count;
        // 헤드로 연결하기 위해 포인트변수
        Node* head;
    };


    Bucket bucket[SIZE];
public:
    HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            bucket[i].count = 0;
            bucket[i].head = nullptr;
        }
    }

    // 문자, 정수, 실수는 알아서 작동함
    // const char * 는 템플릿 특수화가 필요함
    template <typename T>
    const int & HashFunction(T key)
    {
        unsigned int hashIndex = (int)key % SIZE;

        return hashIndex;
    }

    template<>
    const int & HashFunction(const char * key)
    {
        int hash = 0;

        for (int i = 0; i < strlen(key); i++)
        {
            hash += key[i];
        }

        int hashIndex = hash % SIZE;

        return hashIndex;
    }

    Node* CreateNode(KEY key, VALUE value)
    {
        Node* newNode = new Node;

        newNode->key = key;
        newNode->value = value;
        newNode->next = nullptr;

        return newNode;
    }

    void Insert(KEY key, VALUE value)
    {
        //해시 함수를 통해서 값을 받는 임시 변수
        int hashIndex = HashFunction(key);

        // 새로운 노드 생성
        Node* newNode = createNode(key, value);

        // 노드가 1개라도 존재하지 않는다면
        if (bucket[hashIndex].count == 0)
        {
            // bucket[hashIndex]의 head 포인터가 newNode를 가리키게 합니다
            bucket[hashIndex].head = newNode;
        }
        else
        {
            newNode->next = bucket[hashIndex].head;

            bucket[hashIndex].head = newNode;
        }
        
        // bucket[hashIndex]의 count를 증가시킵니다.
        bucket[hashIndex].count++;
    }

    ~HashTable()
    {
        for (int i = 0; i < SIZE; i++)
        {
            Node* deleteNode = bucket[i].head;
            Node* nextNode = bucket[i].head;

            if (bucket[i].head == nullptr)
            {
                continue;
            }
            else
            {
                while (nextNode != nullptr)
                {
                    nextNode = deleteNode->next;

                    delete deleteNode;

                    deleteNode = nextNode;
                }
            }
        }
    }
};

int main()
{
    HashTable<const char*, int> hashtable;

    hashtable.Insert("Sword", 10000);
    hashtable.Insert("Armor", 5000);

     return 0;
}
