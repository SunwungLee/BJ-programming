// no.10818
/*
	N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� ������ ���� N (1 <= N <= 1,000,000)�� �־�����. ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. 
	��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.
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
	9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã�� �� �ִ��� �� ��° �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� ���, ���� �ٸ� 9���� �ڿ���
	3, 29, 38, 12, 57, 74, 40, 85, 61
	�� �־�����, �̵� �� �ִ��� 85�̰�, �� ���� 8��° ���̴�.
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
	�� ���� �ڿ��� A, B, C�� �־��� �� A �� B �� C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	���� ��� A = 150, B = 266, C = 427 �̶�� A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�, 
	����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.
	ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����. A, B, C�� ��� 100���� ���ų� ũ��, 1,000���� ���� �ڿ����̴�.
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

// no.3052 (���� �ʿ�)
/*
	�� �ڿ��� A�� B�� ���� ��, A%B�� A�� B�� ���� ������ �̴�. ���� ���, 7, 14, 27, 38�� 3���� ���� �������� 1, 2, 0, 2�̴�. 
	�� 10���� �Է¹��� ��, �̸� 42�� ���� �������� ���Ѵ�. �� ���� ���� �ٸ� ���� �� �� �ִ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
	�����̴� �⸻��縦 ���ƴ�. �����̴� ������ �����ؼ� ���� ��������� �ߴ�. 
	�ϴ� �����̴� �ڱ� ���� �߿� �ִ��� �����. �� ���� M�̶�� �Ѵ�. �׸��� ���� ��� ������ ����/M*100���� ���ƴ�.
	���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50/70*100�� �Ǿ� 71.43���� �ȴ�.
	�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� ���� �� ������ ���� N�� �־�����. �� ���� 1000���� �۰ų� ����. 
	��° �ٿ� �������� ���� ������ �־�����. �� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.
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
	"OOXXOXXOOO"�� ���� OX������ ����� �ִ�. O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�. 
	������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�. ���� ���, 10�� ������ ������ 3�� �ȴ�.
	"OOXXOXXOOO"�� ������ 1+2+0+0+1+0+0+1+2+3 = 10���̴�.
	OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����. �� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����. 
	���ڿ��� O�� X������ �̷���� �ִ�.
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
	���л� ��������� 90%�� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�. ����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
	ù° �ٿ��� �׽�Ʈ ���̽��� ���� C�� �־�����.
	��° �ٺ��� �� �׽�Ʈ ���̽����� �л��� �� N(1 <= N <= 1000, N�� ����)�� ù ���� �־�����, �̾ N���� ������ �־�����. 
	������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.
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