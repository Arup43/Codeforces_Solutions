#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
    {
        cin>> price[i];
    }
    sort(price, price+n);
    int q;
    cin>> q;
    int l,r,m;
    int shop[q],coin;
    for(int i=0;i<q;i++)
    {
        l=0;
        r=n-1;
        cin>>coin;
        while(l<=r)
        {
            m=l+(r-l)/2;
            if(price[m]==coin)
            {
                break;
            }
            else if(price[m]>coin)
            {
                r=m-1;
            }
            else if(price[m]<coin)
            {
                l=m+1;
            }
        }
        if(price[m]<coin)
        {
            shop[i]=m+1;
        }
        else if(price[m]==coin)
        {
            while(1)
            {
                if(price[m+1]==coin)
                {
                    m++;
                }
                else
                {
                    break;
                }
            }
            shop[i]=m+1;
        }
        else
        {
            shop[i]=m;
        }
    }
    for(int i=0;i<q;i++)
    {
        cout << shop[i] << endl;
    }
    return 0;
}
