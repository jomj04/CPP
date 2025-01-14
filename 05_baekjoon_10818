// 백준 10818번 (최대최소 관련)
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	unsigned int N;
	cin >> N;
	int* arr = new int[N];
	int maxVal, minVal;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	maxVal = *max_element(arr, arr + N);
	minVal = *min_element(arr, arr + N);

	cout << minVal << " " << maxVal;
	return 0;
}
