#include <stdio.h>

int main() {
	int ms = 1999;
	int dd = 1996;
	int year = 2020;

	ms = year - ms + 1;
	dd = year - dd + 1;

	if (ms++ == 22 || ++dd > 25) {
		printf("%d %d", ms, dd);
	}

	return 0;
}