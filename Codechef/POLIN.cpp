/*
Problem Link: https://www.codechef.com/START25C/problems/POLIN
Problem Name: Points and Lines
Problem Code: POLIN
Status: ACCEPTED
*/

#include <bits/stdc++.h>
using namespace std;
#define volatile() ios::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define pb push_back
constexpr ll mod = 1000000007;

/* ADD UTIL */
long long fastP(long long a, long long b, long long modulus){
    long long res = 1;
    while (b > 0){
    if (b & 1)
        res = (res * a) % modulus;
    a = (a * a) % modulus;b = b >> 1;
    }
    return res;
}

int main(){
    volatile()
    ll t; cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x[n], y[n];

        for(ll i=0; i<n; i++){
            cin>>x[i]>>y[i];
        }
        
        set<ll> s1(x, x+n);
        set<ll> s2(y, y+n);

        cout<< (s1.size()+ s2.size())<<endl;     
    }
}
