#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vi h(n);
        for(int i=0; i<n; i++)  cin >> h[i];
        int result = -1;
        while(k--){
            int i = 0; bool not_settled = 1;
            while(not_settled){
                if(h[i]>=h[i+1]) {
                    i++;
                    if(i+1>=n){
                        result = -1;
                        break;
                    }
                }
                else {
                    h[i]++;
                    result = i+1;
                    not_settled = 0;
                }
            }
        }
        cout << result << "\n";
    }

    // solution end here
    return 0;
}