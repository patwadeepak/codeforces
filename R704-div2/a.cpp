#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

void solve(){
    ll p, a, b, c; cin >> p >> a >> b >> c;

    ll waita = a - (p%a!=0 ? p%a : a);
    ll waitb = b - (p%b!=0 ? p%b : b);
    ll waitc = c - (p%c!=0 ? p%c : c);
    
    cout << min(min(waita, waitb), waitc) << endl;
    
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}