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

ll pick(vi &r, vi &b, int r_start, int r_end, int b_start, int b_end){

    if(r_start > r_end){
        if(b_start <= b_end)
            return b[b_start];
        else 
            return 0;
    }
    if(b_start > b_end){
        if(r_start <= r_end)
            return r[r_start];
        else 
            return 0;
    }

    ll sumr=0, sumb=0;
    sumr = r[r_start] + pick(r, b, r_start+1, r_end, b_start, b_end);
    sumb = b[b_start] + pick(r, b, r_start, r_end, b_start+1, b_end);

    return max((ll)0, max(sumr, sumb));
}

void solve(){
    int n; cin >> n;
    vector<int> r(n);
    for(auto &x : r) cin >> x;

    int m; cin >> m;
    vector<int> b(m);
    for(auto &x : b) cin >> x;

    cout << pick(r, b, 0, n-1, 0, m-1) << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}

/*
6 -5 7 -3
2 3 -4     //13

6  2  -5   3  7 -3 -4

6  2   3  -4 -5  7 -3
6  8  11   7  2  9  6




*/