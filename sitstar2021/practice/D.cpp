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
        vi a(3), b(3);
        for (int i=0;i<3;i++) cin >> a[i];
        for (int i=0;i<3;i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int max_profit=0;
        for(int i=0;i<3;i++){
            max_profit += a[i]*b[i];
        }
        cout << max_profit<<"\n";
    }
    
    // solution end here
    return 0;
}