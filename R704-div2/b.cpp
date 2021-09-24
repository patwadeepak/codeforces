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
    int n; cin >> n;
    vi arr(n);
    map<int, int> arr_sort;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        arr_sort[arr[i]] = i;
    }

    int N = n,i;
    while(n){
        i=0;
        while(arr_sort[n] + i < N){
            cout << arr[arr_sort[n] + i] << " ";
            i++;
        }
        N -= i;
        n--;
    }
    cout << endl;    
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}