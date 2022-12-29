#include <iostream>
#include <algorithm>
using namespace std;

//백준 2750번 sort 함수 사용하여 풀기
int num[1000];

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	sort(num, num + n);

	for (int i = 0; i < n; i++) {
		cout << num[i] << " \n";
	}
	return 0;
}