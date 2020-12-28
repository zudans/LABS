#include <stdio.h>
#include <iostream>
#include <string.h>

int main() {
	char str[255];
	char buf[255];
	char token[255] = "";
	char ch;
	bool isFirstSymbol;
	int i = 0;
	int j = 0;
	int k;

	gets(buf);

	strcpy(str, "");

	do {
		isFirstSymbol = false;

		while (true) {
			ch = buf[i++];

			if (ch > '9') {
				isFirstSymbol = true;
			}

			if (ch == ' ' || ch == '.' || ch == '\0') {
				if (token[0] > '9') {
					if (isFirstSymbol) {
						strcat(str, token);
						strcat(str, " ");
					}
				}
				
				token[j] = '\0';
				j = 0;
				
				for (k = 0; k < 255; k++) {
					token[k] = '\0';
				}

				break;
			} else {
				token[j++] = ch;
			}
		}

	} while (ch != '.' && ch != '\0');

	std::cout << str << std::endl;

	return 0;
}