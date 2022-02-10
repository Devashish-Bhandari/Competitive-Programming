/*
problem link: https://codeforces.com/problemset/problem/313/A
problem name: 313A. Ilya and Bank Account
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
 
int main()
{
    volatile()
    int n;
    cin >> n;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int a = n/10; 
        int b = (n/100)*10+ n%10;
        cout<< max(a, b) << endl;
    }
    return 0;
}
