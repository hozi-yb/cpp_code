#include <iostream>
#include <string>

//#define MAIN5

#ifdef MAIN5

using namespace std;

int main()
{

	/*
	const int val = 5; // �л��� �� ��
	// const : �긦 ������ ���� �ʰ� ����� ���ڴٴ� ��.
	// �迭�� Ư���� []�� ������ ���� �ȵȴ�.
	// �׷��� int val�� ������ ���ָ� �迭 ����� ���� ���Ѵ�.
	
	int grade[val] = { 1,2,3,4,5 }; // �迭�� ũ�⸦ �����صθ�, 0���� ä����������, ��������� �ʱ�ȭ���ִ°� ����.
	float sum = 0;

	for (int i = 1; i <= val; i++)
	{
	cout << i << "�� �л��� ������ �Է��ϼ���: ";
	cin >> grade[i - 1];

	sum += grade[i-1];
	}
	cout << "���� ��� : " << sum / val;
	*/

	
	int exam[5][3] = { {101,}, };

	string input = " ";
	string space = " ";
	
	

	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "�� �л��� (���� ���� ����) ������ �Է��Ͻÿ�. : " << endl;
		std::cout << "(���� ���� ����) ���� ���̴� �����̽��� " << endl;
		getline(cin, input);
		int point = 0;
		

		for (int k = 0; k < 3; k++)
		{
			int val = input.find(space, point);

			string score = input.substr(point, val - point);

			exam[i][k] = stoi(score);
			point = val + 1;
		}

		
		std::cout << endl;
	}

	std::cout << "===============================================" << endl;
	std::cout << endl;


	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "�� �л��� ����, ����, ���� ������ : ";
		for (int j = 0; j < 3; j++)
		{
			std::cout << exam[i][j] << " ";
		}
		std::cout << endl;
	}

	



	return0;


}

#endif