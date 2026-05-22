#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    int j = 1;
    int count = 1;
    while(j < numsSize) {
        if(nums[i] != nums[j]) {
            count++;
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return (count);
}

int main(void) {
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("%d\n", removeDuplicates(nums, size));

    for(int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return (0);
}