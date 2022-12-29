#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


//백준 정렬 2751번 병합정렬 활용
void merge(int* arr, int* sortarr, int begin, int middle, int end)
{
	int sorted = begin;
	int i = begin;
	int j = middle + 1;

	while (i <= middle && j <= end) {
		if (arr[i] < arr[j]) {
			sortarr[sorted] = arr[i++];
		}
		else sortarr[sorted] = arr[j++];

		sorted++;
	}

	if (i > middle) {
		while (j <= end) {
			sortarr[sorted++] = arr[j++];
		}
	}

	if (j > end) {
		while (i <= middle) {
			sortarr[sorted++] = arr[i++];
		}
	}

	for (int k = begin; k <= end; k++) {
		arr[k] = sortarr[k];
	}
}

void mergeSort(int* arr, int* sortarr, int begin, int end)
{
	int middle;
	if (begin < end) {
		middle = (begin + end) / 2;
		mergeSort(arr, sortarr, begin, middle);
		mergeSort(arr, sortarr, middle + 1, end);
		merge(arr, sortarr, begin, middle, end);
	}
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int* sortarr = new int[n];
	mergeSort(arr, sortarr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << '\n';
	}

	return 0;
}