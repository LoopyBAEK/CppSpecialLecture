// #~ ��ó����

// #include : ��������� ���⿡ ���Խ�Ű�� ����̴�. iostream���� ������� �ϱ� ���� C++���� �����Ǵ� ǥ�� ��ɵ��� ����ִ�.
#include <iostream>

using namespace std;

// ���� ���� : ������ -> ���� -> ����
// ������ : ���� �۾�
// Ctrl + Shift + B �� �̿��ؼ� ������ �� ���带 �� �� �ִ�.

// C++�� �������� main �Լ��̴�. main �Լ��� �ݵ�� �־�� �Ѵ�.
int main()
{
	// C++ ǥ�� ����� ��κ��� std ��� namespace �ȿ� �����ϰ� �ִ�. �̸��� ��ġ�� ���� �������ֱ� ���ؼ��̴�.
	// cout : console â�� ������ִ� ����̴�. �ڿ� �ִ� ""(ū ����ǥ) �ȿ� �ִ� ���ڵ��� ȭ�鿡 ������ش�.
	// ���� ���� ���� ����� ���� �ݵ�� "" �ȿ� �־��ְ�, �̰��� ���ڿ��̶�� �Ѵ�.
	// endl : ���� ����̴�.
	std::cout << "Test Output" << std::endl;
	std::cout << "�����ٶ�" << std::endl;

	cout << "std namespace ���" << endl;

	/*
	���� : ���� ����.
	��ǻ�� �뷮�� �ּ� ���� : bit
	1byte = 8bit
	1kbyte = 1024byte
	1mbyte = 1024kbyte
	1gbyte = 1024mbyte
	1tbyte = 1024gbyte

	���ڸ� ǥ���ϴ� ��� : ASCII �ڵ� ǥ�� ������ �ִ�.
	false : 0
	true : 0�� �ƴ� ��� ��
	����		|	�뷮		|	������	|	ǥ�� ����			|	unsigned		|
	char	|	1byte	|	����		|	-128 ~ 127		|	0 ~ 255			|
	bool	|	1byte	|	��/����	|	true / false	|	true / false	|
	short	|	2byte	|	����		|	-32768 ~ 32767	|	0 ~ 65535		|
	int		|	4byte	|	����		|	�� -22�� ~ 21��	|	0 ~ �� 43��		|
	float	|	4byte	|	�Ǽ�		|
	double	|	8byte	|	�Ǽ�		|
	*/

	// = : ���� ������. �����ʿ� �ִ� ���� ������ ������ �����Ѵ�.
	int Number = 10;
	Number = 20;

	cout << Number << endl;

	bool bTest = true;
	bTest = false;

	cout << bTest << endl;

	// �����̳� ���ڴ� 1byte�� �����Ѵ�. ������ �ѱ��̳� �ѹ� ���� ���ڵ��� 2byte�� �����ϱ� ������ char ���� �ϳ��� �����ϱ� �����.
	char cTest = 't';

	cout << cTest << endl;

	float fNumber = 3.14f;	// f�� ������ ������ double Ÿ�� �Ǽ��� ��.

	cout << fNumber << endl;

	double dNumber = 123.4567;

	cout << dNumber << endl;

	return 0;
}