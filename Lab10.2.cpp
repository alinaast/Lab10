#include <iostream>
using namespace std;
int main() {
	double n, a, b;
	cin >> n;
	a = 1.1;
	b = 1;
	for (a = 1.1; a <= n; a += 0.1) {
		b = b * a;
		cout << b << " ";
	}
	return 0;
}