/*
Problem Link: https://www.codechef.com/COOK138C/problems/HOLIDAYS
Problem Name: Lazy Salesman
Problem Code: HOLIDAYS
Contest: COOK138C
Status: ACCEPTED
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll cn=0;
        ll sm=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }  
        sort(a,a+n);
        reverse(a,a+n);
        // after sorting
        for(ll i=0;i<n;i++){
            sm+=a[i];
            cn++;    
            if(sm>=k){
                break;
            }
        }
        
        cout<<n-cn<<'\n';
    }
    
}
