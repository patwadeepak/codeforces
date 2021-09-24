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
    
    ll N; cin >> N;
    int count=0;
    ll sum=0;
    for(ll i=1; i <= N; i++){
        
        ll j=i;
        while(j){
            sum += j%10;
            j /= 10;
        }
        if(sum%3==0) count++;
    }
    cout << count;
}