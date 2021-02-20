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
    
    int t; cin>>t;
    while(t--){        
        int n, k; cin>>n>>k;     
        vector<int> a(n);

        for(auto &x : a) cin >> x;
        
        sort(a.begin(), a.end());

        int count=0;
        int i=0, j=n-1;
        
        while(i<=j){
            if(a[j] >= k){
                count++;
                j--;
            }
            else if(a[i]+a[j]>=k && i!=j){
                count++; i++; j--;
            }
            else{
                i++;
            }
        }
        cout << count << "\n";
    }
}