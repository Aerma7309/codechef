#include<iostream>
using namespace std;
int main()
{
    //fast cin and cout
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long t, k,count = 0;;
    cin>>t>>k;

    while(t--)
    {
        long num;
        cin>>num;
        if(num%k==0) count++;
    }
    cout<<count;
    return 0;
}