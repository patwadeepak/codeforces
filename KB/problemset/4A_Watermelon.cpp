#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

int main(){
    FastIO
    
    int num; cin >> num;
    if (num%2==0 && num/2 > 1)
        cout << "YES"<<"\n";
    else
        cout << "NO"<<"\n";

}