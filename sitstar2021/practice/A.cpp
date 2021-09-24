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
        vi a(3);
        int i = 0;
        while(i<3) {
            cin >> a[i];
            i++;
        }
        sort(a.begin(), a.end());
        
        if (a[1]==0)
            cout<<"YES\n"<<a[2]<<" "<<a[1]<<" "<<a[0]<<"\n";
        else if (a[0]*a[1] == a[2])
            cout<<"YES\n"<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
        else
            cout<<"NO\n";
    }

    // solution end here
    return 0;
}