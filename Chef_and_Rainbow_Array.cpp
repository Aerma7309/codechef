#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i< n; i++) cin>>a[i];
	    int i = 0,j=n-1;
	    bool flag = true;
		if (a[i] == 1 && a[n/2] == 7)
		{
			while (j > i)
			{
				if (a[j] != a[i] || (a[i + 1] - a[i]) > 1 || a[i] > 7)
				{
					flag = false;
					break;
				}
				i++;
				j--;
			}
		}
		else flag = false;
	    if(flag) cout<<"yes\n";
	    else cout<<"no\n";

	}
	return 0;
}
