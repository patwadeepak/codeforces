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

map<pair<pair<int,int>,pair<int,int>>, string> cache;

string lcs(string &s1, string &s2, pair<pair<int,int> , pair<int,int>> params){
    if(cache.count(params) > 0) return cache[params];

    if(params.first.first > params.first.second || params.second.first > params.second.second)
    {
        cache[params] = "";
        return cache[params];
    }
    string a = s1.substr(params.first.first, (size_t)(params.first.second - params.first.first + 1));
    string b = s2.substr(params.second.first, (size_t)(params.second.second - params.second.first + 1));
    if(a == b){
        cache[params] = a;
        return cache[params];
    }
    else return max(lcs(s1,s2, {params.first,{params.second.first, params.second.second - 1}}),
                    lcs(s1,s2, {{params.first.first, params.first.second - 1},params.second}));
}

void solve(){
    cache.clear();
    string s1, s2;
    cin >> s1 >> s2;
    cout << lcs(s1, s2, {{0,s1.size()-1},{0, s2.size()-1}}) << endl;
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--) solve();
}