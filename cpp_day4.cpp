#include <iostream>
#include <string>
#include <typeinfo>

//#define MAIN4

#ifdef MAIN4

using namespace std;

int main()
{
	// ���ڿ�����
	/*
	std::string str = " ";

	//std::cin >> str; // ���⼱ �����̽��ٸ� ġ�� �� ���ķδ� ©���� ���´�..!
	//ex) �Է� : hello world, ��� : hello

	//getline(std::cin, str); //�̷��� �ؾ��� �����̽��� ���ı��� ���´�..!
	//ex) �Է� : hello world, ��� : hello world

	getline(std::cin, str, 'b'); // 'b'�� �Է¹����� �� ���ķδ� ��µ��� �ʴ´�. Ư������ �������� �Է��� �޴� ����� �ִ�.
	std::cout << "���ڿ� : " << str << std::endl;
	*/

	
	// ���⼭���ʹ� using namespace std;�� ����⶧���� std�Ƚᵵ �ȴ�.

	// string�� �� �� �ִ� ���.
	/*
	string str1 = " ";
	string str2 = "codingon";
	string str3 = ("codingon");
	string str4 = (str2);

	
	char str_arr[] = { 'h', 'e', 'l', 'l', 'o', NULL };
	// ��� ���ڿ��� null������ �������ϴµ�, �װ� ������ ��� ������(0, NULL)���� �������ؼ� �����Ⱚ�� ���� ��µȴ�.
	// �׷��� NULL�̳� 0�� �־��ָ� �ȴ�!!

	string str5(str_arr);

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << "str3 : " << str3 << endl;
	cout << "str4 : " << str4 << endl;
	cout << "str5 : " << str5 << endl;
	*/

	/*string str1 = "helloworldcodingon";
	string str2 = "on";
	string str3 = ("aaa");
	string str4 = ("bbb");
	string str5 = ("bbbbb");*/

	/*
	cout << "str1 + str2 : " << str1 + str2 << endl; // ���⳪ ������ �翬�� �ȵȴ�.
	cout << "str2 < str1 : " << (str2 < str1) << endl; // �ձ��ڸ� �񱳸��Ѵ�. �׷��� str2�� �� ũ��.
	cout << "str3 < str4 : " << (str3 < str4) << endl;
	cout << "str4 < str5 : " << (str4 < str5) << endl; // �ձ��ڰ� ������� ���ڿ��� ũ�⸦ ���Ѵ�.
	*/
	

	/*
	string str1 = "helloworldcodingon";

	cout << "at : " << str1.at(5) << endl; // �ε���
	cout << "index : " << str1[5] << endl; // �ε���
	cout << "front : " << str1.front() << endl; // �� �ձ���
	cout << "back : " << str1.back() << endl; // �� �ޱ���
	cout << "length : " << str1.length() << endl; // ���� ����
	str1.resize(5); // ���� �缳��. �տ������� 5�� �ڸ���.
	cout << "resize : " << str1 << endl;

	str1.clear();
	if (str1.empty())
	{
		cout << "���ڿ��� ����ֽ��ϴ�." << endl;
	}
	else
	{
		cout << str1 << endl;
	}

	cout << "empty : " << str1.empty() << endl;
	str1.clear();
	cout << "clear : " << str1.empty() << endl;
	*/
	/*
	string str1 = "codingonhihi";
	string str2 = "abcd";
	string str3 = ("aaa");
	string str4 = ("bbb");
	string str5 = ("bbbbb");


	str1.append(str2);

	str1.insert(4, str2); // (index, ������ ����)

	str1.replace(2, 2, str2); // (index, ���� ���� ����, ���� ����) ���� ������ ������...

	str1.erase(0, 6);

	cout << str1 << endl;
	*/

	/*string str1 = "codingon";
	string str2 = "helloworld";
	string str3 = "on";*/

	/*
	cout << str1.find(str3) << endl;

	cout << str1.substr(3) << endl; // 3 ~ ������ �κй��ڿ��� ��ȯ
	cout << str1.substr(3, 3) << endl; // 3 ~ 3���� �κй��ڿ��� ��ȯ

	cout << str1.compare(str2) << endl; // str2�� �� ũ�⶧���� ���� ��ȯ
	*/

	// �Ƶ��̳뿡�� "motor1on"�̶�� �´ٸ�, motor, 1, on�� �����̽��ؼ� ����ؾ� �� ��찡 �ֱ⿡, ����Ѵ�. length�� �ùٸ� ��ɾ����� �����ϰų�,, ���

	/*
	cout << isdigit('2') << endl;
	cout << isdigit('a') << endl;// ���ڸ��ȴ�. true��� 0�� �ƴ� ��� �ٸ� ���� ���´�
	cout << isalpha('a') << endl;
	cout << isalpha('1') << endl;

	cout << toupper('c') << endl; // �ƽ�Ű�ڵ� ���� �����µ�,,

	char ch = 0;
	ch = toupper('c');

	cout << ch << endl; // ������ ���� �Ҵ��ؼ� �־��شٸ�, ���ڷ� ����̵ȴ�.
	char ch_2 = 68; // D <- �ƽ�Ű
	cout << ch_2 << endl; // �׷��� �̷��� ���ڸ� �־��൵ ���ڰ� ��µȴ�.


	int val = stoi("1234");

	cout << "string to int : " << typeid(stoi("1234")).name() << endl; // �ڷ����� Ȯ���ϴ� ���.
	cout << "string to float : " << typeid(stof("123.4")).name() << endl; // �ڷ����� Ȯ���ϴ� ���.

	string str = "123.4"; // ��Ŭ���Ͽ� "���Ƿ� �̵�"�� ���� ��� ����Ǿ��ִ��� �� �� �ִ�.

	cout << typeid(str).name() << endl; // basic string char ��¼���� �����µ�..  ��Ʈ���� char�� �̾ string���� ����� �����̴�.
	cout << "string to float : " << typeid(stof(str)).name() << endl;
	*/
	
	// �ǽ� 13
	/*
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

	cout << s.length() << endl;

	cout << s.at(100) << endl;

	cout << s.find("two") << endl;
	int val = s.find("two");
	val = val + 1;

	cout << s.find("two", val) << endl;
	*/


	// �ǽ� 14

	// 1.
	/*
	string str_1 = " ";
	string str_2 = " ";
	
	
	while (1)
	{

	cout << "ù��° ���ڿ� �Է� : ";
	cin >> str_1;

	cout << "�ι�° ���ڿ� �Է� : ";
	cin >> str_2;

	int true_1 = str_1.length();
	int true_2 = str_2.length();

	for (int i = 0; i < str_1.length(); i++)
	{

		if (isdigit(str_1[i]))
		{
			continue;
		}
		
		else
		{
			cout << "ù��° ���ڿ��� ��� ���ڰ� �ƴմϴ�." << endl;
			--true_1;
			break;
		}
		
	}
	for (int i = 0; i < str_2.length(); i++)
	{

		if (isdigit(str_2[i]))
		{
			continue;
		}
		else {
			cout << "�ι�° ���ڿ��� ��� ���ڰ� �ƴմϴ�." << endl;
			--true_2;
			break;
		}
	}
	if(true_1 == str_1.length() && true_2 == str_2.length())
	{
		cout << endl << "��� �����Դϴ�." << endl << endl; 
		int num_1 = stoi(str_1);
		int num_2 = stoi(str_2);
		int sum = num_1 + num_2;
		cout << "append : " << str_1.append(str_2) << endl << endl;
		cout << "sum : " << sum << endl;
		break;
	}
	}
	*/
	
	
	/*
	
	string str = " ";
    string str2 = " ";
    bool flag = true;
    bool flag2 = true;

    while (flag && flag2)
    {
      string str = " ";
    string str2 = " ";
    bool flag = true;
    bool flag2 = true;
    while (flag || flag2)
    {
        cout << "���ڿ� 1 �Է� : ";
        cin >> str;
        cout << "���ڿ� 2 �Է� : ";
        cin >> str2;
        int count = str.length();
        int index = 0;
        int index_2 = 0;
        while (index < count)
        {
            int val = isdigit(str[index]);
            if (val == 0)
            {
                cout << "str1 is NO" << endl;
                break;
            }
            else {
                index_2++;
            }
            index++;
        }
        if (index_2 == count)
        {
            cout << "str1 is OK" << endl;
            flag = false;
        }
        int count2 = str2.length();
        int index2 = 0;
        int index_22 = 0;
        while (index2 < count2)
        {
            int val2 = isdigit(str2[index2]);
            if (val2 == 0)
            {
                cout << "str2 is NO" << endl;
                break;
            }
            else {
                index_22++;
            }
            index2++;
        }
        if (index_22 == count2)
        {
            cout << "str2 is OK" << endl;
            flag2 = false;
        }
        cout << "��ģ ���ڿ� : " << str + str2 << endl;
    }
    if (flag == false && flag2 == false)
    {
        int val = stoi(str);
        int val2 = stoi(str2);
        int sum = val + val2;
        cout << "���� 3 : " << sum << endl;
    }
    return 0;
}
	*/
	
	

	// �ǽ� 15
	/*
	string s = "Codingon";
	
	s[0] = tolower(s[0]);
	
	cout << "�ҹ��� ���� : " << s << endl;

	int val = s.length() - 1;

	s[val] = toupper(s[val]);

	cout << "�빮�� ���� : " << s << endl;

	cout << "�κй��ڿ� ��ȯ : " << s.substr(2, 4) << endl;

	s.replace(2, 4, "oooo");
	cout << "���ڿ� ġȯ : " << s << endl;

	s.erase(2, 5);
	cout << "���ڿ� ���� : " << s << endl;
	*/
// ---------------------
// �迭
/*
	int arr_init[] = {0,}; // �߰�ȣ �ڿ� ,�� �ϳ� �� ����� ���� ��������� ����� ��.

	int arr_int[] = { 1,2,3,4,5,6, };

	char arr_char[] = { 'a','b','c', };

	float arr_float[] = { 0.0, 0.1, 0.2, 0.3, };

	cout << "�ʱⰪ ���� : " << arr_init[3] << endl;
	cout << "int�� �迭 : " << arr_int[0] << endl;
	cout << "char�� �迭 : " << arr_char[1] << endl;
	cout << "float�� �迭 : " << arr_float[2] << endl;
*/
/*
	int arr_int[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for (int i = 0; i < sizeof(arr_int); i++)
	{
		for (int j = 0; j < sizeof(arr_int); j++)
		{
			if (arr_int[i] % arr_int[j] == 0)
				cout << arr_int[i] << " ";
		}
	}
*/
	int arr_int[10] = {1,2,3,4,5,6,7,8,9,10};
	int count = (sizeof(arr_int) / sizeof(arr_int[0]))-1;

	for (int i = 0; i <= count; i++)
	{
		cout << "int�� �迭 " << i << "��°�� �Է��� �� : ";
		cin >> arr_int[i];
	}

	for (int j=count; j >= 0; j--)
	{
		cout << arr_int[j] << endl;
	}
	
	

	


	return 0;
}

#endif
