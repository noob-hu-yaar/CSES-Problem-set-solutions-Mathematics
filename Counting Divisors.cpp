

#include <bits/stdc++.h> 
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sp(x) fixed<<setprecision(x)
#define p_q priority_queue
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int con = 1e6+1;
vector<int> ans(con,0);
ll t;


int main()
{
    fast_io;
        for(ll i=1;i<con;i++)
    {
        for(ll j=i;j<con;j+=i)
        ans[j]++;
    }

    cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    cout<<ans[n]<<endl;
}

return 0;
}
