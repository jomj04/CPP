// 백준 15552번
#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, A, B;
	cin >> T;

	while (T > 0)
	{
		cin >> A >> B;
		T -= 1;
		cout << A + B << "\n";
	}

	return 0;
}
