#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int sum = 0, num;
    int nonZeroCount = 0;
    char a;
    for(int i=0; i<n; i++){
        cin >> a;
        num = a - '0';
        if(num != 0){
            sum++;
            sum += num;
        }
    }
    if(a != '0') sum--;
    cout << sum << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}