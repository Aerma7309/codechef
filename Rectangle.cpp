#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,A[4];
    cin>>t;
    while(t--)
    {
        for(int i=0;i<4;i++) cin>>A[i];
        sort(begin(A),end(A));
        if(A[0]==A[1] && A[2]==A[3]) std::cout <<"YES" << std::endl;
        else cout<<"NO"<<endl;
    }
	return 0;
}
