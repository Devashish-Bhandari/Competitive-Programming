/*
problem link:https://codeforces.com/problemset/problem/466/A
problem name: 466A. Cheap Travel
status:ACCEPTED
*/

#include <bits/stdc++.h>
using namespace std;
#define volatile() ios::sync_with_stdio(0); cin.tie(0);

int main(){
    volatile()
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int moneySum;
    if (m*a>b){
        moneySum= (n/m)*b+min((n%m)*a, b);
    }
    else{
        moneySum= n*a;
    }
    cout<< moneySum<<endl;
}
