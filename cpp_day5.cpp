#include <iostream>
#include <string>

//#define MAIN5

#ifdef MAIN5

using namespace std;

int main()
{

	/*
	const int val = 5; // 학생의 명 수
	// const : 얘를 변수로 보지 않고 상수로 보겠다는 뜻.
	// 배열은 특성상 []에 변수가 들어가면 안된다.
	// 그래서 int val로 선언을 해주면 배열 선언시 넣지 못한다.
	
	int grade[val] = { 1,2,3,4,5 }; // 배열의 크기를 설정해두면, 0으로 채워져있지만, 명시적으로 초기화해주는게 좋다.
	float sum = 0;

	for (int i = 1; i <= val; i++)
	{
	cout << i << "번 학생의 성적을 입력하세요: ";
	cin >> grade[i - 1];

	sum += grade[i-1];
	}
	cout << "성적 평균 : " << sum / val;
	*/

	
	int exam[5][3] = { {101,}, };

	string input = " ";
	string space = " ";
	
	

	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "번 학생의 (영어 수학 과학) 성적을 입력하시오. : " << endl;
		std::cout << "(영어 수학 과학) 점수 사이는 스페이스바 " << endl;
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
		std::cout << i+1 << "번 학생의 영어, 수학, 과학 성적은 : ";
		for (int j = 0; j < 3; j++)
		{
			std::cout << exam[i][j] << " ";
		}
		std::cout << endl;
	}

	



	return0;


}

#endif