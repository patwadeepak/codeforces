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
    string abc; cin >> abc;
    map<char, char> brackets;
    map<char, int> count = {{'A', 0}, {'B', 0}, {'C', 0}};
    int len = abc.size();
    bool result = true;
    if(abc[0] == abc[len-1]) result = false;
    else{
        brackets.insert({abc[0], '('});
        brackets.insert({abc[len-1], ')'});

        for(int i=0; i<len; i++){
            count[abc[i]]++;
        }

        set<char> temp = {'A', 'B', 'C'};
        temp.erase(abc[0]);
        temp.erase(abc[len-1]);

        if(count[abc[0]] == count[abc[len-1]] && count[*temp.begin()] != 0) result = false;
        else {
            if(count[abc[0]] > count[abc[len-1]]){
                brackets.insert({*temp.begin(), ')'});
            }
            else brackets.insert({*temp.begin(), '('});

            vector<char> deck;

            for(int i=0; i<len; i++){
                if(brackets[abc[i]] == '('){
                    deck.push_back('(');
                }
                else{
                    if(deck.size() == 0) {
                        result = false;
                        break;
                    }
                    else{
                        deck.pop_back();
                    }
                }
            }
            if(deck.size() != 0) result = false;
        }
    }
    cout << ((result) ? "YES\n" : "NO\n");
}

int main(){
    FastIO
    int t; cin >> t;
    while(t--){
        solve();
    }
}