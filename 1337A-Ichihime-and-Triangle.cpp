#include<iostream>
using namespace std;
int main()
{
    int T,a,b,c,d,x,y,z;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>a>>b>>c>>d;
        x=b;
        z=c;
        y=b;
        if(y<=z-x)
        {
            y=(z-x)+1;
        }
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
