#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <climits>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

void solve(){

    int n, m; cin >> n >> m;

    vector<vector<int>> b;
    set<vector<int>> a;
    for(int i=1; i<=n; i++){
        b.push_back({});
        for(int j=1; j<=m; j++){
            int x; cin >> x;
            b[i-1].push_back(x);
            a.insert({x, i, j});
        }
    }

    int temp=0;
    vi col_done;
    for(int j=1; j<=m; j++){
        bool row_done= true;
        auto small_it = a.begin();
        auto large_it = a.rbegin();
        auto small = *small_it;
        auto large = *large_it;
        bool col_not_done = true;
        for(int k=0; k<col_done.size(); k++)
            if(large[2] == col_done[k]) col_not_done = false;
        col_done.push_back(large[2]);
        while(row_done && col_not_done){
            auto small = *small_it;
            auto large = *large_it;
            if(small[1] != large[1]){
                temp = b[small[1]-1][small[2]-1];
                b[small[1]-1][small[2]-1] = b[small[1]-1][large[2]-1];
                a.erase({b[small[1]-1][large[2]-1], small[1], large[2]});
                a.insert({b[small[1]-1][large[2]-1], small[1], small[2]});
                b[small[1]-1][large[2]-1] = temp;
                a.erase(small);
                a.erase(large);
                break;
            }
            else {
                small_it++;
            }
        }
    }

    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}