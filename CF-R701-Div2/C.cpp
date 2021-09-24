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
    while (t--){
        int x,y; cin >> x >>y;
        int count=0;
        int i=1, j=1;
        while(i<=x || j<=y){
            if (i%j==i/j){
                count++;
            }
            if(i%j > i/j){
                if(j<=y) i++;
            }
            else{
                if(i<=x) j++;
            }
        }
        cout << count << "\n";
    }    
}