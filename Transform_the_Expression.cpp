#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	stack<char> S;
	cin>>t;
	while(t--)
	{
		string A,B;
		cin>>A;
		for (int i = 0; i < A.size(); i++)
		{
			char temp = A[i];
			if(temp == '(') continue;
			else if(temp <= 'z' && temp >= 'a') B.push_back(temp);
			else if (temp == ')')
			{
				B.push_back(S.top());
				S.pop();
			}
			else S.push(temp);
		}	
		cout<<B<<"\n";
	}
	return 0;
}
