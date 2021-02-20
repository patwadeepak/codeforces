#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
	FastIO
	
	string s; cin >> s;
	vector<int> arr;
	for (int i = 0; i < s.length(); i += 2) {
		arr.push_back(s[i] - '0');
	}
	sort(arr.begin(), arr.end());
	int last = arr.back();
	arr.pop_back();
	for (auto x: arr) {
		cout << x << "+";
	}
	cout << last;
}