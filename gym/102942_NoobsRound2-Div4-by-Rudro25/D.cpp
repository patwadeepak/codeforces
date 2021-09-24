#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

string toBinary(int n){
    string r;
    while(n){
        r = (n%2==0 ? "0" : "1") + r;
        n/=2;
    }
    return r;
}

void solve(){
    int a,b;
    cin >> a >> b;
    // string ab = toBinary(a^b);
    cout << (((a^b)==(a+b)) ? "No" : "Yes");
    cout << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}