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
    
    int n, a, b; cin >> n >> a >> b;
    string park; cin >> park;

    int parked_a = 0, parked_b = 0;
    vector<int> a_cars, b_cars;

    // park large cars
    if(a>0){
        for(int i=0; i<n-1; i++){
            if (park[i]=='0' && park[i+1]=='0'){
                park[i] = '1';
                park[i+1] = '1';
                parked_a++;
                a_cars.push_back(i+1);
                if(parked_a==a)
                    break;
            }
        }
    }
    

    // park small cars
    if(b>0){
        for(int i=0; i<n; i++){
            if (park[i]=='0'){
                park[i] = '1';
                parked_b++;
                b_cars.push_back(i+1);
                if(parked_b==b)
                    break;
            }
        }
    }
    

    if(parked_a!=a || parked_b!=b)   cout << "NO";
    else{
        cout << "YES\n";

        // print all park locations here.
        for(int i=0; i<a; i++){
            cout<< a_cars[i]<< " " << a_cars[i]+1 << "\n";
        }

        for(int i=0; i<b; i++){
            cout << b_cars[i] << "\n";
        }
    }
}