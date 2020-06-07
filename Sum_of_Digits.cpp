#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int temp=n,sum=0;
        while(temp>0)
        {
            sum = sum + temp%10;
            temp = temp/10;
        }
        cout<<sum<<"\n";
    }
    return 0;
}