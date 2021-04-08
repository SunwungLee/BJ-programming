// no.10952
/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	입력은 여러 개의 테스트 케이스로 이루어져 있다.
	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
	입력의 마지막에는 0 두 개가 들어온다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int in_a, in_b;
//	while (1) {
//		cin >> in_a >> in_b;
//		if (in_a == 0 && in_b == 0)
//			break;
//		cout << in_a + in_b << endl;
//	}
//	return 0;
//}

// no.10951
/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
	입력은 여러 개의 테스트 케이스로 이루어져 있다.
	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

	>> while (1)로 돌리는 것과 while(cin>>in_a>>in_b)로 돌리는 것의 차이?
	즉, scanf("%d %d", &a, &b)!=EOF의 의미는 파일의 끝에 도달할 때까지 while문을 실행한다는 의미.
	출력초과가 나왔던 이유는 while문의 끝을 정해놓지 않았기 때문에 scanf가 무한루프 돌아서 메모리 할당 범위를 넘어섰기 때문.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int in_a, in_b;
//	int cnt = 0;
//	while (cin >> in_a >> in_b) {
//		cout << in_a + in_b << endl;
//	}
//	return 0;
//}

// no.1110
/*
	0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 다음과 같은 연산을 할 수 있다. 
	먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다. 
	그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를 이어 붙이면 새로운 수를 만들 수 있다.
	다음 예를 보자.
	26부터 시작한다. 2+6 = 8이다. 새로운 수는 68이다. 6+8 = 14이다. 새로운 수는 84이다. 8+4 = 12이다. 새로운 수는 42이다. 4+2 = 6이다. 새로운 수는 26이다.
	위의 예는 4번만에 원래 수로 돌아올 수 있다. 따라서 26의 사이클의 길이는 4이다.
	N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int init_number, tmp_number, new_number;
//	int iter_cnt = 0;
//	int lft, rgt, res;
//	cin >> init_number;
//	new_number = init_number;
//	while (1) {
//		tmp_number = new_number;
//		lft = tmp_number / 10;
//		rgt = tmp_number % 10;
//		res = (lft + rgt) % 10;
//
//		new_number = rgt * 10 + res;
//		iter_cnt++;
//		if (new_number == init_number)
//			break;
//	}
//	cout << iter_cnt;
//	return 0;
//}