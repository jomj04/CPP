// 백준 2738번 (2중포인터/2차원배열 관련)
#include <iostream>
using namespace std;

int main()
{
    unsigned short N, M;
    cin >> N >> M;
    
    // 2차원 배열 할당
    short** ptrA = nullptr;
    ptrA = new short* [N];
    for (int i = 0; i < N; i++)
        ptrA[i] = new short[M];

    // 2차원 배열 초기화
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> ptrA[i][j];
    }


    short** ptrB = nullptr;
    ptrB = new short* [N];
    for (int i = 0; i < N; i++)
        ptrB[i] = new short[M];


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cin >> ptrB[i][j];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << ptrA[i][j] + ptrB[i][j] << " ";
        cout << "\n";
    }
    
    //메모리 해제
    for (int i = 0; i < N; i++)
    {
        delete[] ptrA[i];
        delete[] ptrB[i];
    }

    delete[] ptrA;
    delete[] ptrB;

    return 0;
}
