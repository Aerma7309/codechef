#include<iostream>
#include<vector>
int main()
{
	using namespace std;
	int t;
	cin >> t;
	for (int T = 0; T < t; T++)
	{
		int n;
		cin >> n;
		vector<int>a;
		int count = 0;
		a.push_back(1);
		for ( int i=2;i <= n; i++)
		{
			int temp = 0, m = 0;
			while (m <= count)
			{
				temp += a[m] * i;
				a[m] = temp % 10;
				temp = temp / 10;
				m++;
			}
			while (temp>0)
			{
				a.push_back(temp % 10);
				temp = temp / 10;
				count++;
			}

		}
		
		for (int j = a.size()-1; j >= 0; j--)
		{
			cout << a[j];
		}
		cout << endl;
	}
}