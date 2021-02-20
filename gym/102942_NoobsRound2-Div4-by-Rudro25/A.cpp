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
        int n; cin >> n;
        string s; cin >> s;
        int count[] = {0 , 0};
        for(auto ch : s) count[ch - '0']++;
        string directions = "ESWN";
        int index = (count[0] - count[1])%4;
        index = index<0 ? index+4 : index;
        cout << directions[index] << "\n";
    }
}