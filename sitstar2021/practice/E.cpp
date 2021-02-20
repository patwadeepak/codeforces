#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    int t; cin >> t;
    while(t--){
        ll k; cin >> k;
        // k = 1 => 2
        // k = 2 => 4
        // k = 3 => 6
        // k = 4 => 9
        // k = 5 => 12
        // k = 6 => 16
        // k=even, => (k/2 + 1)**2
        // k=odd,  => ((k-1)/2 + 1)**2 + (k-1)/2 + 1

        if(k%2==0)
            cout << (k/2 + 1)*(k/2 + 1) << "\n";
        else{
            ll x = (k-1)/2 + 1;
            cout << x*(x+1) << "\n";
        }            
    }
    
    // solution end here
    return 0;
}