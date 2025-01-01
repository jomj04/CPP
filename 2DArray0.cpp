#include <iostream>
using namespace std;

int main()
{
    unsigned short N, M;
    cin >> N >> M;
    
    // Dynamic Allocation of 2D Array
    short** ptrA = nullptr;
    ptrA = new short* [N];
    for (int i = 0; i < N; i++)
        ptrA[i] = new short[M];

    // Initialization of 2D Array
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> ptrA[i][j];
    }

    // memory release
    for (int i = 0; i < N; i++)
        delete[] ptrA[i];
  
    delete[] ptrA;
    return 0;
}
