#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,p1=0,p2=0,t1,t2;
	vector<pair<int,int>> score;
	cin>>t;
	while (t--)
	{
		cin>>t1>>t2;
		p1=p1+t1;
		p2=p2+t2;
		if(p1 > p2) score.push_back( make_pair(1,(p1-p2)) );
		else score.push_back( make_pair(2,(p2-p1)) );
	}
	auto r = max_element(score.begin(),score.end(),[](pair<int,int>& a,pair<int,int>& b){ if(a.second < b.second) return true; else return false; });
	cout<<r->first<<" "<<r->second;
	return 0;
}
