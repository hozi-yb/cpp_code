#include <iostream>
#include <string>

//#define MAIN1 // 정의할 변수명을 적어준다.

#ifdef MAIN1 // 정의한 변수명을 적어줘서, 정의가되어있으면 endif까지 실행하는 구문이다. 전처리문


// 절차지향

std::string user_input;

//int val = 20000;
//char ch = 0;

int main() { // 메인함수가 무조건 있어야한다. int라는걸 만든다. 함수 이름은 main 입력값은 () main함수는 입력값은 거의 없다. 
    //int val = 0; // 모든 문장 뒤에서 세미콜론이 있어야한다. 이게 문법이다.

    //std::cout << "Hello! 신재생 에너지1기" << std::endl;
    //std::cout << "hi~" << std::endl;

    // std:: <- namespace 라고 한다.
    // std::cout <- std라는 네임스페이스에서 cout이라는 함수를 가져오는 것.
    // cout만 되어있는 경우도 볼 수 있는데.
    // using namespace std; 를 먼저 명시해두면 그냥 cout만 쓸 수 있게된다. int main 바깥에서 사용함.

    //bool b = 0; // 0은 0, 0외의 다른 숫자는 1로 인식을한다.
    //char c = 'A'; // 문자는 ''
    //int i = 1;
    //float f = 1.111;
    //double d = 0.0000012102120;
    //unsigned long long int ll = 12301230912301;

    //std::cout << "bool 형의 사이즈: " << sizeof(b) << std::endl; // <<로 연결
    //std::cout << "char 형의 사이즈: " << sizeof(c) << std::endl;
    //std::cout << "int 형의 사이즈: " << sizeof(i) << std::endl;
    //std::cout << "float 형의 사이즈: " << sizeof(f) << std::endl;
    //std::cout << "double 형의 사이즈: " << sizeof(d) << std::endl;
    //std::cout << sizeof(ll) << std::endl;

    //// 스네이크 표기법
    //char student_grades = 'A';


    //// 카멜표기법
    //float sensor1Temperature = 0.0;
    //float sensor1Moisture = 0.0;

    //// 파스칼 표기법
    //float MotorSpeed = 0.0;
    //int val = 10000;
    //std::cout << "내가 출력하고 싶은것...~" << std::endl;
    //std::cout << val << std::endl;

    /*std::cout << "값을 입력하시오 " << std::endl;
    std::cin >> val;
    std::cout << "입력된 값: ";
    std::cout << val;

    std::cout << "값을 입력하시오 " << std::endl;
    std::cin >> ch;
    std::cout << "입력된 값: ";
    std::cout << ch;

    scanf("%d", "&i");
    printf("%d", "&i")
    */


    std::cout << "출력할 문자열을 입력하세요, 이 문자열은 5회 연속 출력됩니다." << std::endl;
    std::cout << "입력 : ";
    std::cin >> user_input;

    for (int i = 1; i < 6; i++)
    {
        std::cout << i << "회 출력 ! 입력한 문자열 : " << user_input << std::endl;
    }


    return 0; // 리턴값이 꼭있어야한다.
}




#endif