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
    int n, q; cin >> n >> q;
    vector<int> a(n);
    int count1=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1) count1++;
    }
    
    for(int i=0; i<q; i++){
        int t, x; cin >> t >> x;
        if(t==1){
            if(a[x-1] == 1){
                count1--;
                a[x-1] = 0;
            }
            else{
                count1++;
                a[x-1] = 1;
            } 
        }
        else{
            if(x <= count1) cout << "1\n";
            else cout << "0\n";
        }
    }

}

int main(){
    FastIO
    solve();
}