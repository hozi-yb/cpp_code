#include <iostream>
#include <string>

//#define MAIN1 // ������ �������� �����ش�.

#ifdef MAIN1 // ������ �������� �����༭, ���ǰ��Ǿ������� endif���� �����ϴ� �����̴�. ��ó����


// ��������

std::string user_input;

//int val = 20000;
//char ch = 0;

int main() { // �����Լ��� ������ �־���Ѵ�. int��°� �����. �Լ� �̸��� main �Է°��� () main�Լ��� �Է°��� ���� ����. 
    //int val = 0; // ��� ���� �ڿ��� �����ݷ��� �־���Ѵ�. �̰� �����̴�.

    //std::cout << "Hello! ����� ������1��" << std::endl;
    //std::cout << "hi~" << std::endl;

    // std:: <- namespace ��� �Ѵ�.
    // std::cout <- std��� ���ӽ����̽����� cout�̶�� �Լ��� �������� ��.
    // cout�� �Ǿ��ִ� ��쵵 �� �� �ִµ�.
    // using namespace std; �� ���� ����صθ� �׳� cout�� �� �� �ְԵȴ�. int main �ٱ����� �����.

    //bool b = 0; // 0�� 0, 0���� �ٸ� ���ڴ� 1�� �ν����Ѵ�.
    //char c = 'A'; // ���ڴ� ''
    //int i = 1;
    //float f = 1.111;
    //double d = 0.0000012102120;
    //unsigned long long int ll = 12301230912301;

    //std::cout << "bool ���� ������: " << sizeof(b) << std::endl; // <<�� ����
    //std::cout << "char ���� ������: " << sizeof(c) << std::endl;
    //std::cout << "int ���� ������: " << sizeof(i) << std::endl;
    //std::cout << "float ���� ������: " << sizeof(f) << std::endl;
    //std::cout << "double ���� ������: " << sizeof(d) << std::endl;
    //std::cout << sizeof(ll) << std::endl;

    //// ������ũ ǥ���
    //char student_grades = 'A';


    //// ī��ǥ���
    //float sensor1Temperature = 0.0;
    //float sensor1Moisture = 0.0;

    //// �Ľ�Į ǥ���
    //float MotorSpeed = 0.0;
    //int val = 10000;
    //std::cout << "���� ����ϰ� ������...~" << std::endl;
    //std::cout << val << std::endl;

    /*std::cout << "���� �Է��Ͻÿ� " << std::endl;
    std::cin >> val;
    std::cout << "�Էµ� ��: ";
    std::cout << val;

    std::cout << "���� �Է��Ͻÿ� " << std::endl;
    std::cin >> ch;
    std::cout << "�Էµ� ��: ";
    std::cout << ch;

    scanf("%d", "&i");
    printf("%d", "&i")
    */


    std::cout << "����� ���ڿ��� �Է��ϼ���, �� ���ڿ��� 5ȸ ���� ��µ˴ϴ�." << std::endl;
    std::cout << "�Է� : ";
    std::cin >> user_input;

    for (int i = 1; i < 6; i++)
    {
        std::cout << i << "ȸ ��� ! �Է��� ���ڿ� : " << user_input << std::endl;
    }


    return 0; // ���ϰ��� ���־���Ѵ�.
}




#endif