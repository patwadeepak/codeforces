#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO

    int t; cin >> t;
    while(t--){
        ll x; cin >> x;
        ll cubert = floor(cbrt(x));
        ll b = pow(cubert, 3);
        ll val = x - b;
        string result = "NO";
        while(val<=b && val!=0){
            if( pow(round(cbrt(val)), 3) == val){
                result = "YES";
                break;
            }
            cubert--;
            b = pow(cubert, 3);
            val = x - b;
        }
        cout << result << "\n";
    }
}