/*
Problem Link: https://www.codechef.com/START25C/problems/DATATYPE
Problem Name: Fit in Data Type
Problem Code: DATATYPE
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
        int n, x;
        cin>>n>>x;
        if (x>n){
            while(x>n)
                x = x-n-1;
            cout<<x<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
}
