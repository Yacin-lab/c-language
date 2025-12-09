#include <stdio.h>

int main () {
	int Day;
	char arr[7][10] = {"Sunday", "Monday", "Tuesday",
		"Wednesday", "Thursday", "Friday", "Saturday"};
	do {
	printf("Enter Day: ");
	scanf("%d", &Day);
	if (Day < 1 || Day > 7)
		printf("Wrong Day\n");
	} while (Day < 1 || Day > 7);

	printf("Its %s\n", arr[Day-1]);
	
	return 0;
}
