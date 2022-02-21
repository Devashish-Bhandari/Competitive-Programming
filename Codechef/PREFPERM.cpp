/*
Problem Link: https://www.codechef.com/COOK138C/problems/PREFPERM
Problem Name: Prefix Permutation 
Problem Code: PREFPERM
Contest: COOK138C 
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
        ll n,k;
        cin>>k>>n;
        
        vector<ll> p;
        
        for(ll i=0; i<n; i++){
            ll temp;
            cin>>temp;
            p.pb(temp);
        }
        
        vector<ll> q;
        ll pr=0;
        ll ne = 0; 
        
        for(ll i=0;i<n;i++){
            pr=ne;
            ne=p[i];
            for(ll j=ne;j>pr;j--) 
            q.pb(j);
        }

        for(ll i=0; i<q.size(); i++)
         {cout<<q[i]<<" ";

        }  
        
        cout<<endl;
         
    }
}
