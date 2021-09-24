#include <bits/stdc++.h>

using namespace std;

void solve(int t) {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> travel(n,INT_MAX);
    int last_trashBin=INT_MAX;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            last_trashBin = 0;
            travel[i] = 0;
        }
        else{
            travel[i] = last_trashBin;
        }

        if(last_trashBin != INT_MAX) last_trashBin++;
    }

    last_trashBin=INT_MAX;
    int sum = 0;
    for(int i=n-1; i>=0; i--){
        if(s[i] == '1'){
            last_trashBin = 0;
            travel[i] = 0;
        }
        else{
            travel[i] = min(last_trashBin, travel[i]);
        }
        if(last_trashBin != INT_MAX) last_trashBin++;

        sum += travel[i];
    }
    
    cout <<"Case #"<<t<<": "<<sum<<endl;
}

int main() {
    int t; cin >> t;
    int i=1;
    while(i<=t) solve(i++);
}