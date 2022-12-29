#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//백준 정렬 문제 2587번 
int main()
{
	vector<int> num(5);
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}

	sort(num.begin(), num.end());

	cout << sum / 5 << '\n' << num[2] << '\n';

	return 0;
}