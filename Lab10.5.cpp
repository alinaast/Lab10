#include <iostream>
using namespace std;
int main() {
	int n, i;
	float a, b, c;
	b = 1;
	c = 1;
	cin >> a >> n;
	for (i = 1; i <= n; i++) {
		c = -1 * c;
		b = b + c * pow(a, i);
	}
	cout << b;
	return 0;
}
