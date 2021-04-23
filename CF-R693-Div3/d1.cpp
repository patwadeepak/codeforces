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

vector<int> even, odd;
unordered_map<string, vi> cache;

string stringy(int epos, int opos, bool turn){
    return to_string(epos) + "," + to_string(opos) + "," + to_string(turn);
}

vi pick(int epos, int opos, int a=0, int b=0, bool turn=true){


    if(cache.count(stringy(epos, opos, turn))) return cache[stringy(epos, opos, turn)];

    if(epos<0 && opos<0) return {0,0};
    if(epos<0){
        if(!turn) b += odd.back();
        return {a,b};
    }

    if(opos<0){
        if(turn) a += even.back();
        return {a,b};
    }
    
    if(turn){
        a += max(pick(epos-1, opos, a, b, !turn)[0], pick(epos, opos-1, a, b, !turn)[0]) + even[epos];
        cache[stringy(epos, opos, turn)] = {a, b};
    }
    else{
        b += max(pick(epos-1, opos, a, b, !turn)[1], pick(epos, opos-1, a, b, !turn)[1]) + odd[opos];
        cache[stringy(epos, opos, turn)] = {a, b};
    }
    
    return {a, b};
}

void solve(){
    cache.clear();
    even.clear();
    odd.clear();
    int n; cin >> n;
    vector<int> a(n), scores;
    for(auto &x : a){
        cin >> x;
        if(x%2) odd.push_back(x);
        else even.push_back(x);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    scores = pick(even.size()-1, odd.size()-1);
    if(scores[0] == scores[1]) cout << "Tie\n";
    else if(scores[0] > scores[1]) cout << "Alice\n";
    else cout << "Bob\n";
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}