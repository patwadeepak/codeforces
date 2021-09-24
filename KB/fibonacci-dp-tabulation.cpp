#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

// in this bottom up approach we use the array
// as the table for the results.
// this is preferred pick in cp mostly

int fib(int n){
    vector<int> f(n+1);
    f[0] = 0; f[1] = 1;
    for(int i=2; i<=n; i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

int main(){
    FastIO
    int n; cin >> n;
    cout << fib(n);
}