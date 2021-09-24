#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int len = s.length();
        vector<int> s1(len);
        for(int i=0; i<len; i++){
            if(i%2==0){
                if(s[i]=='a')
                    s1[i] = 'b';
                else
                    s1[i] = 'a';
            }
            else{
                if(s[i]=='z')
                    s1[i] = 'y';
                else
                    s1[i] = 'z';
            }
        }

        for (auto x : s1)
            cout << (char)x;
        cout << "\n";
    }

    // solution end here
    return 0;
}