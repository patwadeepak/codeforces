#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#include <vector>
#include <set>

using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    FastIO

    set<int> s;
    s.insert(1);
    s.insert(-3);
    s.insert(2);
    s.insert(-10);

    // gives already sorted values
    for(auto x: s) cout << x <<" "; cout <<endl;

    // find a particular num in set
    // set<int>::iterator it = s.find(2);  // longer way of doing it.
    auto it = s.find(2);
    if(it == s.end()) cout << "Not present\n";
    else cout << "Present - " << *it << endl;

    // s.end() is the pointer to what comes after last element.
    auto it2 = s.end(); it2--;
    cout << "This should be the last element in set - " << *it2 << endl;


    cout << "Adding 3 to the set\n"; 
    s.insert(3);
    for(auto &x : s) cout << x << " "; cout << endl;

    // using upper bound properly with condition just like find
    auto it3 = s.upper_bound(2);
    // since nothing is there strictly greater than in set
    // it gives s.end() iterator to us
    if (it3 == s.end()) cout << "Sorry!! could not find upper bound.\n";
    else cout << "Upper Bound for found - " << *it3 << endl;

    
}