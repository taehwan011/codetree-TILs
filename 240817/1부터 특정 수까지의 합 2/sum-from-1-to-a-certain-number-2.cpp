#include <iostream>
using namespace std;

int Fact(int n) {
	if (n == 1) return 1;

	return Fact(n - 1) + n;
}


int main() {
	int n;
	cin >> n;

	int result = Fact(n);
	cout << result;
	return 0;
}