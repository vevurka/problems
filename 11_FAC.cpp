#include <iostream>
#include <cmath>

#define MAX 1000000000
#define FIVE 5

unsigned int const log5 = floor(log(MAX/log(FIVE)));
unsigned int five_powers[log5];

void initialize_five_powers() {
	unsigned int n = FIVE;
	for (unsigned int i = 0; i < log5; i++) {
		five_powers[i] = n;
		n = n * FIVE;
	}
}

unsigned int count_zeros(unsigned int n) {
	unsigned int sol = 0;
	for (unsigned int i = 0; i < log5; i++) {
		if (five_powers[i] > n) break;
		sol += floor(n/five_powers[i]);
	}
	return sol;
}

int main() {
	int n;
	std::cin >> n;
	initialize_five_powers();
	for (int i = 0; i < n; i++) {
		unsigned int k;
		std::cin >> k;
		std::cout << count_zeros(k) << std::endl;
	}
}
