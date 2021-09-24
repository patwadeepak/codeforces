#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }

int main(){
    FastIO
    
    int count=0;

    int N; cin >> N;

    for(int i=1; i<N; i++){
        if(gcd(i,N)==1){
            count++;
        }
    }
    if(N==1) count=1;
    cout << count;
}