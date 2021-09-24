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
    
    int n , q, k; cin >> n >> q >>k;

    vector<int> arr(n);
    for(auto &x : arr) cin >> x;

    // calc flex for whoel array
    vector<int> flex(n,0);
    for(int i=0; i<n; i++){
        if (i==0){
            flex[i] = arr[i+1] - 1;
        }
        else if (i==n-1){
            flex[i] = k - arr[i-1];
        }
        else{
            flex[i] = arr[i+1] - arr[i-1] - 1;
        }
    }

    // for every query
    for(int j=0; j<q; j++){
        int l,r; cin >> l >> r;
        l--; r--;

        int len = r - l + 1;
        int count=0;
        for(int i=l; i<=r; i++){
            count += flex[i];
        }
        if(l!=0){
            count -= flex[l];
            count += arr[l+1] - 1;
        }
        if(r!=n-1){
            count -= flex[r];
            count += k - arr[r-1];
        }

        cout << count-len << "\n";
    }
}