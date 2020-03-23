#include <stdio.h>

int main() {
	// Declare starting values
	long int nums[] = { 101, 52, 13, 67, 94, 85, 2, 18000, 576, 972, 15, 45 };
	int element_count = (sizeof(nums) / sizeof(nums[0]));
	int limit = 0;
	int repeat = 1;

	// Print the list. Not actually relevent to the algorithm.
	printf("Start >> ");
	for (int i = 0; i < element_count; i++) {
		printf("%d ", nums[i]);
	}
	puts("");

	// Algorithm Start
	while (repeat) {
		repeat = 0;
		for (int i = 0; i < element_count - limit; i++) {
			if (nums[i] > nums [i+1]) {
				int temp = nums[i];
				nums[i] = nums[i+1];
				nums[i+1] = temp;
				repeat = 1;
			}
		}
		limit++;
		// Algorith End

		// Print the list. Not actually relevent to the algorithm.
		if (repeat) {
			printf("Pass #%d: ", limit);
			for (int i = 0; i < element_count; i++) {
				printf("%d ", nums[i]);
			}
			puts("");
		}
	}
	puts("Done \u2713");

	return 0;
}
