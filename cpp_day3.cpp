#include <iostream>

//#define MAIN3

#ifdef MAIN3

int main() {
	// ���սǽ� 1
    /*
	int today = 0;
	int birthday = 0;

	std::cout << "���� ��¥�� �Է��Ͻÿ�." << std::endl;
	std::cin >> today;

	std::cout << "������ �Է��Ͻÿ�." << std::endl;
	std::cin >> birthday;

	if (today > birthday) {
		std::cout << "���� ��¥�� �� Ů�ϴ�." << std::endl;
		std::cout << "������ �������ϴ�." << std::endl;
	}
	else {
		std::cout << "���� ��¥�� �� Ů�ϴ�." << std::endl;
		std::cout << "������ ������ �ʾҽ��ϴ�." << std::endl;
	}
	*/
    // ���սǽ� 2
    /*
    int val_1 = 0;
    int val_2 = 0;

    char calc = 0;

    std::cout << "������ ����" << std::endl;
    std::cout << "(+, -, *, /, %)" << std::endl;
    std::cin >> calc;

    std::cout << "ù��° ���� �Է��Ͻÿ�." << std::endl;
    std::cin >> val_1;
    std::cout << "�ι�° ���� �Է��Ͻÿ�." << std::endl;
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
    default: std::cout << "�߸��Է��ϼ̽��ϴ�." << std::endl;
        break;
    }
    */
    
    //-----------------------------------
    // for��

    //int val = 0;
    //int until = 3;

    //for (�ʱⰪ; ���ǹ�; ������;){}
    /*
    for (int i = 0; i <= until; i++)
    {
        std::cout << i << std::endl;
        val++;
    }
    */

    // ���� for��
    /*
    for (int i = 1; i <= 3; i++) // for���� �� �������� ���� ������, for���� �ٸ��� ���� ������ ���൵ ������~
    {
        std::cout << "\n�ܺ� for��" << i << "��°\n" << std::endl;
        for (int i = 1; i <= 5; i++)
        {
            std::cout << "���� for��" << i << "��°" << std::endl;
        }
    }
    */


    //---------------------------------------
    // �ǽ� 8��
    //int val = 1;
    //int five = 5;
    //int until = 9;

    // 5��
    /*
    std::cout << five << "�� ���" << std::endl;
    for (int i = 1; i <= 9; i++)
    {
        std::cout << five << " * " << i << " = " << five * i << std::endl;
    }
    */
    

    // ������
    /*
    std::cout << "1~9�� ���" << std::endl;
    for (int dan = 1; dan <= 9; dan++) {
        std::cout << "----" << dan << "��----" << std::endl;
        for (int num = 1; num <= 9; num++)
        {
            std::cout << dan << " * " << num << " = " << dan * num << std::endl;            
        }
    }
    */
/*
    int dan = 1;

    std::cout << "1~9�� ���" << std::endl;
    for (int i = 1; i <= 9; i++) {
        std::cout << "----" << dan << "��----" << std::endl;
        for (int i = 1; i <= 9; i++)
        {
            std::cout << dan << " * " << i << " = " << dan * i << std::endl;
        }
        dan++;
    }
*//*
    int val = 0;
    int sum = 0;

    std::cout << "1���� n������ �� ���ϱ�." << std::endl << std::endl;

    std::cout << "����(���� ����)�� �Է��Ͻÿ�. : ";
    std::cin >> val;

    for (int i = 1; i <= val; i++) sum += i; // �����ΰ�� �����ϰ� ǥ���� �� �ִ�.
    
    std::cout << "1���� " << val << "������ ���� : " << sum << std::endl;
*/


    //---------------------------------------\
    // for�� ���ѷ���
/*
    for (;;) {
        std::cout << "���ѷ���" << std::endl;
    }
*/

    // while��
/*
    int i = 0; // �ʱⰪ�� ������ �־�� �Ѵ�.
    int con = 10;
    while (i < con) // �������� ������ �ȿ� �������� ���� ��������Ѵ�.
    {
        std::cout << "while�� " << i << "�� ° ���" << std::endl;
        i++;
        if (i == 5) break;
    }
*/
    //do-while��
/*
    int val = 0;   
    do {
        std::cout << "while��" << std::endl;
        std::cout << "�����ϴ� ���� : " << val << std::endl;
        val++;
    } while (val < 0);
*/

    // �ǽ� 10
    /*
    int dan = 1;
    int sum = 0;
    while (dan <= 9)
    {
        int val = 1;
        std::cout << "----" << dan << "��----" << std::endl;
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
    std::cout << "1���� n������ �� ���ϱ�." << std::endl << std::endl;

    std::cout << "����(���� ����)�� �Է��Ͻÿ�. : ";
    std::cin >> val;

    while (num <= val) { 
        sum += num;
        num++;
    }
    std::cout << "1���� " << val << "������ ���� : " << sum << std::endl;
*/


    //�ǽ� 11
/*
    int val = 1;
    int sum = 0;
 
    while (val>0)
    {
        std::cout << "���ڸ� �Է��Ͻÿ�. (exit : 0) : ";
        std::cin >> val;
        sum += val;
    }
    std::cout << "�� : " << sum << std::endl;
*/

    
    // �ǽ� 12
/*
    int input = 0;
    int star = 1;
    std::cout << "���� �Է� : ";
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
// ------ �ǽ� 12

    int input = 0;
    int star = 1;
    int count = 0;
    int blank = 0;

    std::cout << "�Ƕ�̵��� ���̸� �Է��Ͻÿ� : ";
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