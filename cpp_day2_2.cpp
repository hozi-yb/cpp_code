#include <iostream>
//#define MAIN2;

#ifdef MAIN2
int main() {
	int val = 0;

	std::cout << "���� �Է�." << std::endl;
	std::cin >> val;

	val % 5 == 0 ? std::cout << val << "�� 5�� ����Դϴ�." << std::endl : std::cout << val << "�� 5�� ����� �ƴϳ׿�̤�" << std::endl;

	return 0;
}

#endif