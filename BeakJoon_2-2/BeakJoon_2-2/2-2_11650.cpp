#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 //pair�� ���� int �ڷ��� 2�� �Է� �ް� pair �ΰ��� ���ؼ� x��ǥ�� ���ٸ� y��ǥ�� ���ؼ� �� ū ���� ��ȯ�ϰ� �ƴ϶�� x��ǥ ���ؼ� ū ���� ��ȯ�ϴ� ����
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