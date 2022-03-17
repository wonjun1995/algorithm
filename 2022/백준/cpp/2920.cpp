#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[8] = { 0, };
	int asCount = 0, desCount = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
    for (int i = 0; i < 7; i++)
	{
		if (arr[i] < arr[i + 1])
			asCount++;
		else
			desCount++;
	}

	if (asCount == 7)
		cout << "ascending";
	else if (desCount == 7)
		cout << "descending";
	else
		cout << "mixed";

    return 0;
}