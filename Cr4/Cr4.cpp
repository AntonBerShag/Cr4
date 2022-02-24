#include <iostream>
using namespace std;

template <typename T> void showArr(T arr[], int length);
template <typename T> void zero(T arr[], int length, int key);
template <typename T> T indexSum(T arr1[], T arr2[], int length1, int length2, int index);
template <typename T> int maxSum(T arr[], int length);

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������ 1
	/*cout << "������ 1\n";
	int z1[5] = { 10, 2, 6, -3, 6 };
	showArr(z1, 5);
	cout << "������� �����-����: ";
	cin >> n;
	zero(z1, 5, n);
	cout << endl;*/

	//������ 2
	cout << "������ 2\n";
	int z2[4] = { 2, 3, 5, 3 }, z3[4] = { 6, 1, 9, 0 };
	showArr(z2, 4);
	showArr(z3, 4);
	cout << "������� �����-������: ";
	cin >> n;
	cout << "����� ���� ����� �� ������� " << n << " = " << indexSum(z2, z3, 4, 4, n);
	cout << "\n\n";
	
	//������ 3
	cout << "������ 3\n";
	int z4[5] = { 12, 11, 1, 5, 0 };
	showArr(z4, 5);
	cout << "����� ���� ������������ ����� = " << maxSum(z4, 5);
	cout << "\n\n";

	return 0;
}

//������ 3
template <typename T> int maxSum(T arr[], int length) {
	int max1 = arr[0], max2 = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		}
		else if (arr[i] > max2)
			max2 = arr[i];
	}
	return max1 + max2 ;
}
//������ 2
template <typename T> T indexSum(T arr1[], T arr2[], int length1, int length2, int index) {
	T n1 = arr1[index];
	T n2 = arr2[index];
	int n = 0;
	if (index > length1 - 1 || index > length2 - 1 || index < 0) {
		cout << "ERROR\n";
		return 0;
	}
	return n1 + n2;
}
//������ 1
template <typename T> void zero(T arr[], int length, int key) {
	cout << "�������� ������:\n[";
	for (int i = 0; i < length; i++) {
		if (arr[i] == key)
			arr[i] = 0;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
//�������� ������
template <typename T> void showArr(T arr[], int length) {
	cout << "�������� ������:\n[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}