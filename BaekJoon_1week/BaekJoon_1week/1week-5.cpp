#include <iostream>
using namespace std;


//���� ���� 10989�� ī���� ���� Ȱ��
int main()
{
	ios::sync_with_stdio;
	cin.tie(NULL);

	int n;
	cin >> n;

	int arr[10001] = { 0, };

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr[k] ++;
	}

	for (int i = 0; i <= 10000; i++) {
		if (arr[i]) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}