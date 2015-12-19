#include <iostream>
#include <cmath>

int main() {
	while (true) {
		int n;
		std::cin >> n;
		if (n == -1) return 0;
		
		int tab[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> tab[i];
			sum += tab[i];
		}
		double quantity = (double)sum / (double)n;
		if (floor(quantity) != quantity) {
			std::cout << -1 << std::endl;
			continue;
		}
			
		int sol = 0;
		for (int i = 0; i < n; i++) {
			if (tab[i] < quantity) {
				sol += quantity - tab[i];
			}
		}
		std::cout << sol << std::endl;
	}
}
