#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    
    int n; cin >> n;
    int x=0;
    string s;
    while(n--){
        cin >> s;
        if (s[1]=='+') x++;
        else x--;
    }
    cout << x;
}