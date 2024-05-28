#include<iostream>
#include "Sales_item.h"
int main() 
{
	Sales_item last_item,current_item;

	if (std::cin >> last_item) {
		int cnt = 1;
		while (std::cin >> current_item) {
			if (compareIsbn(current_item, last_item)) {
				cnt += 1;
			}
			else {
				std::cout << last_item.isbn() << " " << cnt << std::endl;
				cnt = 1;
			}
			last_item = current_item;
		}
		std::cout << last_item.isbn() << " " << cnt << std::endl;
	}
	else {
		std::cerr << "No data" << std::endl;
		return -1;
	}

	return 0;
}