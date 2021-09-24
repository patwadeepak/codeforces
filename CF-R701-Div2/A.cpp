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

    int t; cin >> t;
    while(t--){
        int a, b, count=0;
        cin >> a >> b;
        
        while(a){
            if(a/b==0){
                count++;
                a = a/b;
            }
            else if (a/(b+1) == 0){
                count += 2;
                a = 0;
            }
            else if (floor(log(a)/log(b)) - 1 >= floor(log(a)/log(b+1))){
                count++;
                b++;
            }
            else{
                a /= b;
                count++;
            }
        }
        cout << count << "\n";
    }
}