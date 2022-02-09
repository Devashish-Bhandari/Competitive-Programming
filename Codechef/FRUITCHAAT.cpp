/*
Problem Link: https://www.codechef.com/START25C/problems/FRUITCHAAT
Problem Name: FRUITCHAAT
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
    int t; cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        cout<< min(x/2, y)<<endl;
    }
}
