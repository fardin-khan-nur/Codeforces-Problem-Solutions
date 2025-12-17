#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int K;
		cin >> K;

		for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3) continue;
			if (--K == 0)
			{
				cout << i << '\n';
				break;
			}
		}
	}
}