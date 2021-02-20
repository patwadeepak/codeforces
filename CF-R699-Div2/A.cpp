#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    
    ll t; cin >> t;
    while(t--){
        ll x, y; cin >> x >> y;
        string s; cin >> s;
        ll R=0, L=0, U=0, D=0;
        for(auto x : s){
            if (x=='R') R++;
            else if (x=='L') L++;
            else if (x=='U') U++;
            else if (x=='D') D++;
        }
        bool x_side = false, y_side = false;

        if ((x<0 && L>=-x) || (x>0 && R>=x) || x==0) x_side = true;
        if ((y<0 && D>=-y) || (y>0 && U>=y) || y==0) y_side = true;

        if (x_side && y_side) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }

    // solution end here
    return 0;
}