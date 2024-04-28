#include<iostream>
#include "Sales_item.h"
int main() {
	Sales_item item1, item2;
	while (std::cin >> item1) {
		item2 = item2 + item1;
	}
	std::cout << item2 << std::endl;

	return 0;
}