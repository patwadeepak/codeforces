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

string result(int const &n, vector<ll> &arr){

    if (n==1) return "YES\n";
    ll extra=0;
    for(ll i=0; i<n; i++){
        if (arr[i] >= i){
            extra = arr[i] - i;
            arr[i] = i;
            if (i < n-1) arr[i+1] += extra;
        }
        else return "NO\n";
    }
    return "YES\n";
}

void solve(){
    ll n; cin >> n;
    vector<ll> arr(n);
    
    ll sum=0;
    for(auto &x : arr) cin >> x;

    cout << result(n, arr);
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}