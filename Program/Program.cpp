#include <iostream>

#define SIZE 10

using namespace std;

template<typename T>
class AdjacencyMatrix
{
private:
    // 정점의 개수
    int size;
    // 정점의 집합
    T vertax[SIZE];
    // 인접 행렬
    int matrix[SIZE][SIZE];

public : 
    AdjacencyMatrix()
    {
        size = 0;
        
        for (int i = 0; i < SIZE; i++)
        {
            vertex[i] = NULL;

            for (int j = 0; j < SIZE; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    
    void push(T data)
    {
        if (size >= SIZE)
        {
            cout << "Adjacency Matrix OverFlow" << endl;
        }
        else
        {
            vertex[size++] = data;
        }
    }

    void edge(int i, int j)
    {
        if (size <= 0)
        {
            cout << "Adjacency Matrix is Empty" << endl;
        }
        else if (i >= size || j > = size)
        {
            cout << "Index Out of Range" << endl;
        }
        else
        {
            matrix[i][j] = 1;
            matrix[j][i] = 1;
        }
    }

    void show()
    {

    }
};

int main()
{
    

    return 0;
}