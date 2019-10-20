#include <iostream>
using namespace std;
int main() {
	float a, b;
	int n, i;
	b = 1;
	cin >> a >> n;
	for (i = 1; i <= n; i++)
		b = b + pow(a, i);
	cout << b;
	return 0;
}
