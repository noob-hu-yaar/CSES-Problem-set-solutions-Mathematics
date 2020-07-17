

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
vector<int> freq(con,0);

int main()
{

    fast_io;

    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        freq[x]++;
    }

    for(ll i=con;i>=0;i--)
    {
        ll count = 0;
        for(ll j=i;j<con;j+=i)
        {
            count += freq[j];
        }

        if(count > 1)
        {
            cout<<i<<endl;
            break;
        }
    }

return 0;
}
