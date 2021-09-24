#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FastIO
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a,even=0,result;
        for (int i = 0; i < n; i++){
            cin>>a;
            if(a%2==0)
                even++;
        }
        result = even!=n ? even : -1;
        cout<<result<<"\n";
    }
}