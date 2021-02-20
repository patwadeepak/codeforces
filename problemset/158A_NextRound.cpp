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
    
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(arr[0] > 0){
        int i = k;
        if (arr[k-1] > 0){
            while(arr[k-1] == arr[i]){
                i++;
            }
        }
        else{
            while(arr[i-1] == 0){
                i--;
            }
        }
        
        cout<<i<<"\n";
    }
    else
        cout<<"0\n";
}