#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    ll t; cin >> t;
    while(t--){
        ll A, B, n; cin >> A >> B >> n;
        vector<ll> a(n), b(n);
        vector<pair<ll, ll>> calc(n);
        
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }

        bool hero_dead = false, monsters_dead = false;
        ll monster_count = n;
        ll i = 0, value=0, value2=0;

        // for(ll i=0; i<n; i++){
        //     ll fights = min(ceil((double)b[i]/A), ceil((double)B/a[i]));
        //     calc[i].first = fights*a[i];
        //     calc[i].second = i;
        // }

        // sort(calc.begin(), calc.end());
        int kamikaze=0;
        while(!(hero_dead || monsters_dead)){
            ll fights = min(ceil((double)b[i]/A), ceil((double)B/a[i]));
            // is it a kamikaze kill
            B -= fights*a[i];
            b[i] -= fights*A;
            if (B <= 0 && b[i]<= 0){
                kamikaze++;
                B += fights*a[i];
                b[i] += fights*A;
            }
            else if(B <= 0){
                hero_dead = true;
            }
            else if (b[i] <= 0){
                monster_count--;
            }
            
            if(monster_count == 0){
                monsters_dead = true;
            }
            i++;
            // if(i>=n) break;
        }

        if(monsters_dead) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    
    // solution end here
    return 0;
}