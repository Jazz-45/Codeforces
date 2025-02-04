#include<bits/stdc++.h>
using namespace std;
# define ll long long 

int main(){

    ll n,ans = 0;
    cin>>n;
    ll a = 1;
        while(a <= n) {
            a *= 10;
        }
        a /= 10;
        ll b = a;
        while(b <= n) {
            b += a;
        }
        ans = b - n;

        cout<<ans<<endl;
        return 0;
}