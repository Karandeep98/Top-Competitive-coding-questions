// Question Link: https://www.texspert.com/2020/08/path-through-graph-codevita-9-solution.html

#include <iostream>

using namespace std;

int lfactor(int n)
{
    for(int i=n/2;i>0;--i)
    {
        if(n%i==0)
            return i;
    }
return 1;
}

int main()
{
    int a,b;
    bool status;
    cin>>a>>b;
    if(a==b)
        cout<<0;
    else
    {
        int c = max(a,b);
        int d = min(a,b);
        int count=0;
        while(true)
        {
            if(c == 1)
            {
                status = false;
                break;
            }
            if(lfactor(c) == d)
            {
                status = true;
                break;
            }
            c = lfactor(c);
            count+=1;
        }
        if(status == true)
            cout<<count+1;
        else
        {
            while(true)
            {
                if(d == 1)
                    break;
                d = lfactor(d);
                count+=1;
            }
            cout<<count;
        }
    }

    return 0;
}

