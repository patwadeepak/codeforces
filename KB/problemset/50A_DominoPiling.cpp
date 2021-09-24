#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    int M, N;
    cin >> M >> N;
    cout << floor(M*N*0.5);
}