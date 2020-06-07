#include<iostream>
using namespace std;
int cal_tri(int i){ if(i < 4) return 0;
return ((i-2)/2)+cal_tri(i-2);};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,b;
	cin>>t;
	while (t--)
	{
		cin>>b;
		cout<<cal_tri(b)<<"\n";
	}	
	return 0;
}
