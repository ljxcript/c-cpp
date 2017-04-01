#include <iostream>
using namespace std;


void fibonacci(int *bufferArray, int n) {
	if (n < 2) bufferArray[n] = n;
	else (bufferArray[n] = bufferArray[n-1]+bufferArray[n-2]);
	//fibonacci using dynamic programming 
}

int main() {
	int n; 
	cin >> n;
	int* array = new int[n+1];

	for (int i = 0; i <= n; i++) {
		fibonacci(array, i);
	}
	cout << array[n] << endl;

	delete []array;

	return 0;
}