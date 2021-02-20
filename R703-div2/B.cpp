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

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    unordered_set<int> unique_xs, unique_ys;
    int xsum=0, ysum=0;

    for(auto &a : arr){
        cin >> a.first >> a.second;
        xsum += a.first;
        ysum += a.second;
        unique_xs.insert(a.first);
        unique_ys.insert(a.second);
    }
    vector<int> x_vals, y_vals;
    double x_val = xsum/(double)n, y_val = ysum/(double)n;    
    
    if(abs(ceil(y_val) - y_val) < 1e-9 && unique_ys.size() == 2)
    {
        x_vals.push_back(y_val);
        auto it = unique_ys.begin();
        y_vals.push_back(*it);
        it++;
        y_vals.push_back(*it);
    }
    else{
        if(y_val - floor(y_val) == 0.5){
            y_vals.push_back(floor(y_val));
            y_vals.push_back(ceil(y_val));
        }
        else
            y_vals.push_back(round(y_val));
    }
    
    
    if(abs(ceil(x_val) - x_val) < 1e-9 && unique_xs.size() == 2)
    {
        x_vals.push_back(x_val);
        auto it = unique_xs.begin();
        x_vals.push_back(*it);
        it++;
        x_vals.push_back(*it);
    }
    else{
        if(x_val - floor(x_val) == 0.5){
            x_vals.push_back(floor(x_val));
            x_vals.push_back(ceil(x_val));
        }
        else
            x_vals.push_back(round(x_val));
    }

    set<pair<int,int>> exhibition;
    for(auto i=x_vals.begin(); i!=x_vals.end(); i++){
        for(auto j=y_vals.begin(); j!=y_vals.end(); j++){
            exhibition.insert({ *i , *j });
        }
    }

    cout << exhibition.size() << "\n";
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}