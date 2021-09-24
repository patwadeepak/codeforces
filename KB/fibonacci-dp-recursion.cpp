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

int fib(int n){
    if(n<=1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    FastIO
    int n; cin >> n;
    cout << fib(n);
}

/*
Below tree shows that fib is multiple time with same argument
fib(3) is called 2 times and fib(2) is called 2 times.
This repetition can be removed using DP. Either Memoization or Tabulation 
can be used to achieve this easily.
                           fib(5)
                        /        \
                     /             \
               fib(4)                fib(3)
             /      \                /     \
         fib(3)      fib(2)         fib(2)    fib(1)
        /     \        /    \       /    \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /    \
fib(1) fib(0)
*/