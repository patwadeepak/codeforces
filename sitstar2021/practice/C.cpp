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
    
    int t0, t1, t2;
    cin >> t0 >> t1 >> t2;
    // 10 20 30 after sort t0 is a[0] => answer = a[2] - a[0]
    // 20 10 30 after sort t0 is a[1] => answer = 2*min(a[2]-a[1], a[1]-a[0]) + max(a[2]-a[1], a[1]-a[0])
    // 30 10 30 after sort t0 is a[2] => answer = a[2] - a[0]
    vi a{t0, t1, t2};
    sort(a.begin(), a.end());
    if (t0 == a[0] || t0 == a[2])
        cout << a[2]-a[0] <<"\n";
    else
        cout << 2*min(a[2]-a[1], a[1]-a[0]) + max(a[2]-a[1], a[1]-a[0])<<"\n";
    
    // solution end here
    return 0;
}