#include <iostream>
#include <queue>

#define SIZE 6

using namespace std;
 
class PrioityQueue
{

};

int main()
{
    priority_queue<int> priorityQueue;

    priorityQueue.push(30);
    priorityQueue.push(2);
    priorityQueue.push(50);
    priorityQueue.push(40);

    while (priorityQueue.empty() == false)
    {
        cout << priorityQueue.top() << " ";

        priorityQueue.pop();
    }

    return 0;
}
