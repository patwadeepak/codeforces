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
        for(auto &x : a) cin >> x;

        int big=0, small=0, count=0;
        bool bigfirst = false;
        for(int i=1; i<n; i++){
            if(a[i-1]>a[i]){
                big = a[i-1];
                small = a[i];
                bigfirst = true;
            }   
            else{
                big = a[i];
                small= a[i-1];
                bigfirst = false;
            }

            while((big/(double)small)>2){
                if(bigfirst){
                    count++;
                    big = ceil((double)big/2);
                }
                else{
                    count++;
                    small = 2*small;
                }
            }
        }
        cout << count << "\n";
    }
    
}