// no.10818
/*
	N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
	첫째 줄에 정수의 개수 N (1 <= N <= 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 
	모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int input_n;
//	cin >> input_n;
//	int *input_arr = new int[input_n];
//	for (int i = 0; i < input_n; i++) {
//		cin >> input_arr[i];
//	}
//	int max, min;
//	max = -1000000;
//	min = 1000000;
//	for (int j = 0; j < input_n; j++) {
//		if (input_arr[j] > max)
//			max = input_arr[j];
//		if (input_arr[j] < min)
//			min = input_arr[j];
//	}
//	delete[] input_arr;
//	cout << min << " " << max << endl;
//	return 0;
//}

// no.2562
/*
	9개의 서로 다른 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
	예를 들어, 서로 다른 9개의 자연수
	3, 29, 38, 12, 57, 74, 40, 85, 61
	이 주어지면, 이들 중 최댓값은 85이고, 이 값은 8번째 수이다.
*/
//#include <iostream>
//using namespace std;
//int totalNumber = 9;
//int main() {
//	int res_idx, res_max;
//	int *input_arr = new int[totalNumber];
//
//	for (int i = 0; i < totalNumber; i++) {
//		cin >> input_arr[i];
//	}
//	res_max = 0;
//	res_idx = 0;
//
//	for (int j = 0; j < totalNumber; j++) {
//		if (input_arr[j] > res_max) {
//			res_max = input_arr[j];
//			res_idx = j+1;
//		}
//			
//	}
//	cout << res_max << endl << res_idx << endl;
//	delete[] input_arr;
//	return 0;
//}

// no.2577
/*
	세 개의 자연수 A, B, C가 주어질 때 A × B × C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
	예를 들어 A = 150, B = 266, C = 427 이라면 A × B × C = 150 × 266 × 427 = 17037300 이 되고, 
	계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.
	첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 같거나 크고, 1,000보다 작은 자연수이다.
*/
//#include <iostream>
//using namespace std;
//int zeroToNine = 10;
//int main() {
//	int input_num = 3;
//	int *input_arr = new int[input_num];
//	int *integer_arr = new int[zeroToNine];
//	int multiple_all_numbers = 1;
//	/*memset(input_arr, 0, input_num * sizeof(int));
//	memset(integer_arr, 0, zeroToNine * sizeof(int));*/
//	for (int i = 0; i < input_num; i++) {
//		cin >> input_arr[i];
//		multiple_all_numbers *= input_arr[i];
//	}
//	int temp, tmp_num;
//	int cnt = 1;
//	temp = multiple_all_numbers;
//	//cout << "test: " << temp << endl;
//	for (int i = 0; i < zeroToNine; i++) {
//		integer_arr[i] = 0;
//		//cout << integer_arr[i] << endl;
//	}
//	while (1){
//		tmp_num = temp % 10;		
//		integer_arr[tmp_num] += 1;
//		temp /= 10;
//		if (temp == 0)
//			break;
//	}
//	for (int i = 0; i < zeroToNine; i++)
//		cout << integer_arr[i] << endl;
//
//	delete[] input_arr;
//	delete[] integer_arr;
//	return 0;
//}

// no.3052 (복습 필요)
/*
	두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 예를 들어, 7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 
	수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
*/
//#include <iostream>
//int main(void) {
//	int num, sum = 0, remainderArr[42] = { 0, };
//	for (int i = 0; i < 10; i++) {
//		std::cin >> num;
//		if (!remainderArr[num % 42]++)
//			sum++;
//	}
//	std::cout << sum;
//}

// no.1546
/*
	세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다. 
	일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다. 그리고 나서 모든 점수를 점수/M*100으로 고쳤다.
	예를 들어, 세준이의 최고점이 70이고, 수학점수가 50이었으면 수학점수는 50/70*100이 되어 71.43점이 된다.
	세준이의 성적을 위의 방법대로 새로 계산했을 때, 새로운 평균을 구하는 프로그램을 작성하시오.

	첫째 줄에 시험 본 과목의 개수 N이 주어진다. 이 값은 1000보다 작거나 같다. 
	둘째 줄에 세준이의 현재 성적이 주어진다. 이 값은 100보다 작거나 같은 음이 아닌 정수이고, 적어도 하나의 값은 0보다 크다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int in_numofsub;
//	cin >> in_numofsub;
//	int *input_arr = new int[in_numofsub];
//	int max = 0, sum=0;
//	double mean = 0.;
//
//	for (int i = 0; i < in_numofsub; i++) {
//		cin >> input_arr[i];
//		sum += input_arr[i];
//		if (input_arr[i] > max)
//			max = input_arr[i];
//	}
//	mean =(sum / (double)in_numofsub) * (100 / (double)max);
//	cout << mean;
//	delete[] input_arr;
//	return 0;
//}

// no.8958
/*
	"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 
	문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
	"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
	OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

	첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 
	문자열은 O와 X만으로 이루어져 있다.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int input_num;
//	cin >> input_num;
//	char *input_arr = new char[80];
//	int idx = 0;
//	int score = 0, cnt = 0;
//	for (int i = 0; i < input_num; i++) {
//		cin >> input_arr;
//		while (1) {
//			if (input_arr[idx] != 'X' && input_arr[idx] != 'O')
//				break;
//			if (input_arr[idx] == 'O') {
//				cnt++;
//				score += cnt;
//			}
//			else {
//				cnt = 0;
//			}
//			idx++;
//		}
//		cout << score << endl;
//		idx = 0;
//		score = 0;
//		cnt = 0;
//	}
//	return 0;
//}

// no.4344
/*
	대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
	첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
	둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 <= N <= 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 
	점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.
*/
#include <iostream>
using namespace std;
int main() {
	int num_of_cases, num_of_students;
	cin >> num_of_cases;
	int sum = 0, mean = 0, cnt = 0;
	double ratio = 0.f;
	for (int k = 0; k < num_of_cases; k++) {
		cin >> num_of_students;
		int *res_arr = new int[num_of_students];
		for (int i = 0; i < num_of_students; i++) {
			cin >> res_arr[i];
			sum += res_arr[i];
		}
		mean = sum / (double)num_of_students;
		for (int j = 0; j < num_of_students; j++)
			if (res_arr[j] > mean)
				cnt++;
		ratio = (cnt / (double)num_of_students) * (double)100.0;
		cout << fixed;
		cout.precision(3);
		cout << ratio << "%" << endl;
		sum = 0, mean = 0, cnt = 0, ratio = 0.;
		delete[] res_arr;
	}
	return 0;
}