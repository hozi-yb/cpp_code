#include <iostream>
#include <string>
#include <typeinfo>

#define MAIN5

#ifdef MAIN5

using namespace std;

int main()
{
	int grade[5] = { 1,2,3,4,5 };
	float sum = 0;


	for (int i = 1; i <= 5; i++)
	{
	cout << i << "�� �л��� ������ �Է��ϼ���: ";
	cin >> grade[i - 1];

	sum += grade[i-1];
	}
	cout << "���� ��� : " << sum / 5;
}

#endif