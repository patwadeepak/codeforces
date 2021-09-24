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
    int m, n;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int dropped_curr = 0, dropped_max=0, k=0;
    for(int i=0; i < m; i++){
        for(int j=k; j<n; j++){
            if(dropped_curr > dropped_max) dropped_max = dropped_curr;
            if(t[i] == s[j]){
                if(j+1 > n || t[i] == s[j+1]){
                    dropped_curr++;
                }
                else{
                    dropped_curr=0;
                    k = j+1;
                    break;
                } 
            }
            else dropped_curr++;
        }
    }
    cout << dropped_max + 1 << endl;
}

int main(){
    FastIO
    solve();
}