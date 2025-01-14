#include <iostream>
//#define MAIN2;

#ifdef MAIN2
int main() {
	int val = 0;

	std::cout << "수를 입력." << std::endl;
	std::cin >> val;

	val % 5 == 0 ? std::cout << val << "는 5의 배수입니다." << std::endl : std::cout << val << "는 5의 배수가 아니네요ㅜㅜ" << std::endl;

	return 0;
}

#endif