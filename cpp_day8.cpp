#include <iostream>
#include <string>


// 동적배열, 포인터,,,
// 포인터,, 주소를 기반으로 접근한다.

//#define MAIN8

#ifdef MAIN8

using namespace std;

// 실습 27, 포인터 사용해보기
/*
void ch_add(char* _p_ch) {
	(*_p_ch)++;
	cout << "char 증가후 : " << *_p_ch << endl;
	return ;
}
void ch_sub(char *_p_ch) {
	(*_p_ch) -= 1;
	cout << "char 감소후 : " << *_p_ch << endl;
	return;
}

void i_add(int* _p_i) {
	(*_p_i) += 1;
	cout << "int 증가후 : " << *_p_i << endl;
	return;
}
void i_sub(int* _p_i) {
	(*_p_i) -= 1;
	cout << "int 감소후 : " << *_p_i << endl;
	return;
}
void f_add(float* _p_f) {
	(*_p_f) += 1;
	cout << "float 증가후 : " << *_p_f << endl;
	return;
}
void f_sub(float* _p_f) {
	(*_p_f) -= 1;
	cout << "float 감소후 : " << *_p_f << endl;
	return;
}
*/


int main() {

	// 실습 29. 2차원 동적배열 사용해보기.

	int x = 0, y = 0;
	int num = 0;
	bool flag = true;

	int** arr = new int* [x];
	
	while (flag)
	{
		cout << "x를 입력하세요 : ";
		cin >> x;
		int** arr = new int* [x];

		cout << "y를 입력하세요 : ";
		cin >> y;
		for (int i = 0; i < y; i++)
		{
			arr[i] = new int[y];
		}

		if (x < 0 || y < 0)
		{
			cout << "x와 y모두 양수를 입력해주세요." << endl;
			continue;
		}
		if (x == 0 || y == 0)
		{
			cout << "x와 y모두 양수를 입력해주세요." << endl;
			continue;
		}
		

		for (int i = 0; i < x; i++)
		{
			for (int j = 0;j < y;j++)
			{
				num++;
				arr[i][j] = num;
			}
		}
		flag = false;
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



	// 실습 28. 동적배열 사용해보기
	/*
	int val = 0;

	cout << "배열의 크기를 입력하세요 : ";
	cin >> val;

	cout << "-- " << val << "개의 값을 입력하세요 --" << endl;

	int *arr = new int[val];

	for (int i = 0; i < val; i++)
	{
		cout << i + 1 << "번째 값 : ";
		cin >> arr[i];
	}

	cout << "입력된 배열의 값: ";

	for (int i = 0; i < val; i++)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
	*/


	// 실습 27, 포인터 사용해보기
	/*char val_ch = 'C';
	int val_i = 10;
	float val_f = 5.5;

	ch_add(&val_ch);
	ch_sub(&val_ch);
	i_add(&val_i);
	i_sub(&val_i);
	f_add(&val_f);
	f_sub(&val_f);*/
	


	/*
	int val = 5;
	// 참고하고자 하는 자료형과 자료형을 똑같이 설정해준다.

	
	int* p_v = &val;

	cout << "변수  값   : " << val << endl;
	cout << "포인터 값  : " << p_v << endl;
	cout << "*포인터 값 : " << *p_v << endl; // 포인터 주소안에 들어가있는 변수값에 접근하겠다는 뜻.
	// 메모리주소값이 16자리인 이유 : 64비트 운영체제인 컴퓨터이기 때문.
	// 16진수로 나온다.
	// 주소값으로 나오는 한 자리가 4비트, 리블
	// 4 * 16자리 해서 64비트가 된다. 

	val = 20;
	cout << "변수  값   : " << val << endl;
	cout << "재할당 포인터 : " << p_v << endl;
	cout << "*재할당 포인터 : " << *p_v << endl; 

	*p_v += 3; // 포인터로 값에 접근할 수 있다.
	// p_v++ <- 이건 안된다.
	// 우선순위때문에, * + 사이에 우선순위가 다르듯.
	// 프로그램상에서 증감연산자의 우선순위가 포인터 접근 우선순위보다 높다.
	// 그래서 주소값이 1 증가하게된다.
	// 아무것도 저장되지않은 주소값을 참조하기에 쓰레기값이 출력되게 된다.

	// *p_v에 증감연산자를 쓰고싶다면??
	// (*p_v)++ 괄호로 우선순위를 지정해주면 된다.

	// 메모리값은 cpu와 등등이 연산하면서 계속 값을 넣고 빼고 하는데, 이걸 지워주지 않기에 쓰레기값은 그 값이 출력된다고 보면된다.

	cout << "변경후 : " << *p_v << endl;

	// 파이썬과 다른점.
	// 똑같은 변수를 할당한다고 해도, 다른 메모리에 값을 저장한다.


	char ch = 'a';
	char* p_ch = &ch; // 일단 안됨.. 왜 안됨?

	// cout의 특성때문이다. 얘는 문자열을 출력하려고하기때문에, char을 만나도 문자열으로 해석해서.

	// 어디가 문자열의 끝인지 몰라서.
	// char arr[] = { 'c' , 'v', .... 's', 0} 이런거처럼 0이나 NULL로 끝을 정해줘야 쓰레기값이 안나오는 것. 처럼

	cout << "문자 포인터 주소 : " << (void*)p_ch; // 이렇게  보이드형 포인트로 포인터로 형변환을 해줘야 char형의 주소를 출력할 수 있다.
	cout << "문자 포인터 : " << *p_ch;


	int arr[3] = { 1,2,3 };

	int *p_arr = NULL;
	p_arr = arr; // 배열은 그 자체가 주소다.

	cout << "배열 포인터 : " << *p_arr << endl;
	// 값이 배열의 첫번째 하나만 출력되는데, 4 바이트면 주소가 4갠데,
	// 하나만 출력하기 때문이다.

	// 배열은 순서대로 메모리에 저장되는데, 이건 컴퓨터 속도, 효율의 측면에서 좋다.
	*p_arr++;
	cout << "배열 포인터 : " << *p_arr << endl;
	// 이러면 2가 출력된다.
	// 아까는 그 다음 주소에 저장되넥 없었기 때문인다..

	(*p_arr)++;
	cout << "배열 포인터 : " << *p_arr << endl;
	// arr[1] 이 1증가한다.

	(*p_arr++)++;
	cout << "배열 포인터 : " << *p_arr << endl;
	// arr[2] 이 1증가한다.
	*/


	//##########################################################################################
	// 스트링은 char의 배열이다.
	//string str = "hello";

	//cout << str[5] << endl;
	//// 문자열은 무조건 0또는 NULL이 있어야 끝난다.
	//// 그래서 원래 인덱스를 하나 넘겨서 출력해본다면 0이 출력된다.
	//char c_arr[] = { 'h', 'e', 'l', 'l', 'o', NULL };

	//str = c_arr;

	//cout << str.length() << endl; // NULL은 카운팅되지 않는다.



	// ---------------------------------------------------------------------------
	///--- 동적 배열
/*
	int h = 0;

	cout << "숫자를 입력하시오 : ";
	cin >> h; // 할당하고자 하는 배열의 크기

	int* arr = new int[h]; // 10개의 동적배열이 할당됨,
	
	for (int i = 0; i < h; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < h; i++)
	{
		cout << arr[i] << " ";
	}
*/

	// 기존배열은 일단 [10]을 선언한다고 하면 10이 완전히 정해지는것이다.
	// 하지만 동적배열은 배열의 개수를 자유자재로 늘릴 수 있다.
	/*
	arr[0] = 10;

	cout << "동적배열 : " << arr[0] << endl;
	*/

/*
	int h = 0;

	cout << "숫자를 입력하시오 : ";
	cin >> h; // 할당하고자 하는 배열의 크기

	int* arr = new int[2];

	for (int i = 0; i < h; i++)
	{
		int* arr = new int[2]; // 이렇게 해주면 h * 2 개가 동적배열에 새로 할당되는것이다.
	}
	
	arr[21] = 2;

	cout << arr[21];

	delete[] arr;

*/

// -----------------------------
// 2차원 동적 배열
	/*int s_arr[2][3] = {};

	int val=0;
	cout << "배열 크기를 설정 하세요" << endl;
	cin >> val;

	int** arr2 = new int* [val];

	for (int i = 0; i < val; i++)
	{
		arr2[i] = new int[val];
	}

	for (int i = 0; i < val; i++)
	{
		for (int j = 0;j < val;j++)
		{
			arr2[i][j] = 1;
		}
	}

	for (int i = 0; i < val; i++)
	{
		for (int j = 0;j < val;j++)
		{
			cout << arr2[i][j]<< " ";
		}
		cout << endl;
	}

	for (int i = 0; i < val; i++)
	{
		delete[] arr2[i];
	}
	delete[] arr2;*/

	// **p
	

	/*int val = 10;
	int* p = &val;
	int** pp = &p;*/ // 포인터의 주소값을 저장할 때,,, 이렇게 저장한다.
	
	/*cout << "변수 값 : " << val;
	cout << "변수 값 : " << *pp;
	cout << "변수 값 : " << **pp;*/ // 그냥 이렇게 하면 된다.

	//int s_arr[2][3] = { {1,2,3},{12,22,32} };

	//int *p_arr = *s_arr; // 2차원 배열을 넣을라면 이렇게....;;; 
	//// 첫번째 요소값을 넣어주면 된다.

	//cout << "변수 값 : " << *(p_arr+3); // 순서대로 두번째 배열로 넘어간다.
	//int s_arr[2][3] = { {1,2,3,12,22,32} }; 컴퓨터 안에서는 이렇게 되어있는거나 마찬가지다.

	//int s_arr[10] = { 0, };

	//int* p_s = new int[10];

	//p_s[100] = 10; // 이렇게는 쓰면 안된다.. 사용할 수 있긴 있다.

	//// 주소를 이용해서 접근해서, 할당을 강제로 할 순 있다.
	//// 할당하지 않은 것에 접근을 하면,
	//// 나중에 같은 코드라도 연산이 많아지면, 다른 곳에서 그 메모리를 사용하면서??
	//// 오류가 발생할 가능성이 있고,
	//// 값을 예측할 수 없어진다.

	//cout << "동적 테스트 : " << p_s[100] << endl;


	//int* p = NULL;
	//double* d = NULL;

	//cout << "정적 배열 크기 : " << sizeof(s_arr) << endl;
	//cout << "동적 배열 크기 : " << sizeof(p_s) << endl;
	//cout << "int 포인터 크기 : " << sizeof(p) << endl;
	//cout << "double 포인터 크기 : " << sizeof(d) << endl;


	return 0;
}

#endif