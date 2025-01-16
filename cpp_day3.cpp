#include <iostream>

//#define MAIN3

#ifdef MAIN3

int main() {
	// 종합실습 1
    /*
	int today = 0;
	int birthday = 0;

	std::cout << "오늘 날짜를 입력하시오." << std::endl;
	std::cin >> today;

	std::cout << "생일을 입력하시오." << std::endl;
	std::cin >> birthday;

	if (today > birthday) {
		std::cout << "오늘 날짜가 더 큽니다." << std::endl;
		std::cout << "생일이 지났습니다." << std::endl;
	}
	else {
		std::cout << "생일 날짜가 더 큽니다." << std::endl;
		std::cout << "생일이 지나지 않았습니다." << std::endl;
	}
	*/
    // 종합실습 2
    /*
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
    case '+': std::cout << val_1 << '+' << val_2 << '=' << val_1 + val_2;
        break;
    case '-': std::cout << val_1 << '-' << val_2 << '=' << val_1 - val_2;
        break;
    case '/': std::cout << val_1 << '/' << val_2 << '=' << val_1 / val_2;
        break;
    case '%': std::cout << val_1 << '%' << val_2 << '=' << val_1 % val_2;
        break;
    case '*': std::cout << val_1 << 'x' << val_2 << '=' << val_1 * val_2;
        break;
    default: std::cout << "잘못입력하셨습니다." << std::endl;
        break;
    }
    */
    
    //-----------------------------------
    // for문

    //int val = 0;
    //int until = 3;

    //for (초기값; 조건문; 증감문;){}
    /*
    for (int i = 0; i <= until; i++)
    {
        std::cout << i << std::endl;
        val++;
    }
    */

    // 이중 for문
    /*
    for (int i = 1; i <= 3; i++) // for문을 한 구역으로 보기 때문에, for문이 다르면 같은 변수를 써줘도 괜찮다~
    {
        std::cout << "\n외부 for문" << i << "번째\n" << std::endl;
        for (int i = 1; i <= 5; i++)
        {
            std::cout << "내부 for문" << i << "번째" << std::endl;
        }
    }
    */


    //---------------------------------------
    // 실습 8번
    //int val = 1;
    //int five = 5;
    //int until = 9;

    // 5단
    /*
    std::cout << five << "단 출력" << std::endl;
    for (int i = 1; i <= 9; i++)
    {
        std::cout << five << " * " << i << " = " << five * i << std::endl;
    }
    */
    

    // 구구단
    /*
    std::cout << "1~9단 출력" << std::endl;
    for (int dan = 1; dan <= 9; dan++) {
        std::cout << "----" << dan << "단----" << std::endl;
        for (int num = 1; num <= 9; num++)
        {
            std::cout << dan << " * " << num << " = " << dan * num << std::endl;            
        }
    }
    */
/*
    int dan = 1;

    std::cout << "1~9단 출력" << std::endl;
    for (int i = 1; i <= 9; i++) {
        std::cout << "----" << dan << "단----" << std::endl;
        for (int i = 1; i <= 9; i++)
        {
            std::cout << dan << " * " << i << " = " << dan * i << std::endl;
        }
        dan++;
    }
*//*
    int val = 0;
    int sum = 0;

    std::cout << "1부터 n까지의 합 구하기." << std::endl << std::endl;

    std::cout << "숫자(양의 정수)를 입력하시오. : ";
    std::cin >> val;

    for (int i = 1; i <= val; i++) sum += i; // 한줄인경우 간략하게 표현할 수 있다.
    
    std::cout << "1부터 " << val << "까지의 합은 : " << sum << std::endl;
*/


    //---------------------------------------\
    // for문 무한루프
/*
    for (;;) {
        std::cout << "무한루프" << std::endl;
    }
*/

    // while문
/*
    int i = 0; // 초기값이 무조건 있어야 한다.
    int con = 10;
    while (i < con) // 증감식이 없으니 안에 증감문을 따로 적어줘야한다.
    {
        std::cout << "while문 " << i << "번 째 출력" << std::endl;
        i++;
        if (i == 5) break;
    }
*/
    //do-while문
/*
    int val = 0;   
    do {
        std::cout << "while문" << std::endl;
        std::cout << "증가하는 숫자 : " << val << std::endl;
        val++;
    } while (val < 0);
*/

    // 실습 10
    /*
    int dan = 1;
    int sum = 0;
    while (dan <= 9)
    {
        int val = 1;
        std::cout << "----" << dan << "단----" << std::endl;
        while (val <= 9)
        {
            sum = dan * val;
            std::cout << dan << " * " << val << " = " << sum << std::endl;
            val++;
        }
        dan++;
    }
    */
/*
    int val = 0;
    int sum = 0;
    int num = 1;
    std::cout << "1부터 n까지의 합 구하기." << std::endl << std::endl;

    std::cout << "숫자(양의 정수)를 입력하시오. : ";
    std::cin >> val;

    while (num <= val) { 
        sum += num;
        num++;
    }
    std::cout << "1부터 " << val << "까지의 합은 : " << sum << std::endl;
*/


    //실습 11
/*
    int val = 1;
    int sum = 0;
 
    while (val>0)
    {
        std::cout << "숫자를 입력하시오. (exit : 0) : ";
        std::cin >> val;
        sum += val;
    }
    std::cout << "합 : " << sum << std::endl;
*/

    
    // 실습 12
/*
    int input = 0;
    int star = 1;
    std::cout << "층수 입력 : ";
    std::cin >> input;

    for (int i = 1; i <= input; i++)
    {
        star = 1;
        while (star <= i)
        {
            std::cout << "*";
            star++;
        }
        std::cout << std::endl;
        std::cout << std::endl;
    }
*/
// ------ 실습 12

    int input = 0;
    int star = 1;
    int count = 0;
    int blank = 0;

    std::cout << "피라미드의 높이를 입력하시오 : ";
    std::cin >> input;
    blank = input-1;
    std::cout << std::endl;

    for (int i = 1; i <= input; i++)
    {
        count = (i * 2) - 1;
        star = 1;
        
        for (int i = 1; i <= blank; i++) std::cout << " ";

        while (star <= count)
        {
            std::cout << "*";
            star++;
        }
        std::cout << std::endl;
        std::cout << std::endl;
        blank--;
    }


	return 0;
}
#endif