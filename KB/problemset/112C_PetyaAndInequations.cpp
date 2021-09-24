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
    
    ll n, x, y;
    cin >> n >> x >> y;
    ll a = (n-1) + pow(y-n+1, 2);
    if (a >= x && y>=n){
        for(int i=0; i<n-1; i++){
            cout <<"1\n";
        }
        cout << y-n+1;
    }
    else
        cout << "-1";
}