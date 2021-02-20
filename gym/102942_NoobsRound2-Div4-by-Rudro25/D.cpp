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

    // 1100 ^ 0011 = 1111
    // 12   ^ 3    = 15

    // 1100 ^ 0010 = 1110
    ll a = ~1;
    cout << a;
}