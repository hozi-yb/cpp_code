#include <iostream>
#include <string>

// ���ڿ������ͷ� ����
// 

#define MAIN10
#ifdef MAIN10
using namespace std;

// �ǽ� 32 - 1
void char_len(const char* _str) {
	
	int index = 0;
	while (_str[index] != NULL) {
		index++;
	}
	//for(int i = 0; i <index )
	cout << "�Է��� ���ڿ��� ���̴� : " << index << endl;
}

// �ǽ� 32 - 2
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
	cout << "�Է��� ���ڿ� : ";
	for (int i = 0; i < index; i++) {
		cout << _str[i];
	}
	cout << endl;
}

// �ǽ� 32 
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
	cout << "�Է��� ���ڿ��� ���� : " << index << endl;
	
}
char* custum_cin() {
	char ch;
	int n = 5;
	int index = 0;
	
	bool flag = true;
	char* arr = new char[n];
	while (flag) {
		
		cin.get(ch);
		arr[index] = ch; //�� if�� �ڿ������� �ȵǴ���??

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
	cout << "����Ʈ �׽�Ʈ" << endl;
	cout << "����Ʈ �� : "<< num << " " << num2 << endl;
}

void myCallback(int result) {
	cout << "�ݹ� �Լ��� ��µ� ��� : " << result << endl;
}
void myCallback2(int result) {
	cout << "�ݹ� �Լ�2�� ��µ� ��� : " << result << endl;
}
void perform(int a, int b, void (*Callback)(int)) {
	int sum = a + b;
	Callback(sum);
}

// �ǽ� 33. �ݹ��Լ� ����غ���
char str_lower(char ch) {
	return tolower(ch);	 // _str + 32���ָ� �ƽ�Ű�ڵ� �� �ҹ��ڷ� �ȴ�.
}
void is_cap(string &_str, char(*str_lower)(char)) {
	for (int i = 0; i < _str.length(); i++) {
		if (isupper(_str[i])) // _str[i] >= 'A' && _str[i] <= 'Z' �� ���൵ �ȴ�. �ƽ�Ű�ڵ��.
		{
			_str[i] = str_lower(_str[i]);
		}
	}
	cout << "��ȯ�� ���ڿ� : " << _str << endl;
}

// ���սǽ�11. ���� �����ϱ�.
void add(int num1, int num2) {
	int val = num1 + num2;
	cout << "���� ���" << endl;
	cout << "��� : " << val << endl;
}
void sub(int num1, int num2) {
	int val = num1 - num2;
	cout << "���� ���" << endl;
	cout << num1 << '-' << num2 << " = " << val << endl;
}
void mul(int num1, int num2) {
	int val = num1 * num2;
	cout << "���� ���" << endl;
	cout << num1 << '*' << num2 << " = " << val << endl;
}
void divide(int num1, int num2) {
	float val = (float)num1 / num2;
	cout << "������ ���" << endl;
	cout << num1 << '/' << num2 << " = " << val << endl;
}
void performOperation(int num1, int num2, void(*callback)(int,int))
{
	callback(num1, num2);
	
}
//---*---*---*---*------*---*---*---*------*---*---*---*---//

int main() {

	// ���սǽ� 11.
	int num1 = 0, num2 = 0;

	cout << "�� �� �Է� : ";
	cin >> num1 >> num2;
	performOperation(num1, num2, add);
	performOperation(num1, num2, sub);
	performOperation(num1, num2, mul);
	performOperation(num1, num2, divide);

	/* 
	// �ǽ�33. �ݹ��Լ� ����غ���
	string str;

	cout << "���ڿ��� �Է��ϼ��� : ";
	getline(cin, str);
	is_cap(str, str_lower);
	*/
	


	// �ݹ��Լ� 
	/*
	perform(1, 2, myCallback);
	perform(1, 2, myCallback2); // �̷��� �����ϰ� ������ ����������.
	*/



	// �Լ��� ������
	/*
	void (*point_f)(int, int); // �Լ� ������...

	point_f = print;
	// point_f = &print; // �̷��Ե� ��.
	// point_f = **print; // �̷��Ե� ��..;;
	//point_f = *print;

	(*point_f)(3,4);
	point_f(3, 4); // �̰ŵ� ��.. �Ǵ°� ������,, �׳� �ϳ��� ����ص� ��...
	*/
	
	
	
	
	/*

	cout << "���ڿ��� �Է��ϼ��� : ";
	char* input = custum_cin();
	
	cout << "�Է��� ���ڿ� : " << input << endl;

	*/
// string�� �ε����� �ȵǴ°�??
	 /*string str = "hello";
	 char * ch = &str[0];
	 cout << ch;*/
	// *(str + 1) �̰� �ȵǴ� ����?
	// �� ������ string�� ������ �迭�� �ƴ϶�, � Ŭ����? ���� �Լ����� �����̱⿡,
	//�׳� char[]�� �ٸ���.
	
	
	
	// �ǽ� 32 
	/*
	char* str = new char[100];
	cout << "���ڿ��� �Է��ϼ��� : ";
	char_len(str);
	// ���սǽ�10. Ŀ���� �Է��Լ� �����
	char_print(str);
	delete[] str;
	
	*/

	//char* str = new char[100];
	//cout << "���ڿ��� �Է��ϼ��� : ";
	//char_print(str);

	// �ǽ� 32 - 2
		/*
	string str;
	cout << "���ڿ��� �Է��ϼ��� : ";
	getline(cin, str);
	
	int v = str_len(str);

	cout << "�Է��� ���ڿ��� ���̴� : " << v << endl;
		*/
	




	return 0;
}


#endif