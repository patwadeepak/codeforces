#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    ll n; cin >> n;
    ll num=0;
    ll divisor = 2 << (n-1);
    int i = 1;
    bool found = false;
    while(i <= divisor-1){
        string s = bitset<18>(i).to_string();
        string w = "";
        w = s.substr(18-n, n);
        num=0;
        for(int j=0;j<n;j++){
            if (w[j] == '1')   num += 2*pow(10, n-j-1);
            else    num += 1*pow(10, n-j-1);
        }
        if (num%divisor==0){
            cout << num << "\n";
            found = true;
            break;
        }
        i++;
    }
    
    if(!found) cout << "-1\n";
    // solution end here
    return 0;
}