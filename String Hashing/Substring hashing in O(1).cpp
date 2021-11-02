
#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define MOD 1000000007
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll dp[1000001];
ll inv[1000001];

void init(string st)
{
    ll p = 31;
    ll  p_power = 1;
    inv[0] = 1;
    dp[0] = (st[0] - 'a' + 1);


    for(int i=1; i<st.size(); i++)
    {
        char ch = st[i];

        p_power = (p_power * p) % MOD;
        inv[i] = modPow(p_power, MOD - 2);

        dp[i] = (dp[i-1] + (ch - 'a' + 1)*p_power) % MOD;
    }
}

ll substringHash(int L, int R)
{
    ll result = dp[R];

    if(L > 0) result -= dp[L-1];

    result = (result * inv[L]) % MOD;

    return result;
}

int main()
{
    string st;
    ll tc, L, R;
    cin>>st;
    init(st);
    cin>>L>>R;
    cout<<substringHash(L, R)<<endl;
}
/*
   Alhamdulillah...
*/

