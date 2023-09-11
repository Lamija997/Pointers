#include<iostream>
using namespace std;
void input(float*, int);
void output(float*, int);
float* last(float*, int);
float* wanted(float*, int);
int main() {
	float array[5];
	cout << "Input: " << endl;
	input(array, 5);
	cout << "Ispis: " << endl;
	output(array, 5);
	cout << "The smallest member is: " << *last(array, 5) << endl;
	cout << "The wanted member is: " << *wanted(array, 5);
	system("pause>0");
	return 0;
}
void input(float* niz, int v) {
	for (int i = 0; i < v; i++)
		cin >> *(niz+i);
}
void output(float* niz, int v) {
	for (int i = 0; i < v; i++)
		cout << *(niz+i) << " ";
}
float*last(float* niz, int v) {
	float* min = niz;
	for (int i = 0; i < v; i++)
	{
		if (niz[i]<*min)
			min = niz + i;
	}
	return min;
}
float* wanted(float* niz, int v) {
	int choice;
	do {
		cout << "Enter desired member: ";
		cin >> choice;
	} while (choice < 0 || choice>4);
	return niz + choice;
}