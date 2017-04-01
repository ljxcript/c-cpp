#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
/*构造回文
给定一个字符串s，你可以从中删除一些字符，使得剩下的串是一个回文串。如何删除才能使得回文串最长呢？
输出需要删除的字符个数。

输入描述:

输入数据有多组，每组包含一个字符串s，且保证:1<=s.length<=1000.
  


输出描述:

对于每组数据，输出一个整数，代表最少需要删除的字符个数。

输入例子:
abcda
google

输出例子:
2
2*/

#define N 1000
#define M 1000


int max(int a, int b) {
	return a > b? a : b;
}


int main() {
	string n, m;
	int result[N][M] = {0}; 
    while(cin >> n) {
        m = n;
        reverse(m.begin(), m.end());
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
    cout << n.length()-result[n.length()-1][n.length()-1] << endl;
        
    }
   




}