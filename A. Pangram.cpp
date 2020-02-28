#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string str;
    cin>>str;

    map<char,int>m;

    int i;

    for( i=0;str[i]!='\0';i++)
    {
        m[tolower(str[i])]++;
    }
  int c=0;
  for(char i='a';i<='z';i++){
    if(m[i]==0){
        c++;
    }
  }

  if(c!=0)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;

    return 0;
}
