#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool found = false;
    int x;
    if(str.size() < 2){
        cout <<"-1 -1"<<endl;
        return;
    }
    else {
        for(int i=1; i<n; i++){
            if( (str[i-1]=='a' && str[i]=='b')|| (str[i-1]=='b' && str[i]=='a')){
                found = true;
                x = i;
                break;
            }
        }
    }
    if(found) cout << x << " " << x+1 << endl;
    else cout <<"-1 -1"<< endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}