#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        int a[100];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);

        for(int i=n-1;i>=0;i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
