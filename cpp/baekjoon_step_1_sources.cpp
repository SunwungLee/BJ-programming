// no.2557
/* 
	Hello World!�� ����Ͻÿ�.
*/
//#include <iostream>
//int main(){
//	std::cout << "Hello World!\n";
//}

// no.10718
/*
	ACM-1CPC ���ͳ� ����, Regional, �׸��� World Finals���� �̹� 2ȸ�� �����ع��� kriii�� �̷��� ������ ���ϰ� ���� �𸣰� ���ؿ��� ���� World Finals �غ� ķ���� �����ߴ�.
	��ȸ�� �� �� �𸣴� ���ڷ� kriii�� ���ؼ� �ݷ��� ������ ���������.
*/
//#include<iostream>
//int main() {
//	std::cout << "����ģ�� ��������\n" << "����ģ�� ��������" << std::endl;
//	return 0;
//}

//no.10171
/*
	�Ʒ� ������ ���� ����̸� ����Ͻÿ�.
	>> ���������� ���: �� �� �� �Է�. >> e.g. \\
*/
//#include <iostream>
//int main() {
//	std::cout 
//		<< "\\    /\\ \n" 
//		<< " )  ( ')\n"
//		<< "(  /  ) \n"
//		<< " \\(__)|\n"
//		<< std::endl;
//	return 0;
//}

// no.10172
/*
	�Ʒ� ������ ���� ���� ����Ͻÿ�.
	>> ū ����ǥ or ���� ����ǥ ���: \ �Է� �� �Է�. >> e.g. \" �Ǵ� \'
*/
//#include <iostream>
//int main() {
//	std::cout
//		<< "|\\_/|\n"
//		<< "|q p|   /}\n"
//		<< "( 0 )\"\"\"\\\n"
//		<< "|\"^\"`    |\n"
//		<< "||_/=\\\\__|\n"
//		<< std::endl;
//	return 0;
//}

// no.1000
/*
	�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
*/
//#include <iostream>
//int main() {
//	int a, b, output;
//	std::cin >> a >> b;
//	output = a + b;
//	std::cout << output << std::endl;
//	return 0;
//}

// no.1001
/*
	�� ���� A�� B�� �Է¹��� ����, A-B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
*/
//#include <iostream>
//int main() {
//	int a, b, output;
//	std::cin >> a >> b;
//	output = a - b;
//	std::cout << output << std::endl;
//	return 0;
//}

// no.10998
/*
	�� ���� A�� B�� �Է¹��� ����, A��B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
*/
//#include <iostream>
//int main() {
//	int a, b, output;
//	std::cin >> a >> b;
//	output = a * b;
//	std::cout << output << std::endl;
//	return 0;
//}

// no.1008
/*
	�� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� A�� B�� �־�����. (0 < A, B < 10)
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	double output;
//	cin >> a >> b;
//	output = a / (double)b;
//	cout.fixed;
//	cout.precision(10);
//	cout << output;
//	return 0;
//}

// no.10869
/*
	�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	�� �ڿ��� A�� B�� �־�����. (1 �� A, B �� 10,000)
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout << a+b << endl << a-b << endl << a * b << endl << a / b << endl << a % b << endl;
//	return 0;
//}

// no.10430
/*
	(A+B)%C�� ((A%C) + (B%C))%C �� ������?
	(A��B)%C�� ((A%C) �� (B%C))%C �� ������?
	�� �� A, B, C�� �־����� ��, ���� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� A, B, C�� ������� �־�����. (2 �� A, B, C �� 10000)
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b, c;
//	cin >> a >> b >> c;
//	cout << (a + b) % c << endl << ((a%c)+(b%c)) % c << endl;
//	cout << (a*b) % c << endl << ((a%c)*(b%c)) % c << endl;
//	return 0;
//}

// no.2588
/*
	(�� �ڸ� ��) �� (�� �ڸ� ��)�� ������ ���� ������ ���Ͽ� �̷������.
	(1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� (1)�� ��ġ�� �� �� �ڸ� �ڿ�����, ��° �ٿ� (2)�� ��ġ�� �� ���ڸ� �ڿ����� �־�����.
*/
#include <iostream>
using namespace std;
int main() {
	int a, b;
	int x, y, z;
	cin >> a;
	cin >> b;
	x = b / 100;
	y = b / 10 - x * 10;
	z = b - (x*100 + y*10);
	cout << a * z << endl << a * y << endl << a * x << endl;
	cout << a * b;
	return 0;
}
