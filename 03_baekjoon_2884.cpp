// 백준 2884번
#include <iostream>
using namespace std;

int main()
{
	int H, M;
	cin >> H >> M;

	if (M >= 45)
		M = M - 45;

	else if (M < 45)
	{
		M = M + 60 - 45;
		if (H != 0)
			H = H - 1;
		else if (H == 0)
			H = 23;
	}

	cout << H << " " << M;

	return 0;
}
