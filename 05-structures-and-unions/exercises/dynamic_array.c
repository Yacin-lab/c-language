#include <stdio.h>
#include <stdlib.h>

int *allocate_int_array(int size) {
  int *allocate_dynamic_arr = NULL;
  
  allocate_dynamic_arr = (int *)malloc(size * sizeof(int));
  if(allocate_dynamic_arr == NULL)
    return (NULL);
  
  return (allocate_dynamic_arr);
}

void fill_array(int *arr, int size) {
  int i = 0;
  
  while(i < size) {
    arr[i] = i * 10;
    i++;
  }
}

int sum_array(int *arr, int size) {
  int sum = 0;
  int i = 0;
  
  while(i < size) {
    sum += arr[i];
    i++;
  }
  return (sum);
}

void reverse_array(int *arr, int size) {
  int temp, i = 0, j = size-1;
  
  while(i < j) {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
}

int main(void) {
  // initiale size of array
  int size = 5;
  
  // allocate daynamic array in heap of size integers 
  int *arr = allocate_int_array(size);
  
  // fill array  
  fill_array(arr, size);
  
  // sum of all elemets in array
  int sum = sum_array(arr, size);
  
  // reverse elements in place
  reverse_array(arr, size);
  
  for(int i = 0; i < size; i++)
  printf("%d ", arr[i]);
  
  free(arr);
  return 0;
}

