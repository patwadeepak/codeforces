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
        ll n,m,p; cin >> n >> m >> p;
        bool result = false;
        
        if (p <= n*m){
            for(int i=1; i <= sqrt(p); i++){
                if(p%i==0){
                    int factor1 = i;
                    int factor2 = p/i;
                    if (max(factor1, factor2) <= max(m,n) && min(factor1, factor2) <= min(m,n)){
                        result = true;
                        break;
                    }
                }
            }
        }

        if(result) cout<< "YES\n";
        else cout << "NO\n";
    }
}