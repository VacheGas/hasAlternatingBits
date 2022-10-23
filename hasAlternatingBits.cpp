#include <iostream>

bool hasAlternatingBits(int n) {
	int cur = -1;
	int prev = -1;
		
	while (n) {
		prev = cur;
		cur = n & 1;
		if (cur == prev) {
			return false;
		}
		n >>= 1;
	}
	return true;
}

int main() {
	std::cout << hasAlternatingBits(5) << std::endl;
}