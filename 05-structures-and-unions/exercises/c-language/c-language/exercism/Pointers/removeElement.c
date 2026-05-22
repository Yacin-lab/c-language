#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int read = 0;
    int write = 0;
    
    while(read < numsSize) {
        if(nums[read] != val) {
            nums[write] = nums[read];
            write++;
        }
        read++;
    }
    return (write);
}

int main(void) {
    int arr[] = {0,1,2,2,3,0,4,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", removeElement(arr, size, 2));

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return (0);
}