#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin>>n;
    long long a[n-1],sum=0;
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long total=n*(n+1)/2;
    cout<<total-sum;
    return 0;
}