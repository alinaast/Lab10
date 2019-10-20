#include <iostream>
using namespace std;
int main() {
	int n = 20;
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += 2 * i - 1;
		cout << s << " ";
	}
	cin.get();

}
