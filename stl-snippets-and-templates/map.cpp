#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#include <vector>
#include <map>

#include <set>

using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FastIO

    map<int, int> a;
    a[1] = 100;
    a[2] = -1;
    a[1000] = 900;
    a[3] = 200;

    cout << "gives pairs sorted by key values\n";
    for(auto x : a) cout << x.first << "," << x.second<< "\t"; cout << endl;

    cout << "using ++k  on copy, cant modify the keys\n";
    for(auto x : a) cout << x.first << "," << ++x.second << "\t"; cout << endl;

    cout << "But the original remains the same\n";
    for(auto x : a) cout << x.first << "," << x.second << "\t"; cout << endl;

    cout << "using ++k on refernce values\n";
    for(auto &x : a) cout << x.first << "," << ++x.second << "\t"; cout << endl;

    cout << "Lets see if original changes or not\n";
    for(auto x : a) cout << x.first << "," << x.second << "\t"; cout << endl;

    cout << "Trying the iterator way to loop\n";
    for(map<int, int>::iterator it = a.begin(); it != a.end(); it++) 
        cout << it->first <<" - "<<it->second<<"\n"; cout <<endl;

    // code to count all different characters in a string using map
    string txt = "Deepak is awesome";

    map<char, int> count;
    for(auto &ch : txt){
        if(count.find(ch) == count.end()){
            count[ch] = 1;
        }
        else{
            count[ch]++;
        }
    }
    cout << endl;

    // gives characters and their counts
    for(auto &x : count){
        cout << x.first << " - "<<x.second << "\n";
    }
    cout << endl;

    //////////////////////////////////////
    // using set of pairs instead a map //
    //////////////////////////////////////
    cout << "Working on set<pair<int,int>>\n";

    set<pair<int, int>> s;

    s.insert({401, 450});
    s.insert(make_pair(10, 90));
    s.insert({2, 5});
    s.insert({30, 200});

    for(auto &x : s) cout << x.first << " - " << x.second << endl;

    cout << "Just trying to loop using iterator without auto\n";
    for(set<pair<int, int>>::iterator it=s.begin(); it!= s.end(); it++)
        cout << it->first << " - " << it->second << endl;
    
    // find on set<pair<int, int>>
    auto it = s.find({30, 201});
    if (it == s.end()) cout << "sorry\n";
    else cout << "found - "<< it->first << ", "<< it->second << endl;

}