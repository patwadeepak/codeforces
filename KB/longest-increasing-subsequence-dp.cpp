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

/*
3
4
3 10 2 1 20
3
3 10 20
2
3 2
1
3 or 2
6
50 3 10 7 40 80
3 7 40 80
*/ 

int lis(vi arr, vi &lis_arr){
    
    
    for(int i=1; i<arr.size(); i++){
        for(int j=0; j<=i; j++){
            if(arr[j] < arr[i] && lis_arr[j] >= lis_arr[i]){
                lis_arr[i] = 1 + lis_arr[j];
            }
        }
    }
    return *max_element(lis_arr.begin(), lis_arr.end());
}

void solve(){
    int n; cin >> n;
    vi lis_arr(n,1);
    // for(int i=0; i<n; i++) lis_arr.push_back(1);
    vi arr(n);
    for(auto &x : arr) cin >> x;
    cout << lis(arr, lis_arr) << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}