#include <stdio.h>
#include <stdlib.h>

int **allocate_matrix(int rows, int cols) {
  // allocate array of n pointers
  // each pointer will represent one row
  int **creat_arr = (int **)malloc(rows * sizeof(int *));
  if(creat_arr == NULL)
    return (NULL);
  
  // Loop to allocate memory for each individual row
  for(int i = 0; i < rows; i++) {
    // allocate n integers for row i
    creat_arr[i] = (int *)malloc(cols * sizeof(int));
    
    // if one row fails, free the previous ones
    if(creat_arr[i] == NULL) {
      while(i > 0)  free(creat_arr[--i]);
      free(creat_arr);
      return (NULL);
    }
  }

  // creat_arr        → array of pointers
  // creat_arr[i]     → row i
  // creat_arr[i][j]  → element          // **matrix != matrix[n][n]
  
  return(creat_arr);
}

void fill_matrix(int **matrix, int rows, int cols) {
  int i, j;
  
  i = 0;
  while(i < rows) {
    j = 0;
    while(j < cols) {
      matrix[i][j] = i + j;
      j++;
    }
    i++;
  }
}

void print_matrix(int **matrix, int rows, int cols) {
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }
}

void free_matrix(int **matrix, int rows) {
  int i = 0;
  // bach ila makantch matrix mojoda aslan
  if(!matrix) return;
  
  while(i < rows) {
    free(matrix[i]);  // delete rows
    i++;
  }
  free(matrix); // delete array of pointers
}

int main(void) {
  // initial rows and columns
  int rows = 2, cols = 4;
  
  // allocate 2D dynamic array
  int **matrix = allocate_matrix(rows, cols);
  // fill matrix
  fill_matrix(matrix, rows, cols);
  // print the matrix
  print_matrix(matrix, rows, cols);
  // free all allocated memory
  free_matrix(matrix, rows);
  
  return (0);
}
// -----------------------------------------------------------------------------------------
/*
  had tari9a kan3yat 3la malloc just 2calls blast (n + 1 calls)
  w katkon all elemennts dakhl block wa7d contiguous blast (rows mfar9in f memory)
int **allocate_matrix(int rows, int cols) {
  // int arr[r][c]  → contiguous memory !=
  // int **arr      → array of pointers
  int **matrix;
  int *data;

  // allocate array of rows pointers
  matrix = (int **)malloc(rows * sizeof(int *));
  if (!matrix)
    return NULL;

  // allocate ONE contiguous block for all elements
  data = (int *)malloc(rows * cols * sizeof(int));
  if (!data) {
    free(matrix);
    return NULL;
  }

  // make each row pointer point inside the big block
  for(int i = 0; i < rows; i++)
    matrix[i] = data + cols*i;

  return (matrix);
}
// free(data); or free(matrix[0]);
// free(matrix);
*/