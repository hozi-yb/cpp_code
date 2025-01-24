#include <iostream>
#include <string>

// 문자열포인터로 시작
// 

#define MAIN10
#ifdef MAIN10
using namespace std;

// 실습 32 - 1
void char_len(const char* _str) {
	
	int index = 0;
	while (_str[index] != NULL) {
		index++;
	}
	//for(int i = 0; i <index )
	cout << "입력한 문자열의 길이는 : " << index << endl;
}

// 실습 32 - 2
int str_len(string& str) {
	bool flag = true;
	int index = 0;
	
	while (flag)
	{
		index++;
		if (str[index] == 0) {
			flag = false;
		}
	}
	return index;
}

void char_print(char* _str) {
	bool flag = true;
	int index = 0;
	cin.get(_str, 100);
	while (flag) {
		if (_str[index] == 0) {
			flag = false;
		}
		index++;
	}
	cout << "입력한 문자열 : ";
	for (int i = 0; i < index; i++) {
		cout << _str[i];
	}
	cout << endl;
}

// 실습 32 
void char_len(char* _str) {
	bool flag = true;
	int index = 0;
	cin.get(_str, 100);

	while (flag) {
		index++;
		if (_str[index] == 0) {
			flag = false;
		}
	}
	cout << "입력한 문자열의 길이 : " << index << endl;
	
}
char* custum_cin() {
	char ch;
	int n = 5;
	int index = 0;
	
	bool flag = true;
	char* arr = new char[n];
	while (flag) {
		
		cin.get(ch);
		arr[index] = ch; //왜 if문 뒤에있으면 안되는지??

		if (arr[index] == '\n')
		{
			arr[index] = 0;
			flag = false;
		}

		
		index++;

		if (index >= n) {
			char* arr2 = new char[index + n];
			for (int i = 0; i < index; i++) {
				arr2[i] = arr[i];
			}
			delete[] arr;
			arr = arr2;
		}
	}
	return arr;
}

void print(int num, int num2) {
	cout << "포인트 테스트" << endl;
	cout << "포인트 값 : "<< num << " " << num2 << endl;
}

void myCallback(int result) {
	cout << "콜백 함수로 출력된 결과 : " << result << endl;
}
void myCallback2(int result) {
	cout << "콜백 함수2로 출력된 결과 : " << result << endl;
}
void perform(int a, int b, void (*Callback)(int)) {
	int sum = a + b;
	Callback(sum);
}

// 실습 33. 콜백함수 사용해보기
char str_lower(char ch) {
	return tolower(ch);	 // _str + 32해주면 아스키코드 상 소문자로 된다.
}
void is_cap(string &_str, char(*str_lower)(char)) {
	for (int i = 0; i < _str.length(); i++) {
		if (isupper(_str[i])) // _str[i] >= 'A' && _str[i] <= 'Z' 로 해줘도 된다. 아스키코드상.
		{
			_str[i] = str_lower(_str[i]);
		}
	}
	cout << "변환된 문자열 : " << _str << endl;
}

// 종합실습11. 계산기 구현하기.
void add(int num1, int num2) {
	int val = num1 + num2;
	cout << "덧셈 계산" << endl;
	cout << "결과 : " << val << endl;
}
void sub(int num1, int num2) {
	int val = num1 - num2;
	cout << "뺄셈 계산" << endl;
	cout << num1 << '-' << num2 << " = " << val << endl;
}
void mul(int num1, int num2) {
	int val = num1 * num2;
	cout << "곱셈 계산" << endl;
	cout << num1 << '*' << num2 << " = " << val << endl;
}
void divide(int num1, int num2) {
	float val = (float)num1 / num2;
	cout << "나눗셈 계산" << endl;
	cout << num1 << '/' << num2 << " = " << val << endl;
}
void performOperation(int num1, int num2, void(*callback)(int,int))
{
	callback(num1, num2);
	
}
//---*---*---*---*------*---*---*---*------*---*---*---*---//

int main() {

	// 종합실습 11.
	int num1 = 0, num2 = 0;

	cout << "두 수 입력 : ";
	cin >> num1 >> num2;
	performOperation(num1, num2, add);
	performOperation(num1, num2, sub);
	performOperation(num1, num2, mul);
	performOperation(num1, num2, divide);

	/* 
	// 실습33. 콜백함수 사용해보기
	string str;

	cout << "문자열을 입력하세요 : ";
	getline(cin, str);
	is_cap(str, str_lower);
	*/
	


	// 콜백함수 
	/*
	perform(1, 2, myCallback);
	perform(1, 2, myCallback2); // 이렇게 유연하게 구현이 가능해진다.
	*/



	// 함수와 포인터
	/*
	void (*point_f)(int, int); // 함수 포인터...

	point_f = print;
	// point_f = &print; // 이렇게도 됨.
	// point_f = **print; // 이렇게도 됨..;;
	//point_f = *print;

	(*point_f)(3,4);
	point_f(3, 4); // 이거도 됨.. 되는게 많은데,, 그냥 하나만 기억해도 뭐...
	*/
	
	
	
	
	/*

	cout << "문자열을 입력하세요 : ";
	char* input = custum_cin();
	
	cout << "입력한 문자열 : " << input << endl;

	*/
// string이 인덱싱이 안되는가??
	 /*string str = "hello";
	 char * ch = &str[0];
	 cout << ch;*/
	// *(str + 1) 이게 안되는 이유?
	// 그 이유는 string은 문자의 배열이 아니라, 어떤 클래스? 같은 함수들의 집합이기에,
	//그냥 char[]과 다르다.
	
	
	
	// 실습 32 
	/*
	char* str = new char[100];
	cout << "문자열을 입력하세요 : ";
	char_len(str);
	// 종합실습10. 커스텀 입력함수 만들기
	char_print(str);
	delete[] str;
	
	*/

	//char* str = new char[100];
	//cout << "문자열을 입력하세요 : ";
	//char_print(str);

	// 실습 32 - 2
		/*
	string str;
	cout << "문자열을 입력하세요 : ";
	getline(cin, str);
	
	int v = str_len(str);

	cout << "입력한 문자열의 길이는 : " << v << endl;
		*/
	




	return 0;
}


#endif