#include <iostream>
#include <string>

// 문자열과 포인터



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
	//cout << "합쳐진 문자열 : " << str3;

	return str3;
}


int main() {
	const char* str = "hello";
	const char* str2 = "world";
	char * str_print = glue(str, str2);

	cout << "합쳐진 문자열 : " << str_print;





	//const char str[] = "helloworld"; // const를 해주면 절대 안바뀐다.
	// 가끔 전역변수든 변수든 변하면 안되는 경우에, 가-끔바뀔 수 있다. 바뀔 수 있는 가능성이 있기 때문에, 절대 바뀌면 안되는 값(자동차, 비행기 등) const로 변수를 설정해줘야된다.
	// const = 수정되면 안되는 값.

	//char* p = str;

	//cout << "첫 번째 문자 : " << *p << endl;
	//cout << "두 번째 문자 : " << *p+1 << endl; // 이렇게 하게되면 *의 우선순위가 +보다 높기때문에 먼저 h를 불러오고 정수 2를 더하였기 때문에 자동으로 int형으로 변환이 되었다.
	//cout << "세 번째 문자 : " << *(p + 2) << endl; // 그래서 인덱싱 제대로 하려면 이렇게 하면 된다.


	//p[0] = 'H';
	return 0;

}

#endif