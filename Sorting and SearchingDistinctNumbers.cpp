#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a[n];
    unordered_map<long long,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]++];
    }
    cout<<mp.size();
    return 0;

}
