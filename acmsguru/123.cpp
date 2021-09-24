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
    int k, sum=2; cin >> k;
    if(k<=2) sum=k;
    else{
        int fn_1 = 1, fn = 1, fnp1=0;
        for(int i=0; i<k-2; i++){
            fnp1 = fn + fn_1;
            fn_1 = fn;
            fn = fnp1;
            sum += fnp1;
        }
    }
    
    cout << sum;
}