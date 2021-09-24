#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;

int main(){
    FastIO
    // solution start here
    
    int n, k; cin >> n >> k;
    string arr; cin >> arr;
    vi a(n,0);
    int i=0, prev_i=0;
    int count=1;
    bool start1, start2;
    bool nostar = true;
    if (arr[0]=='.') start1 = true;
    else start1 = false;
    start2 = start1;
    int first_star = 0, count_rev = 1;
    while(i<n){
        if (arr[i] == '.'){
            a[i] = count++;
        }
        else{
            if(nostar) nostar = false;
            if (start1) {first_star = i;start1=false;}
            prev_i = i;
            i--;
            count = 1;
            count_rev = 1;
            while(a[i] >= count_rev){
                a[i] = count_rev++;
                i--;
            }
            i = prev_i;
        }
        i++;
    }

    // first star issue
    if(start2){
        int j=1;
        for(int i=first_star-1; i>=0; i--)
            a[i] = j++;
    }

    if(nostar){
        while(n--)
            cout << ".";
    }
    else{
        for (int i=0; i<n; i++){
            if (a[i]>k) cout << arr[i];
            else cout << "*";
        }
    }
    // solution end here
    return 0;
}