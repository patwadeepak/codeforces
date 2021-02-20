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
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        if (x1 == x2)
            x4 = x3;
        else if (x1 == x3)
            x4 = x2;
        else 
            x4 = x1;
        
        if (y1 == y2)
            y4 = y3;
        else if (y1 == y3)
            y4 = y2;
        else 
            y4 = y1;

        cout << x4 << " "<<y4 << "\n";
    }

    
}