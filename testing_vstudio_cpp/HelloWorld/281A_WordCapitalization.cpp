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
	if (s[0] >= 'a')
		s[0] = s[0] - 'a' + 'A';
	cout << s;

	cout << "Hello WOrld!1\n";
	cout << "Hello WOrld!98\n";
	cout << "Hello WOrld!23\n";
	cout << "Hello WOrld!111\n";
	cout << "Hello WOrld!45\n";
}
