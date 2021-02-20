#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

void solve(){
    int n; cin >> n;
    vector<int> a(n);
    vector<int> c = {0, 0, 0};
    for(auto &x : a){
        cin >> x;
        c[x%3]++;
    }
    int k = n/3;
    int count=0;

    int i=0,diff=0;
    while(c[0]!=c[1] || c[1]!=c[2]){
        if(c[i%3] > k){
            diff =  c[i%3] - k;
            count += diff;
            c[i%3] = k;
            c[(i+1)%3] += diff;
        }
        i++;
    }

    cout << count << "\n";
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}