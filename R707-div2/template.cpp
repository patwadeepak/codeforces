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
    vector<int> a(n), b(n), tm(n);
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];
    for(auto &x : tm) cin >> x;

    int time = 0, travel_time=0, curr_time=0, min_wait=0, b_hat=0, bi_1, ai_1;
    for(int i=0; i<n; i++){
        if(i==0){
            ai_1 = 0; bi_1=0;
        }
        else{
            ai_1 = a[i-1]; bi_1 = b[i-1];
        }
        travel_time = a[i] - bi_1 + tm[i];
        time += travel_time;

        if(i!=n-1){
            curr_time = time;
            min_wait = ceil((b[i] - a[i])/2.0);
            b_hat = curr_time + min_wait;
            if(b[i] >= b_hat) time += b[i] - curr_time;
            else time += min_wait;
        }
    }
    cout << time << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}