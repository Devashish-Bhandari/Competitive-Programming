/*
Problem Link: https://www.codechef.com/COOK138C/problems/PERFPERM
Problem Name: Perfect Permutation
Problem Code: PERFPERM
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
        cin>>n>>k;
        ll arr[n];

        for(ll i=1; i<=n; i++){
            arr[i]=i;
        }
      
        for(ll i=1; i<=n; i++){
            if(i<=(n-k)){
               swap(arr[i], arr[i+1]);
            }
        }

        for(ll i=1; i<=n; i++){
            cout<< arr[i]<< " ";
        }
        cout<< endl;
    }
}
