#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,count,i;
	cin>>t;
	while (t--)
	{
		cin>>n;
		count = 0;
		i=1;
		while(n>=0)
		{
			n-=i;
			i++;
			count++;
		}
		cout<<count-1<<"\n";
	}
	return 0;
}
