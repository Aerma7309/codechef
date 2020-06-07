#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int next,temp,i,flag;
	cin>>next;
	do
	{
		flag = 0;
		vector<int> V;
		V.push_back(-1);
		for(i = 0; i < next; i++)
		{
			cin>>temp;
			V.push_back(temp);
		}
		for(i = 1; i <= next; i++)
		{
			auto it = find(V.begin(),V.end(),i);
			if(V[i] != ( it - V.begin())) 
			{
				flag = 1;
				break;
			}
		}
		
		if(flag == 1) cout<<"not ambiguous\n";
		else cout<<"ambiguous\n";
		cin>>next;
	}while(next != 0);
	return 0;
}
