#include <iostream>
#include <vector>
#include <string>
using namespace std;


#define N 1000
#define M 1000


int max(int a, int b) {
	return a > b? a : b;
}


int main() {
	string n, m;

	getline(cin, n);
	getline(cin, m);

	int result[N][M] = {0}; 

	string lcs = "";


	for (int i = 0; i < n.length(); i++) {
		for (int j = 0; j < m.length(); j++) {
			if (n[i] == m[j]) {

				result[i][j] = (i == 0 || j == 0)? 1 : result[i-1][j-1] + 1;

			} else {

				int a = i == 0? 0 : result[i-1][j];
				int b = j == 0? 0 : result[i][j-1];

				result[i][j] = max(a, b);

			}	
		}

	}
	cout << result[n.length()-1][m.length()-1] << endl;




}