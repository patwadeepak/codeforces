#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') % a; 
  
    return res; 
}

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    char lastnum = '1';
    bool possible = true;
    for(int i=0; i<n; i++){
        if(s[i] == '-'){
            s[i] = lastnum;
        }
        else lastnum = s[i];

        if(i-1 < 0 || s[i-1] > s[i]){
            possible = false;
            break;
        }
    }
    cout << ((possible) ? mod(s, 1e9 + 7) : '0') << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}