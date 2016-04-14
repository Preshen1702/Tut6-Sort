#include <iostream>
#include <string>

using namespace std;

template <typename T>

void BubbleSort(int num, T Array[]) {
	int i, j;
	T temp;
	for (i = 0; i < num - 1; i++) {
		for (j = num - 1; j > i; j--) {
			if (Array[j - 1] < Array[j]) {
				temp = Array[j - 1];
				Array[j - 1] = Array[j];
				Array[j] = temp;
			}
		}
	}
}



int main(){
	float Arr1[6] = { 1.42,4.54,0.154,0.475,8.24,6.21};
	int Arr2[6] = { 6, 4, 3, 2, 1, 4 };
	string Arr3[5] = { "Preshen", "Karyn", "Robert", "Krentin", "Natasha" };

	BubbleSort(6, Arr1);
	int i;
	for (i = 0; i < 6; i++) {
		cout << Arr1[i] << endl;
	}

	cout << endl;


	BubbleSort(6, Arr2);
	for (i = 0; i < 6; i++) {
		cout << Arr2[i] << endl;
	}

	cout << endl;

	BubbleSort(5, Arr3);
	for (i = 0; i < 5; i++) {
		cout << Arr3[i] << endl;
	}
	return 0;
}