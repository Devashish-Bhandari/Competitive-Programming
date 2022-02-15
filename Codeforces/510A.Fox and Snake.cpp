/*
problem link: https://codeforces.com/problemset/problem/510/A
problem name: 510A. Fox and Snake
status:ACCEPTED
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
    ll n, m;
    cin>>n>>m;
    for (int j=1; j<=n; j++){
        for (int i=1; i<=m; i++){
            if(j%2==1){
                cout<<"#";
            }
            else if(j%2==0 and j%4!=0){
                if (i==m){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
            else{
                if (i==1){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
 
        }
        cout<<endl;
    }
}
