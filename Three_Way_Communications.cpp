#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class chef {
	public:
	int x,y;
};

bool inrange(chef c1, chef c2,int r)
{
	int x = c1.x -c2.x, y = c1.y -c2.y;
	if(sqrt(x*x + y*y) <= r) return true;
	else return false;
};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,r;
	cin>>t;
	while (t--)
	{
		cin>>r;
		vector<chef> C(3);
		for (int i = 0; i < 3; i++)
		cin>>C[i].x>>C[i].y;
		if(inrange(C[0],C[1],r) && ( inrange(C[1],C[2],r) || inrange(C[0],C[2],r))) cout<<"yes\n";
		else if(inrange(C[0],C[2],r) && ( inrange(C[1],C[2],r) || inrange(C[0],C[2],r)) ) cout<<"yes\n";
		else cout<<"no\n";
	}
	
	return 0;
}
