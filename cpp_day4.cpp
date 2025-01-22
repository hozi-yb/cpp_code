#include <iostream>
#include <string>
#include <typeinfo>

//#define MAIN4

#ifdef MAIN4

using namespace std;

int main()
{
	// 문자열생성
	/*
	std::string str = " ";

	//std::cin >> str; // 여기선 스페이스바를 치면 그 이후로는 짤려서 나온다..!
	//ex) 입력 : hello world, 출력 : hello

	//getline(std::cin, str); //이렇게 해야지 스페이스바 이후까지 나온다..!
	//ex) 입력 : hello world, 출력 : hello world

	getline(std::cin, str, 'b'); // 'b'를 입력받으면 그 이후로는 출력되지 않는다. 특정문자 전까지만 입력을 받는 기능이 있다.
	std::cout << "문자열 : " << str << std::endl;
	*/

	
	// 여기서부터는 using namespace std;를 해줬기때문에 std안써도 된다.

	// string을 쓸 수 있는 방식.
	/*
	string str1 = " ";
	string str2 = "codingon";
	string str3 = ("codingon");
	string str4 = (str2);

	
	char str_arr[] = { 'h', 'e', 'l', 'l', 'o', NULL };
	// 모든 문자열은 null값으로 끝나야하는데, 그게 없으면 어디가 종단점(0, NULL)인지 알지못해서 쓰레기값이 같이 출력된다.
	// 그래서 NULL이나 0을 넣어주면 된다!!

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
	cout << "str1 + str2 : " << str1 + str2 << endl; // 빼기나 곱셈은 당연히 안된다.
	cout << "str2 < str1 : " << (str2 < str1) << endl; // 앞글자만 비교를한다. 그래서 str2가 더 크다.
	cout << "str3 < str4 : " << (str3 < str4) << endl;
	cout << "str4 < str5 : " << (str4 < str5) << endl; // 앞글자가 같은경우 문자열의 크기를 비교한다.
	*/
	

	/*
	string str1 = "helloworldcodingon";

	cout << "at : " << str1.at(5) << endl; // 인덱싱
	cout << "index : " << str1[5] << endl; // 인덱싱
	cout << "front : " << str1.front() << endl; // 맨 앞글자
	cout << "back : " << str1.back() << endl; // 맨 뒷글자
	cout << "length : " << str1.length() << endl; // 글자 길이
	str1.resize(5); // 길이 재설정. 앞에서부터 5개 자른다.
	cout << "resize : " << str1 << endl;

	str1.clear();
	if (str1.empty())
	{
		cout << "문자열이 비어있습니다." << endl;
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

	str1.insert(4, str2); // (index, 삽입할 문자)

	str1.replace(2, 2, str2); // (index, 지울 문자 갯수, 넣을 문자) 거의 쓸일은 없을듯...

	str1.erase(0, 6);

	cout << str1 << endl;
	*/

	/*string str1 = "codingon";
	string str2 = "helloworld";
	string str3 = "on";*/

	/*
	cout << str1.find(str3) << endl;

	cout << str1.substr(3) << endl; // 3 ~ 끝까지 부분문자열로 반환
	cout << str1.substr(3, 3) << endl; // 3 ~ 3개만 부분문자열로 반환

	cout << str1.compare(str2) << endl; // str2가 더 크기때문에 음수 반환
	*/

	// 아두이노에서 "motor1on"이라고 온다면, motor, 1, on을 슬라이싱해서 사용해야 할 경우가 있기에, 사용한다. length로 올바른 명령어인지 결정하거나,, 등등

	/*
	cout << isdigit('2') << endl;
	cout << isdigit('a') << endl;// 문자만된다. true라면 0이 아닌 모든 다른 수로 나온다
	cout << isalpha('a') << endl;
	cout << isalpha('1') << endl;

	cout << toupper('c') << endl; // 아스키코드 값이 나오는데,,

	char ch = 0;
	ch = toupper('c');

	cout << ch << endl; // 변수에 따로 할당해서 넣어준다면, 문자로 출력이된다.
	char ch_2 = 68; // D <- 아스키
	cout << ch_2 << endl; // 그래서 이렇게 숫자만 넣어줘도 문자가 출력된다.


	int val = stoi("1234");

	cout << "string to int : " << typeid(stoi("1234")).name() << endl; // 자료형을 확인하는 방법.
	cout << "string to float : " << typeid(stof("123.4")).name() << endl; // 자료형을 확인하는 방법.

	string str = "123.4"; // 우클릭하여 "정의로 이동"에 들어가면 어떻게 선언되어있는지 알 수 있다.

	cout << typeid(str).name() << endl; // basic string char 어쩌구가 나오는데..  스트링이 char을 이어서 string으로 만들기 때문이다.
	cout << "string to float : " << typeid(stof(str)).name() << endl;
	*/
	
	// 실습 13
	/*
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

	cout << s.length() << endl;

	cout << s.at(100) << endl;

	cout << s.find("two") << endl;
	int val = s.find("two");
	val = val + 1;

	cout << s.find("two", val) << endl;
	*/


	// 실습 14

	// 1.
	/*
	string str_1 = " ";
	string str_2 = " ";
	
	
	while (1)
	{

	cout << "첫번째 문자열 입력 : ";
	cin >> str_1;

	cout << "두번째 문자열 입력 : ";
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
			cout << "첫번째 문자열은 모두 숫자가 아닙니다." << endl;
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
			cout << "두번째 문자열은 모두 숫자가 아닙니다." << endl;
			--true_2;
			break;
		}
	}
	if(true_1 == str_1.length() && true_2 == str_2.length())
	{
		cout << endl << "모두 숫자입니다." << endl << endl; 
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
        cout << "문자열 1 입력 : ";
        cin >> str;
        cout << "문자열 2 입력 : ";
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
        cout << "합친 문자열 : " << str + str2 << endl;
    }
    if (flag == false && flag2 == false)
    {
        int val = stoi(str);
        int val2 = stoi(str2);
        int sum = val + val2;
        cout << "문제 3 : " << sum << endl;
    }
    return 0;
}
	*/
	
	

	// 실습 15
	/*
	string s = "Codingon";
	
	s[0] = tolower(s[0]);
	
	cout << "소문자 변경 : " << s << endl;

	int val = s.length() - 1;

	s[val] = toupper(s[val]);

	cout << "대문자 변경 : " << s << endl;

	cout << "부분문자열 반환 : " << s.substr(2, 4) << endl;

	s.replace(2, 4, "oooo");
	cout << "문자열 치환 : " << s << endl;

	s.erase(2, 5);
	cout << "문자열 삭제 : " << s << endl;
	*/
// ---------------------
// 배열
/*
	int arr_init[] = {0,}; // 중괄호 뒤에 ,를 하나 더 찍어준 것은 명시적으로 찍어준 것.

	int arr_int[] = { 1,2,3,4,5,6, };

	char arr_char[] = { 'a','b','c', };

	float arr_float[] = { 0.0, 0.1, 0.2, 0.3, };

	cout << "초기값 없음 : " << arr_init[3] << endl;
	cout << "int형 배열 : " << arr_int[0] << endl;
	cout << "char형 배열 : " << arr_char[1] << endl;
	cout << "float형 배열 : " << arr_float[2] << endl;
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
		cout << "int형 배열 " << i << "번째에 입력할 값 : ";
		cin >> arr_int[i];
	}

	for (int j=count; j >= 0; j--)
	{
		cout << arr_int[j] << endl;
	}
	
	

	


	return 0;
}

#endif
