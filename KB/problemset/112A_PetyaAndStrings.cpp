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
    string a, b;
    int result = 0;
    cin >> a >> b;
    int len = a.length();
    
    transform(a.begin(), a.end(), a.begin(), tolower);
    transform(b.begin(), b.end(), b.begin(), tolower);

    for(int i=0; i < len; i++){
        if (a[i] > b[i]){
            result = 1;
            break;
        }
        else if(a[i] < b[i]){
            result = -1;
            break;
        }
    }
    cout << result;
}