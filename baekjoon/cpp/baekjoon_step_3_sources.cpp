// no.2739
/*
	N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.
	첫째 줄에 N이 주어진다. N은 1보다 크거나 같고, 9보다 작거나 같다.
*/
//#include<iostream>
//using namespace std;
//int main() {
//	int in_n;
//	cin >> in_n;
//	for (int i = 0; i < 9; i++)
//		cout << in_n << " * " << i+1 << " = " << in_n * (i+1) << endl;
//	return 0;
//}

// no.10950
/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
*/
//#include<iostream>
//using namespace std;
//int main() {
//	int in_n, in_a, in_b;
//	int count = 0;
//	cin >> in_n;
//	while (count < in_n) {
//		cin >> in_a >> in_b;
//		cout << in_a + in_b << endl;
//		count++;
//	}
//	return 0;
//}

// no.8393
/*
	n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
	첫째 줄에 n (1 <= n <= 10,000)이 주어진다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int in_n;
//	int sum = 0;
//	cin >> in_n;
//	for (int i = 0; i < in_n; i++) {
//		sum += (i + 1);
//	}
//	cout << sum;
//	return 0;
//}

// no.15552
/*
	본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
	C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자. 
	단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.

	첫 줄에 테스트케이스의 개수 T가 주어진다. T는 최대 1,000,000이다. 다음 T줄에는 각각 두 정수 A와 B가 주어진다. A와 B는 1 이상, 1,000 이하이다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int in_n;
//	int in_a, in_b;
//	cin >> in_n;
//	for (int i = 0; i < in_n; i++) {
//		cin >> in_a >> in_b;
//		cout << in_a + in_b << "\n";
//	}
//	return 0;
//}

// no.2741
/*
	자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
	첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int in_n;
//	cin >> in_n;
//	for (int i = 0; i < in_n; i++)
//		cout << i + 1 << "\n";
//	return 0;
//}

// no.2742
/*
	자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
	첫째 줄에 100,000보다 작거나 같은 자연수 N이 주어진다.
*/
//#include<iostream>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int in_n;
//	cin >> in_n;
//	for (int i = in_n; i > 0; i--) {
//		cout << i << "\n";
//	}
//	return 0;
//}

// no.11021
/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
*/
//#include <iostream>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int in_n;
//	int in_a, in_b;
//
//	cin >> in_n;
//	for (int i = 0; i < in_n; i++) {
//		cin >> in_a >> in_b;
//		cout << "Case #" << i + 1 << ": " << in_a + in_b << "\n";
//	}
//
//	return 0;
//}

// no.11022
/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.
	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
*/
//#include <iostream>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int in_n;
//	int in_a, in_b;
//	cin >> in_n;
//	for (int i = 0; i < in_n; i++) {
//		cin >> in_a >> in_b;
//		cout << "Case #" << i + 1 << ": ";
//		cout << in_a << " + " << in_b << " = " << in_a + in_b << "\n";
//	}
//	return 0;
//}

// no.2438
/*
	첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
	첫째 줄에 N (1 <= N <= 100)이 주어진다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int in_n;
//	cin >> in_n;
//	int count = 0;
//	while (count < in_n) {
//		for (int i = 0; i < count + 1; i++) {
//			cout << "*";
//		}
//		cout << "\n";
//		count++;
//	}
//	return 0;
//}

// no.2439
/*
	첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
	하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
	첫째 줄에 N (1 <= N <= 100)이 주어진다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int in_n;
//	cin >> in_n;
//	int count = 0;
//	int star_n = 0, space_n = 0;
//	while (count < in_n) {
//		star_n++;
//		space_n = in_n - star_n;
//		for (int i = 0; i < space_n; i++) {
//			cout << " ";
//		}
//		for (int j = 0; j < star_n; j++) {
//			cout << "*";
//		}
//		cout << "\n";
//		count++;
//	}
//	return 0;
//}

// no.10871
/*
	정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
	첫째 줄에 N과 X가 주어진다. (1 <= N, X <= 10,000)
	둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고, 10,000보다 작거나 같은 정수이다.

	X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다. X보다 작은 수는 적어도 하나 존재한다.
*/
#include <iostream>
using namespace std;
int main() {
	int in_n, in_x, in_tmp;
	cin >> in_n >> in_x;
	int count = 0, arr_cnt=0;
	int *arr = new int[in_n];
	while (count < in_n) {
		cin >> in_tmp;
		if (in_tmp < in_x) {
			arr[arr_cnt] = in_tmp;
			arr_cnt++;
		}
		count++;
	}
	for (int j = 0; j < arr_cnt; j++)
		cout << arr[j] << " ";
	cout << "\n";
	return 0;
}