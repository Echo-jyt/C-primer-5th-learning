>下列变量的初值是什么？
>
>```
>std::string global_str;//空字符串
>int global_int;//0
>int main() {
>	
>	int local_int;//未定义
>	std::string local_str;//空字符串
>	std::cout << global_str << std::endl;
>	std::cout << global_int << std::endl;//报错
>	std::cout << local_int << std::endl;
>	std::cout << local_str << std::endl;
>
>	return 0;
>}
>```
>
>