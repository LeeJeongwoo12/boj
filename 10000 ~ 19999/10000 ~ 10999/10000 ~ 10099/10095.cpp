#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		if (i % 2)
			printf(" ");
		for (int j = 0; j < n; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}