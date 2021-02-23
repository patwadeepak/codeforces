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

/*
3
4
3 10 2 1 20
3
3 10 20
2
3 2
1
3 or 2
6
50 3 10 7 40 80
3 7 40 80
*/ 

vi lis(vi &arr, int l, int r){

    // ith number
    int i=0;
    vi prev = lis(arr, l, i-1);
    vi next = lis(arr, i+1, r);
    if ((i-1 < 0 || prev[prev.size()-1] < arr[i]) && (i+1 > arr.size()-1 || arr[i] < next[next.size()-1])){
        prev.push_back(arr[i]);
        auto it = next.begin();
        while(it!=next.end()) prev.push_back(*it++);
        return prev;
    }
}

void solve(){

}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}