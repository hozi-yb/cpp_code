#include <iostream>

using namespace std;

//#define MAIN8_2

#ifdef MAIN8_2

int main() {

	// �ǽ� 29. 2���� �����迭 ����غ���.
	/*
	int x = 0, y = 0;
	int num = 0;
	bool flag = true;

	while (flag)
	{
		cout << "x�� �Է��ϼ��� : ";
		cin >> x;
		cout << "y�� �Է��ϼ��� : ";
		cin >> y;
		

		if (x > 0 && y > 0)
		{
			flag = false;
		}
		else
		{
			cout << "x�� y��� ����� �Է����ּ���." << endl;
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


	// ������ ����.
	int num = 100;
	int* p = NULL;
	p = &num;

	cout << "����Ʈ p�� ����Ű�� �� : " << * p << endl;
	cout << "   num��   ��          : " << num << endl;

	*p += 50;

	cout << "����Ʈ p�� ����Ű�� �� : " << *p << endl;
	cout << "   num��   ��          : " << num << endl;

	(*p)++;

	cout << "����Ʈ p�� ����Ű�� �� : " << *p << endl;
	cout << "   num��   ��          : " << num << endl;

	*p++; // �켱������ ���������ڰ� �� ����.. �׷��� �ּҰ� �ϳ��� �����ϰ� �Ǿ ������ ���� ��µȴ�.

	cout << "����Ʈ p�� ����Ű�� �� : " << *p << endl;
	cout << "   num��   ��          : " << num << endl;

	int n1 = 10;
	int n2 = 20;

	int* p1 = &n1;
	int* p2 = &n2;

	cout << "�ּҰ� ���� : " << *p1 + *p2 << endl;


	return 0;
}

#endif