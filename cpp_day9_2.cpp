#include <iostream>
#include <string>

// ���ڿ��� ������



//#define MAIN9_2

#ifdef MAIN9_2

using namespace std;

int len(const char* str) {
	int index = 0;
	while (str[index] != 0) {
		index++;
	}
	return index;
}


char* glue(const char* str, const char* str2) {
	int str1_len = len(str);
	int str2_len = len(str2);

	char* str3 = new char[str1_len + str2_len + 1];

	for (int i = 0; i < str1_len; i++) {
		str3[i] = str[i];
	}
	for (int j = 0; j < str2_len; j++) {
		str3[j + str2_len] = str2[j];
	}
	str3[str1_len+str2_len] = NULL;
	//cout << "������ ���ڿ� : " << str3;

	return str3;
}


int main() {
	const char* str = "hello";
	const char* str2 = "world";
	char * str_print = glue(str, str2);

	cout << "������ ���ڿ� : " << str_print;





	//const char str[] = "helloworld"; // const�� ���ָ� ���� �ȹٲ��.
	// ���� ���������� ������ ���ϸ� �ȵǴ� ��쿡, ��-���ٲ� �� �ִ�. �ٲ� �� �ִ� ���ɼ��� �ֱ� ������, ���� �ٲ�� �ȵǴ� ��(�ڵ���, ����� ��) const�� ������ ��������ߵȴ�.
	// const = �����Ǹ� �ȵǴ� ��.

	//char* p = str;

	//cout << "ù ��° ���� : " << *p << endl;
	//cout << "�� ��° ���� : " << *p+1 << endl; // �̷��� �ϰԵǸ� *�� �켱������ +���� ���⶧���� ���� h�� �ҷ����� ���� 2�� ���Ͽ��� ������ �ڵ����� int������ ��ȯ�� �Ǿ���.
	//cout << "�� ��° ���� : " << *(p + 2) << endl; // �׷��� �ε��� ����� �Ϸ��� �̷��� �ϸ� �ȴ�.


	//p[0] = 'H';
	return 0;

}

#endif