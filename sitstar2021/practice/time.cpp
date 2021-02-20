
#include <iostream>
#include <chrono>

using namespace std::chrono;

int main(){
    auto start = high_resolution_clock::now();
    // task to time

    // task end here
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: "
    << duration.count() << " microseconds" << endl;
    return ;
}