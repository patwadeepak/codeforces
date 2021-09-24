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
        int n;
        cin >> n;
        // y = m - 1 => y = o - 1 -1 = o - 2
        // m = o - 1
        // y + m + o = N
        // o - 2 + o - 1 + o = N
        // 3o - 3 = N
        // o = N/3 + 1
        if(n>2 && n%3==0){
            int a = n/3;
            cout <<a-1<<" "<<a<<" "<<a+1<<"\n";
        }
        else
            cout << "-1\n";
    }

    // solution end here
    return 0;
}