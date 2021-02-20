#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO

    ll t; cin >> t;
    while(t--){
        ll n,k; cin >> n >>k;
        if(n%2==0){
            ll catb = k%n;
            if(catb == 0) catb=n;
            if(k==1) catb=1;
            cout << catb << "\n";
        }
        else{
            ll skips = n/2;

            ll val = (k-1)/skips;

            ll catb = (val+k)%n;

            if(catb==0) catb=n;
            cout << catb << "\n";
        }
    }
}