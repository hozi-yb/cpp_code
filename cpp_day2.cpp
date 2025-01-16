#include <iostream>
#include <string>

//#define MAIN2 // 정의한 변수명을 적어준다.


#ifdef MAIN2 // main이 있는 함수를 감싸준다.
//float f = 3.14;
//
//int i = 0;

int main()
{
    //-------------------
    /*자료형 형변환*/


    //i = static_cast<int> (f); // c++에서 자료형 형변환.

    //std::cout << "형 변환 결과 : " << i << std::endl;

    //int val = 1; //조건을 만족하는지 확인할 변수 선언
    //std::cout << "숫자를 입력하시오. " << std::endl;
    //std::cin >> val;

    //------------------
    /*if문*/


    //std::cout << "hi" << std::endl;
    //std::cout << "KDT" << std::endl;
    //std::cout << "신재생에너지 1기" << std::endl;

    //if (val == 1) {
    //    std::cout << "아두이노";
    //}
    //else if (val == 2) {
    //    std::cout << "파이썬";
    //}
    //else if (val == 3) {
    //    std::cout << "AWS";
    //}
    //else {
    //    std::cout << "아무거나~";
    //}

    //std::cout << "입니다." << std::endl;
    /*
   int age = 0;
    std::cout << "나이를 입력하세요" << std::endl;

    std::cin >> age;
        if (age > 199) {
            std::cout << "나이가 너무 많습니다.....!!";
        
        }
        else if (age >= 20) {
            std::cout << "성인";
        }
        else if (age >= 17) {
            std::cout << "고등학생";
        }
        else if (age >= 14) {
            std::cout << "중학생";
        }
        else if (age >= 8) {
            std::cout << "초등학생";
        }
        else if (age <= 7) {
            std::cout << "유아";
        }
        else if (age < 0) {
            std::cout << "양수를 입력";
        }
        
    */
    /*
    std::string name;

    std::cout << "이름을 입력하세요" << std::endl;
    std::cin >> name;
    // 순서대로 조건을 만족하면 거기서 끝
    if (name == "홍길동") {
        std::cout << "남자" << std::endl;
    }
    else if (name == "성춘향") {
        std::cout << "여자" << std::endl;
    }
    else {
        std::cout << "모르겠어요." << std::endl;
    }
    */

    
    //---------
    // 비교연산자
    /*
    int score = 60;

    std::cout << "제 등급은..";

    if (score == 100) {
        std::cout << "A+";
    }
    else if (score >= 80) {
        std::cout << "B+";
    }
    else if (score >= 60) {
        std::cout << "C+";
    }
    else {
        std::cout << "F";
    }

    std::cout << "입니다." << std::endl;
    */
    
//-------------------
// switch문
/*
    int val = 0;

    std::cout << "숫자를 입력하세요. : ";
    std::cin >> val;

    switch (val) {
        case 0:
            std::cout << "case 0 입니다." << std::endl;
            break;
    
        case 1:
            std::cout << "case 1 입니다." << std::endl;
            break;
        case 2:
            std::cout << "case 2 입니다." << std::endl;
            break;
        case 3:
            std::cout << "case 3 입니다." << std::endl;
            break;
        case 4:
            std::cout << "case 4 입니다." << std::endl;
            break;
        default:
            break;
    }
    // break가 없다면, 그 다음 case까지 같이 출력된다.
    // case문에는 꼭 break를 적어주어야한다.


*/

    //----------------
    //산술연산자.
    /*
    // and연산
    int val = 0;
    bool flag = true;

    std::cout << "제가 입력한 숫자는? ";
    std::cin >> val;
    
     
    if (val >= 40 && val <= 60) {
        std::cout << "40에서 60사이 입니다.";
    }
    else if (val >= 70 && val <= 80) {
        std::cout << "70에서 80사이 입니다.";
    }
    else if (val >= 90 && val <= 100) {
        std::cout << "90에서 100사이 입니다.";
    }
    else {

    }
    */
    // || or연산자
    //int val = 0;
    //int val2 = 0;
    //bool flag = true;

    //val = 100;
    //val2 = 200;

    // 50 <= val <= 100 이라면??
    // 앞에서부터 먼저 연산하기 때문에 참이다.
    // 50 이하여도.
    // 50 <= val이 false가 된다.
    // 근데 false는 0이다.
    // 0 <=100 은 True이기 때문에 True가 되버리는 불상사가....

    /*
    if (val >= 100 || val2 <= 60) {
        std::cout << "실행";
    }
    else { std::cout << "실행안됨." << std::endl; }
    */

    /*
    if (flag) {
        std::cout << "참입니다.";
    }
    else {
        std::cout << "거짓입니다.";
    }
    */
    
    
    /*
    
    bool flag = true와if를 합쳐서 출력하고싶지 않은 부분을 false로 만들어서 관리할 수 있다.
    
    제어하고싶은 부분을 if(flag)로 감싸두고,
    bool flag = true 부분만 !true로 바꿔주면 일일히 수정하지 않고 한번에 제어할 수 있기에,
    용이하다.

    */
    /*
    int val_1 = 9;
    int val_2 = 21;
    int res = 0;

    res = val_1 + val_2;
    std::cout << "덧셈 결과 : " << res << std::endl;

    res = val_1 - val_2;
    std::cout << "뺄셈 결과 : " << res << std::endl;

    res = val_1 * val_2;
    std::cout << "곱셈 결과 : " << res << std::endl;

    res = val_2 / val_1;
    std::cout << "나눗셈 결과 : " << res << std::endl; // 몫 출력

    res = val_2 % val_1;
    std::cout << "나머지 결과 : " << res << std::endl;

    val_1++; // 다음라인에서부터 증가한 값이 적용된다.
    // ++val_1; -> 당장 이 라인에서부터 증가한 값이 바로 적용된다.
    res = val_1;
    std::cout << "증감연산자(+) 결과 : " << res << std::endl;
    val_1--;
    res = val_1;
    std::cout << "증감연산자(-) 결과 : " << res << std::endl;

    int res = 1;
    std::cout << "후위증가 :" << res++ << std::endl; // 값 : 1
    
    int res = 1;
    std::cout << "전위증가 :" << ++res << std::endl; // 값 : 2
    */

    //---------------------
    //실습6. switch문
    /*
    int score = 0;
    std::cout << "점수를 입력하시오." << std::endl;
    std::cin >> score;
    char rank = 0;

    if (100 >= score && score > 90) {
        rank = 'A';
    }
    else if (90 >= score && score > 75) {
        rank = 'B';
    }
    else if (75 >= score && score > 50) {
        rank = 'C';
    }
    else if (50 >= score && score > 34) {
        rank = 'D';
    }
    else {
        rank = 'F';
    }

    switch (rank) {
        case 'A':
            std::cout << "학점은 A" << std::endl;
            break;
        case 'B':
            std::cout << "학점은 B" << std::endl;
            break;
        case 'C':
            std::cout << "학점은 C" << std::endl;
            break;
        case 'D':
            std::cout << "학점은 D" << std::endl;
            break;
        default:
            std::cout << "학점은 F" << std::endl;
            break;
    }
    */
    
    //---------------------------
    // 실습7. 삼항연산자
    /*
    int val = 0;

    std::cout << "수를 입력." << std::endl;
    std::cin >> val;

    val % 5 == 0 ? std::cout << val << "는 5의 배수입니다." 
    << std::endl : std::cout << val << "는 5의 배수가 아니네요ㅜㅜ" 
    << std::endl;
    */
    //종합실습1

/*
    int today = 0;
    int birthday = 0;

    std::cout << "오늘 날짜입력 (MMDD)" << std::endl;
    std::cin >> today;
    //std::cout << today;

    std::cout << "나의 생일 입력 (MMDD)" << std::endl;
    std::cin >> birthday;
    //std::cout << birthday;
    
    
    if (today > birthday) {
        std::cout << today << '>' << birthday << std::endl
            << "생일 아직 안지남" << std::endl;
    }
    else{
        std::cout << today << '<' << birthday << std::endl
            << "생일 지남 .." << std::endl;
    }
*/

    // 종합실습2
    int val_1 = 0;
    int val_2 = 0;

    char calc = 0;

    std::cout << "연산자 선택" << std::endl;
    std::cout << "(+, -, *, /, %)" << std::endl;
    std::cin >> calc;

    std::cout << "첫번째 수를 입력하시오." << std::endl;
    std::cin >> val_1;
    std::cout << "두번째 수를 입력하시오." << std::endl;
    std::cin >> val_2;

    switch (calc) {
        case '+':
            std::cout << val_1 << '+' << val_2 << '=' << val_1 + val_2;
            break;
        case '-':
            std::cout << val_1 << '-' << val_2 << '=' << val_1 - val_2;
            break;
        case '/':
            std::cout << val_1 << '/' << val_2 << '=' << val_1 / val_2;
            break;
        case '%': 
            std::cout << val_1 << '%' << val_2 << '=' << val_1 % val_2;
            break;
        case '*': 
            std::cout << val_1 << '*' << val_2 << '=' << val_1 * val_2;
            break;
        default:
            std::cout << "잘못입력하셨습니다." << std::endl;
            break;
    }

    



    return 0;
}

#endif // define 끝