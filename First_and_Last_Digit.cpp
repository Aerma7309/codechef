#include<iostream>
#include<climits>
using namespace std;
int main()
{
    long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long hd = n;
        long ld = n%10;
        while(hd>=10)
        {
            hd = hd/10;
        }
        cout<<ld+hd<<"\n";
    }
    return 0;
}