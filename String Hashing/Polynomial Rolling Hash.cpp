
#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second


#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define mod 1000000007
using namespace std;

ll getHash(string st)
{
    ll value = 0;
    ll p = 31;
    ll p_power = 1;

    for(char ch : st)
    {
        value = (value + (ch - 'a' + 1)*p_power) % mod;
        p_power = (p_power * p) % mod;
    }

    return value;
}

int main()
{
    optimize();
    string st;
    cin>>st;
    cout << "Hash of " << st << " = "<<getHash(st)<<endl;
}

/*
Alhamdulillah...
*/

