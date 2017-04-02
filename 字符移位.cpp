#include <iostream>
#include <string>
using namespace std;
/*
小Q最近遇到了一个难题：把一个字符串的大写字母放到字符串的后面，各个字符的相对位置不变，且不能申请额外的空间。
你能帮帮小Q吗？


输入描述:

输入数据有多组，每组包含一个字符串s，且保证:1<=s.length<=1000.
  


输出描述:

对于每组数据，输出移位后的字符串。

输入例子:
AkleBiCeilD

输出例子:
kleieilABCD
*/



bool isUpperCase(char a) {
    return a >= 65 && a <= 90;
}


int main() {
    string s;
    while(cin >> s) {
        int initLength = s.length();
        
		for (int i = 0; i < initLength; i++) {
            if (isUpperCase(s[i])) {
                char temp = s[i];
                s[i] = '-';
                s.push_back(temp);
            }
        }
        for (int i = 0; i < initLength; ) {
            if (s[i] == '-') {
                s.erase(s.begin()+i);
            	i = 0;
            } else {
                i++;
            }
       
        }
        cout << s << endl;
    }
}
