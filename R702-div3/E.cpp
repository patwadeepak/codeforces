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

void solve(){
    int n; cin >> n;
    vector<pair<int,int>> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i].first;
        arr[i].second = i;
    }
    
    sort(arr.begin(), arr.end());

    ll sum=arr[0].first;
    for(int i=1; i<n; i++){
        if(sum < arr[i].first){
            arr[i-1].first = 0;
        }
        else{
            arr[i-1].first = 1;
        }
    }
    arr[n-1].first = 1;

    sort(arr.begin(), arr.end(), [](auto &left, auto &right) {
    return left.second < right.second;});

    for(auto &x : arr){
        if (x.first == 1)
            cout << x.second << " ";
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