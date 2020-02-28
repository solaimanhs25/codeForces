#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int customer=0;

        if(a>0)
        {
            customer++;
            a--;
        }
        if(b>0)
        {
            customer++;
            b--;
        }
        if(c>0)
        {
            customer++;
            c--;
        }
        if(a>=b && a>=c)
        {
            if(a>0 && b>0)
            {
                customer++;
                a--;
                b--;
            }
            if(a>0 && c>0)
            {
                customer++;
                a--;
                c--;
            }
            if(b>0 && c>0)
            {
                customer++;
                b--;
                c--;
            }
        }
        else if(b>=a && b>=c)
        {
            if(b>0 && c>0)
            {
                customer++;
                c--;
                b--;
            }
            if(b>0 && a>0)
            {
                customer++;
                a--;
                b--;
            }
            if(a>0 && c>0)
            {
                customer++;
                a--;
                c--;
            }
        }
        else
        {
            if(c>0 && b>0)
            {
                customer++;
                c--;
                b--;
            }
            if(c>0 && a>0)
            {
                customer++;
                a--;
                c--;
            }
            if(a>0 && b>0)
            {
                customer++;
                b--;
                a--;
            }
        }

        if(a>0 && b>0 && c>0)
        {
            customer++;
        }

        cout<<customer<<endl;
    }
    return 0;
}
