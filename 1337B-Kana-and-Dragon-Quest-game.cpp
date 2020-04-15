
#include<iostream>
using namespace std;
int main()
{
    int T,x,n,m;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>> x>>n>>m;
        while(x>20 && n>0)
        {
            x=x/2+10;
            n--;
        }
        x=x-m*10;
        if(x<=0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
