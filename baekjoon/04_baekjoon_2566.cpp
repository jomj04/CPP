// 백준 2566번 (최대,최소값 다룰때 자주 쓸 알고리즘, 2차원 배열에서의 최대값)
#include <iostream>
using namespace std;

int main()
{
    unsigned short mat[9][9] = { NULL };
	short maxVal = mat[0][0], row = 1, col = 1;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
			cin >> mat[i][j];
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (mat[i][j] > maxVal)
			{
				maxVal = mat[i][j];
				row = i;
				col = j;
			}
		}
	}

	cout << maxVal << "\n" << row + 1 << " " << col + 1;
    return 0;
}
