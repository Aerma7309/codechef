#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t,p;
	cin>>t;
	int A[] = {2048,1024,512,256,128,64,32,16,8,4,2,1};
	while(t--)
	{
		cin>>p;
		long temp = p, menu = 0, i = 0;
		while(temp > 0)
		{
			if(temp >=A[i])
			{
				menu = menu + temp/A[i];
				temp =temp - ( (temp/A[i])*A[i]);
				i++;
			}
			else
			{
				i++;
			}	
		}
		cout<<menu<<"\n";
	}
	return 0;
}
