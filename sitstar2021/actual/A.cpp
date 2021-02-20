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
        int x, y; cin >> x >> y;
        int elevator = (y-1)*5 + (x-1)*5;
        int stairs   = 20*(x-1);
        int result = 0;
        if (stairs < elevator)
            result = stairs;
        else
            result = elevator;
        
        cout << result <<"\n";
    }

}