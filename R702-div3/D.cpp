#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

void build(int l, int r, vector<int> const &arr, vector<int> &depth, int curr_depth=0){
    
    if (l > r)
        return;
    if (l==r){
        depth[l] = curr_depth;
        return;
    }
    int m = l;
    for(int i=l+1; i<=r; i++){
        if(arr[i] > arr[m]){
            m = i;
        }
    }
    depth[m] = curr_depth;
    build(l, m-1, arr, depth, curr_depth+1);
    build(m+1, r, arr, depth, curr_depth+1);
}

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;
    vector<int> depth(n);

    build(0, n-1, arr, depth);

    for(int &d : depth) cout << d << " ";
    cout << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}