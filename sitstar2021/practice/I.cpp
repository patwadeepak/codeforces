#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    
    // friends = 3, cafe time = 2
    // 1 2 3 4 5 6
    // -----
    //         ---
    //   ---
    //     -----

    ll n, m; cin >> n >> m;
    vector<ll> arr(n,0);
    for(ll i=0; i<n; i++){
        ll l, t; cin >> l >> t;
        for(ll j=0; j<t; j++){
            arr[l+j]++;
        }
    }

    ll sum = 0;
    for(ll i=0; i<=m; i++)
        sum += arr[i];

    ll max_sum = -1;
    ll end_time = 0;
    for(ll i=m; i<n; i++){
        if (sum > max_sum){
            max_sum = sum;
            end_time = 
        }
    }

    // solution end here
    return 0;
}