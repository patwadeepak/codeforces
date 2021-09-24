#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FastIO
    
    // Solution start here

    int t;
    cin>>t;
    while(t--){
        double n, k, K;
        cin>>n>>k;
        K = k;
        while(K<n){
            K = K+k;
        }
        cout<<ceil(K/n)<<"\n";
    }

    // solution end here

    return 0;
}