// no.2557
/* 
	Hello World!를 출력하시오.
*/
//#include <iostream>
//int main(){
//	std::cout << "Hello World!\n";
//}

// no.10718
/*
	ACM-1CPC 인터넷 예선, Regional, 그리고 World Finals까지 이미 2회씩 진출해버린 kriii는 미련을 버리지 못하고 왠지 모르게 올해에도 파주 World Finals 준비 캠프에 참여했다.
	대회를 뜰 줄 모르는 지박령 kriii를 위해서 격려의 문구를 출력해주자.
*/
//#include<iostream>
//int main() {
//	std::cout << "강한친구 대한육군\n" << "강한친구 대한육군" << std::endl;
//	return 0;
//}

//no.10171
/*
	아래 예제와 같이 고양이를 출력하시오.
	>> 역슬래쉬를 출력: 한 번 더 입력. >> e.g. \\
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
	아래 예제와 같이 개를 출력하시오.
	>> 큰 따옴표 or 작은 따옴표 출력: \ 입력 후 입력. >> e.g. \" 또는 \'
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
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
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
	두 정수 A와 B를 입력받은 다음, A-B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
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
	두 정수 A와 B를 입력받은 다음, A×B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
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
	두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)
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
	두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 
	두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)
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
	(A+B)%C는 ((A%C) + (B%C))%C 와 같을까?
	(A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
	세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
	첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)
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
	(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
	(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

	첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.
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
