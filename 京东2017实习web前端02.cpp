/*堆石头此题使用贪心即可
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {
    int stack = 0;
    int last = -1;
    int n, k;
    cin >> n >> k;
    int tempn = n;
    while(tempn != 0) {
        for (int i = k; i <= tempn;  ) {
            if (last == -1) {
                last = i;
                tempn -= i;
                i = k;
                stack++;
            }
            else {
            	if (last != i) {
                    last = i;
                    tempn -= i;
                    i = k;
                    stack++;
            	} else {
                	i++;
                }
            }
        }
		break;
    }
    cout << stack << endl;
    
}
