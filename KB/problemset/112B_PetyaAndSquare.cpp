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
    
    int n2, x, y;
    cin >> n2 >> x >> y;
    int n = n2/2;
    if((n2 == 2) || ((x==n || x ==n+1) && (y==n || y==n+1))){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}