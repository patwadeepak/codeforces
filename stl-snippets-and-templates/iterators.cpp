#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

#include <vector>
#include <set>

using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool f(int x, int y){
    return x > y;
}

int main(){
    FastIO

    vector<int> A = {10, 20, 93, 34, 81, 22};

    cout << A[1] << endl;

    sort(A.begin(), A.end()); // O(NlogN)

    //since vector sorted so use binary search directly
    bool present = binary_search(A.begin(), A.end(), 3); //find 3: false
    present = binary_search(A.begin() ,A.end(), 22); // true

    // add an element to vector
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);

    // 10 20 22 34 81 93 100 100 100 100
    // copying value to x and using it in the loop
    cout << "copying value to x and using it in the loop";
    for(auto x : A) cout<< x << " "; 
    cout << endl;

    // using the reference to that value, means we can modify it now too.
    cout << "using the reference to that value, means we can modify it now too.\n";
    for(auto &x : A) cout << x << " ";
    cout << endl;

    // not able to modify
    cout << "Value were decreased by 1 before printing.\n";
    for(auto x : A) cout<< --x << " ";
    cout << endl;

    //it will be same now
    cout << "But since it was copied value actual value remained same. See below-\n";
    for(auto x : A) cout<< x << " ";
    cout << endl;

    // now modify the value using reference by increase it by 1
    cout << "values are being increased here using prefix operator.\n";
    for(auto &x : A) cout << ++x << " ";
    cout << endl;

    //value should be increase by 1 as above.
    cout << "value should be increase by 1 as above.\n";
    for(auto x : A) cout<< x << " ";
    cout << endl;

    // Looping using the iterators without range based for loops
    // this is the old way but it could be useful in some cases where 
    // range based for loops just does not work.

    // lets add another number to vector
    A.push_back(123);

    // bounds runs in logN time using binary search
    // >= give me iterator to first element greater than or equal to 100
    vector<int>::iterator it1 = lower_bound(A.begin(), A.end(), 101);
    // auto it1 = lower_bound(A.begin(), A.end(), 101);

    // > give me iterator to first element strictly greater to 100
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 101);
    // auto it2 = upper_bound(A.begin(), A.end(), 101);

    for(auto x: A) cout << x<< " "; cout <<endl;
    cout << "lower bound - "<< *it1 << endl; 
    cout << "upper bound - "<< *it2 << endl;

    // count how many times 101 is in the vector.
    cout << it2 - it1 << endl;

    // sort vector in reverse order using comparator f
    sort(A.begin(), A.end(), f);
    for(auto &x : A) cout << x << " "; cout <<endl;

    cout << "Printing the same thing as above using iterators and while loop\n";
    vector<int>::iterator it3 = A.begin();
    while(it3 != A.end()) {cout << *it3 << " "; it3++;} cout << endl;

    cout << "Printing the same thing as above using iterators and for loop\n";
    for(vector<int>::iterator it3 = A.begin(); it3 != A.end(); it3++)
        cout << *it3 << " ";
    cout << endl;

    

}