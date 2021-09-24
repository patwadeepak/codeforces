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
    ll a, b; cin >> a >> b;

    if (a%b==0 || b==1){
        cout << "NO" << endl;
    }
    else{
        bool not_found = true;
        ll c;
        bool increment;
        if(b>=100000){
            c = b-1;
            increment = false;
        } 
        else{
            c = b+1;
            increment = true;
        }
        ll z = a*(b+c);
        while(not_found && c>0 && z<=1e18){
            z = a*(b+c);
            if((b+c)%b != 0){
                cout<<"YES\n";
                cout << a*b <<" "<< a*c <<" "<< z << endl;
                not_found=false;
            }
        if(increment) c++;
        else c--;
        }
        if(not_found) cout << "NO\n";
    }
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}