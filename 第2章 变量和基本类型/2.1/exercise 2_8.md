> 请利用转义序列编写一段程序，要求先输出 2M，然后转到新一行。修改程序使其先输出 2，然后输出制表符，再输出 M，最后转到新一行。

```cpp
#include<iostream>

int main() {
	std::cout <<"2\x4d\012";
	std::cout << "2\t\x4d\012";
	return 0;
}
```

