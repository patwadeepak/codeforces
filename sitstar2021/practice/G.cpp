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
        int n; cin >> n;        

        ll cost = 0, count = 0, total_count = 0;
        
        count = n/5;
        total_count += count;
        cost += count*5;

        count = n/3 - n/15;
        total_count += count;
        cost += count*3;

        count = n/2 - n/6 - n/10 + n/30;
        total_count += count;
        cost += count*2;

        count = n - total_count;
        cost += count;

        cout <<cost<<"\n";
    }   

    // solution end here
    return 0;
}