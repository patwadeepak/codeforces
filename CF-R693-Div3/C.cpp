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

unordered_map<ll, ll> cache;

ll score(ll pos, vi &arr){
    if(cache.count(pos)) return cache[pos];
    if(pos > arr.size()) return 0;
    cache[pos] = score(pos+arr[pos-1], arr) + arr[pos-1];
    return cache[pos];
}

void solve(){
    cache.clear();
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    vector<ll> all_scores;
    for(ll i=1; i<=a.size(); i++){
        all_scores.push_back(score(i, a));
    }
    cout << *max_element(all_scores.begin(), all_scores.end()) << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}