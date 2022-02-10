/*
Problem Link: https://www.codechef.com/problems/TOWERTOP
Problem Name: Building Towers
Problem Code: TOWERTOP
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
        ll x, m;
        cin>>x>>m;
        ll temp= ceil(log2(x))+1;
        if(m<temp){
            cout<<0<<endl;
        }
        else{
            cout<<m-temp+1<<endl;
        }
        cout<<endl;
    }
}
