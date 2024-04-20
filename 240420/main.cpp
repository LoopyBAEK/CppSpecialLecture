// #~ 전처리기

// #include : 헤더파일을 여기에 포함시키는 기능이다. iostream에는 입출력을 하기 위한 C++에서 제공되는 표준 기능들이 들어있다.
#include <iostream>

using namespace std;

// 실행 과정 : 컴파일 -> 빌드 -> 실행
// 컴파일 : 번역 작업
// Ctrl + Shift + B 를 이용해서 컴파일 및 빌드를 할 수 있다.

// C++의 시작점은 main 함수이다. main 함수는 반드시 있어야 한다.
int main()
{
	// C++ 표준 기능의 대부분은 std 라는 namespace 안에 존재하고 있다. 이름이 겹치는 것을 방지해주기 위해서이다.
	// cout : console 창에 출력해주는 기능이다. 뒤에 있는 ""(큰 따옴표) 안에 있는 문자들을 화면에 출력해준다.
	// 문자 여러 개를 사용할 때는 반드시 "" 안에 넣어주고, 이것을 문자열이라고 한다.
	// endl : 개행 기능이다.
	std::cout << "Test Output" << std::endl;
	std::cout << "가나다라" << std::endl;

	cout << "std namespace 사용" << endl;

	return 0;
}