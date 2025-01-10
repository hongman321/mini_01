#include<iostream>
using namespace std;
double Avg(double sum) {
	return sum / 5;
}
double sumArray(double* arr, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << sum << endl;
	return sum;
}
int main() {
	double score[5];
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> score[i];
	}
	sum = sumArray(score, 5);

	cout << Avg(sum) << endl;
	//여기를 수정하면 메인에 안들어가는건가요?
}