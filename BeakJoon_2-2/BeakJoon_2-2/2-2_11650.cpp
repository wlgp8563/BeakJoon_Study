#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 //pair를 통해 int 자료형 2개 입력 받고 pair 두개를 비교해서 x좌표가 같다면 y좌표를 비교해서 더 큰 수를 반환하고 아니라면 x좌표 비교해서 큰 수를 반환하는 내용
bool compare(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.first == p2.first) {
		return p1.second < p2.second;
	}
	else
		return p1.first < p2.first;
}

int main()
{
	int n;
	cin >> n;
	int x, y;
	vector<pair<int, int>> vec;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec.push_back(make_pair(x, y));
	}
	sort(vec.begin(), vec.end(), compare);
	
	for (int i = 0; i < n; i++) {
		cout << vec[i].first << "" << vec[i].second << "\n";
	}

	return 0;
}