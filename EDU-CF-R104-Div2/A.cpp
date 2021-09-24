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
        vector<int> a(n);
        for(auto &x : a){
            cin >> x; 
        }

        sort(a.begin(), a.end());

        int found = 0;
        for(int i=0; i<n; i++){
            if (a[i] > a[0]){
                found = i;
                break;
            }
        }
        int result = n - found;
        if(a[0] == a[n-1]) result = 0;
        cout << result << "\n";
    }
}