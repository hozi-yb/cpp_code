#include <iostream>

using namespace std;

//#define MAIN8_2

#ifdef MAIN8_2

int main() {

	// 실습 29. 2차원 동적배열 사용해보기.
	/*
	int x = 0, y = 0;
	int num = 0;
	bool flag = true;

	while (flag)
	{
		cout << "x를 입력하세요 : ";
		cin >> x;
		cout << "y를 입력하세요 : ";
		cin >> y;
		

		if (x > 0 && y > 0)
		{
			flag = false;
		}
		else
		{
			cout << "x와 y모두 양수를 입력해주세요." << endl;
		}
	
	}

	int** arr = new int* [x];

	for (int i = 0; i < x; i++)
	{
		arr[i] = new int[y];
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0;j < y;j++)
		{
			num++;
			arr[i][j] = num;
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0;j < y;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < x; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	*/


	// 포인터 연산.
	int num = 100;
	int* p = NULL;
	p = &num;

	cout << "포인트 p가 가리키는 값 : " << * p << endl;
	cout << "   num의   값          : " << num << endl;

	*p += 50;

	cout << "포인트 p가 가리키는 값 : " << *p << endl;
	cout << "   num의   값          : " << num << endl;

	(*p)++;

	cout << "포인트 p가 가리키는 값 : " << *p << endl;
	cout << "   num의   값          : " << num << endl;

	*p++; // 우선순위가 증감연산자가 더 세다.. 그래서 주소가 하나가 증가하게 되어서 쓰레기 값이 출력된다.

	cout << "포인트 p가 가리키는 값 : " << *p << endl;
	cout << "   num의   값          : " << num << endl;

	int n1 = 10;
	int n2 = 20;

	int* p1 = &n1;
	int* p2 = &n2;

	cout << "주소값 연산 : " << *p1 + *p2 << endl;


	return 0;
}

#endif