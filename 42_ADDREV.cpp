#include <iostream>

int reverse_number(int num) {
	std::string s = std::to_string(num);
	int len = s.length();
	for (int i = 0; i < len/2; i++) {
		char temp = s[i];
		s[i] = s[len-1-i];
		s[len-1-i] = temp;
	}
	return std::stoi(s);
}

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		std::cin >> a >> b;
		std::cout << reverse_number(reverse_number(a) + reverse_number(b)) << std::endl;
	}
	return 0;
}
