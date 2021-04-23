#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <climits>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

void solve(){
    ll n; cin >> n;
    
    if(n%2050) cout << "-1" << endl;
    else {
        ll rem = n/2050;
        ll sum = 0;
        while(rem){
            sum += rem%10;
            rem /= 10;
        }
        cout << sum << endl;
    }
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}