#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int zero=0;
    int one=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='0'){
            zero++;
            one=0;
            if(zero==7)
                break;
        }
        else if(str[i]=='1'){
            one++;
            zero=0;
            if(one==7)
                break;
        }
    }
    if(zero==7||one==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
