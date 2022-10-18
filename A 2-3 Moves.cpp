#include<bits/stdc++.h>
#define endl "\n"
#define pi 3.141592653589793238
#define yes "YES\n"
#define no "NO\n"
#define ll long long int
#define vin(arr) for(ll i=0;i<arr.size();i++)cin>>arr[i];
using namespace std;




void sol()
{
    ll n;
    cin>>n;
    if(n==1)cout<<2<<endl;
    else
    {
        ll ans=(n+2)/3;
        cout<<ans<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}

