#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> price;
    vector <int>::iterator it;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>> num;
        price.push_back(num);
    }
    sort(price.begin(),price.end());
    int q;
    cin>>q;
    int shop[q],coin;
    for(int i=0;i<q;i++)
    {
        cin>>coin;
        it=upper_bound(price.begin(),price.end(),coin);
        shop[i]=distance(price.begin(),it);
    }
    for(int i=0;i<q;i++)
    {
        cout << shop[i] << endl;
    }
}
