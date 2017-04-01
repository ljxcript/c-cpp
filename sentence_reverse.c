#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isLetter(char a) {
	return (a >= 97 && a <= 122) || (a >= 65 && a <= 90);
}


void reverse_string(char* s, int from , int to) {
	if (!isLetter(s[from])) from++;
	while (from < to) {

		char temp = s[from];
		s[from++] = s[to];
		s[to--] = temp;

	}

}




int main() {
	char str[] = "I am a student. Tony is a very nice boy, he deserves everything he wants in the world.";

	reverse_string(str, 0, strlen(str)-1);

	printf("%s\n", str);
	int prober_front, prober_back;

	prober_front = 0;

	prober_back = 0;

	while (prober_front != strlen(str) - 1) {

		if (str[prober_front] == ' ') {
			reverse_string(str, prober_back, prober_front-1);
			prober_back = prober_front;
			prober_back++;
		}
		// while(!isLetter(str[prober_front])){
			prober_front++;
		// }
	}

	printf("%s\n", str);
}