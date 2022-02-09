/*
Problem Link: https://www.codechef.com/START25C/problems/EQUALMEX
Problem Name: Equal MEX 
Problem Code: EQUALMEX
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
        ll x[2*n];
        ll s[2*n]={0};
        
        for(ll i=0; i<2*n; i++){
            cin>>x[i];
            s[x[i]]++;
        }

        ll count= 0;

        for(ll i=0; i<2*n; i++){
            if(s[i]==0 and i== count){
                cout<<"YES"<<endl;
                break;
            }
            else if(s[i]>=2){
                count++;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                break;
            } 
        }        
    }
}
