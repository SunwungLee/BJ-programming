// no.1330
/*
	�� ���� A�� B�� �־����� ��, A�� B�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� A�� B�� �־�����. A�� B�� ���� �� ĭ���� ���еǾ��� �ִ�.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int a, b;
//	cin >> a >> b;
//	if (a > b)
//		cout << ">";
//	else if (a < b)
//		cout << "<";
//	else
//		cout << "==";
//	return 0;
//}

// no.9498
/*
	���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, 
	������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int test_score;
//	cin >> test_score;
//	if (test_score >= 90 && test_score <= 100)
//		cout << "A";
//	else if (test_score >= 80 && test_score < 90)
//		cout << "B";
//	else if (test_score >= 70 && test_score < 80)
//		cout << "C";
//	else if (test_score >= 60 && test_score < 70)
//		cout << "D";
//	else
//		cout << "F";
//	return 0;
//}

// no.2753
/*
	������ �־����� ��, �����̸� 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	������ ������ 4�� ����̸鼭, 100�� ����� �ƴ� �� �Ǵ� 400�� ����� ���̴�.
	���� ���, 2012���� 4�� ����̸鼭 100�� ����� �ƴ϶� �����̴�. 1900���� 100�� ����̰� 400�� ����� �ƴϱ� ������ ������ �ƴϴ�. 
	������, 2000���� 400�� ����̱� ������ �����̴�.

	ù° �ٿ� ������ �־�����. ������ 1���� ũ�ų� ����, 4000���� �۰ų� ���� �ڿ����̴�.
*/
//#include <iostream>
//using namespace std;
//int main() {
//	int input;
//	cin >> input;
//
//	if (input % 4 == 0 && input % 100 != 0)
//		cout << "1";
//	else if (input % 400 == 0)
//		cout << "1";
//	else
//		cout << "0";
//
//	return 0;
//}

// no.2884
/*
	����̴� ���� ��ħ �˶��� ��� �Ͼ��. �˶��� ��� �ٷ� �Ͼ�� �����̰�����, �׻� ���ݸ� �� �ڷ��� ���� ������ ���� �б��� �����ϰ� �ִ�.
	����̴� ��� ����� �����غ�������, ���ݸ� �� �ڷ��� ������ �� � �͵� ���� ���� ������.
	�̷� ����̸� �ҽ��ϰ� ����, â���̴� �ڽ��� ����ϴ� ����� ��õ�� �־���.
	�ٷ� "45�� ���� �˶� �����ϱ�"�̴�.
	�� ����� �ܼ��ϴ�. ���� �����Ǿ� �ִ� �˶��� 45�� �ռ��� �ð����� �ٲٴ� ���̴�. ������ �˶� �Ҹ��� ������, �˶��� ���� ���� �� �� ���̱� �����̴�.
	�� ����� ����ϸ�, ���� ��ħ �� ��ٴ� ����� ���� �� �ְ�, �б��� �������� �ʰ� �ȴ�.
	���� ����̰� ������ �˶� �ð��� �־����� ��, â������ ����� ����Ѵٸ�, �̸� ������ ���ľ� �ϴ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	ù° �ٿ� �� ���� H�� M�� �־�����. (0 <= H <= 23, 0 <= M <= 59) �׸��� �̰��� ���� ����̰� ������ ���� �˶� �ð� H�� M���� �ǹ��Ѵ�.
	�Է� �ð��� 24�ð� ǥ���� ����Ѵ�. 24�ð� ǥ������ �Ϸ��� ������ 0:0(����)�̰�, ���� 23:59(������ ���� 1�� ��)�̴�. �ð��� ��Ÿ�� ��, ���ʿ��� 0�� ������� �ʴ´�.
*/
//#include<iostream>
//using namespace std;
//int main() {
//	int hour, min;
//	int alarm_min, alarm_hour=0;
//	cin >> hour >> min;
//	alarm_hour = hour;
//	int min_cal = min - 45;
//	if (min_cal < 0) {
//		alarm_min = 60 + min_cal;
//		if ((alarm_hour - 1) < 0)
//			alarm_hour = 24 + alarm_hour - 1;
//		else
//			alarm_hour -= 1;
//	}
//	else
//		alarm_min = min - 45;	
//	cout << alarm_hour << " " << alarm_min << endl;
//	return 0;
//}

// no.14681
/*
	���� ���� ���� �� �ϳ��� �־��� ���� ��� ��и鿡 ���ϴ��� �˾Ƴ��� ���̴�. ��и��� �Ʒ� �׸�ó�� 1���� 4���� ��ȣ�� ���´�. "Quadrant n"�� "��n��и�"�̶�� ���̴�.
	���� ���, ��ǥ�� (12, 5)�� �� A�� x��ǥ�� y��ǥ�� ��� ����̹Ƿ� �� 1��и鿡 ���Ѵ�. �� B�� x��ǥ�� �����̰� y��ǥ�� ����̹Ƿ� �� 2��и鿡 ���Ѵ�.
	���� ��ǥ�� �Է¹޾� �� ���� ��� ��и鿡 ���ϴ��� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. ��, x��ǥ�� y��ǥ�� ��� ����� ������� �����Ѵ�.
	ù �ٿ��� ���� x�� �־�����. (-1000 <= x <=1000, x != 0) ���� �ٿ��� ���� y�� �־�����. (-1000 <= y <=1000, y != 0)
*/
#include <iostream>
using namespace std;
int main() {
	int in_x, in_y;
	cin >> in_x;
	cin >> in_y;
	if (in_x > 0) {
		if (in_y > 0)
			cout << "1";
		else
			cout << "4";
	}
	else {
		if (in_y > 0)
			cout << "2";
		else
			cout << "3";
	}
	return 0;
}