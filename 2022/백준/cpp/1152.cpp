#include <bits/stdc++.h>
using namespace std;

int main() {
	string input;
	char space = ' ';
	int sum = 0;
	getline(cin, input);
	
	for (int i = 0; i < input.size(); i++) {
		if (input[i] != space) {
			if (input[i + 1] == space) sum++;
		}
	}
	if (input[input.size() - 1] != space) sum++;
	cout << sum;
	return 0;
}