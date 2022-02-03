#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	if (1 == m || 2 == m) {
		cout << "NEWBIE!";
		return 0;
	}

	if (m <= n) {
		cout << "OLDBIE!";
		return 0;
	}

	cout << "TLE!";

	return 0;
}