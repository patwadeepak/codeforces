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
    vector<vector<int>> a;
    for(int i=1; i<=n; i++){
        b.push_back({});
        a.push_back({});
        for(int j=1; j<=m; j++){
            int x; cin >> x;
            b[i-1].push_back(x);
            a[i-1] = {x, i, j};
        }
    }

    sort(a.begin(), a.end());

    int temp=0;
    int large = n*m-1, small = 0;
    vi small_used;

    for(int j=1; j<=m; j++){
        bool row_done= true;
        while(row_done){

            bool small_unused = true;
            for(int s=0; s<small_used.size(); s++){
                if(small_used[s]==small){
                    small_unused = false;
                    break;
                }
            }

            if(a[large][1] != a[small][1] && small_unused){
                small_used.push_back(small);
                temp = b[a[small][1]-1][a[small][2]-1];
                b[a[small][1]-1][a[small][2]-1] = b[a[large][2]-1][a[small][1]-1];
                b[a[large][2]-1][a[small][1]-1] = temp;
                row_done = false;
            }
            small++;
            if(!row_done){
                small=0;
                large++;
            }
        }
    }

    cout << endl;

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