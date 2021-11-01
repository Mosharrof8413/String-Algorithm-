/*
 Problem Link :
 */

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string T, P;
int LP, LT;

bool match(int L, int R)
{
    for(int i=0; i<LP; i++)
        if(T[L+i] != P[i]) return false;

    return true;
}

int main()
{
    int t;
    cin>>t;

    cin.ignore();

    while(t--)
    {
        getline(cin, T);
        getline(cin, P);
        LT = T.size();
        LP = P.size();

        for(int L=0, R=LP-1; R<LT; L++, R++)
            if(match(L, R))
                cout<<L<<" ";

        cout<<endl;
    }
}

//Alhamdulillah..


