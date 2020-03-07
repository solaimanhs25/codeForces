#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    int one=0,zero=0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='n')
            one++;
        else if(str[i]=='z')
            zero++;
    }

    while(one--)
        cout<<"1 ";
    while(zero--)
        cout<<"0 ";

        cout<<endl;

    return 0;
}
