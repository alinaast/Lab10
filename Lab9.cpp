#include <iostream>
using namespace std;
int main() {
	double a, i, b;
	cin >> a;
	i = 0.1;
	for (i = 0.1; i <= 1; i += 0.1) {
		b = a * i;
		cout << b << " " << i << endl;
	}
	return 0;
} 

