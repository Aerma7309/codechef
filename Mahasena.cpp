#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,temp,even=0,odd=0;
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cin>>temp;
		if(temp%2 == 0) even++;
		else odd++;
	}
	if(even>odd) cout<<"READY FOR BATTLE";
	else cout<<"NOT READY";
	return 0;
}
