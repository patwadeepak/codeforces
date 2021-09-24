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

// memoization cache or tablulation results usually stored
// outside all the function to avoid having to pass it everywhere.
map<ll, ll> cache;

int fib(ll n){
    if(n<=1) return n;

    if(cache.count(n) > 0) return cache[n];
    
    cache[n] = fib(n-1) + fib(n-2);
    return cache[n];
}

int main(){
    FastIO
    ll n; cin >> n;
    cout << fib(n);
}