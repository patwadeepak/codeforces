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
        while(true){
            if (x == 1 && y == 1)
                break;
            else{
                if (x > y){
                    x = x - y;
                }
                else{
                    y = y - x;
                }
            }
        }
    }
}