#include <stdio.h>

int ft_binary_search(int *arr, int left, int right, int target);

int main(void) {
    int arr[] = {1, 3, 5, 7, 9};
    int index = 0;
    int size = 5;
    int target = 1;

    printf("%d\n", ft_binary_search(arr, index, size - 1, target));

    return (0);
}

int ft_binary_search(int *arr, int left, int right, int target) {
    
    int mid = (left + right) / 2;   // Kol marra kan9sam array 3la 2
    
    if(left > right)                // Base case ila wla left > right y3nisalit array w mafihach target
        return(-1);
    if(arr[mid] == target)          // ila l9it target flwast dyal arr return index
        return (mid);
    if(arr[mid] < target)           // ila kan dak lwast sghar mn target
        left = mid + 1;             // larray ghatwli badya mn lwast + 1 7tal akhir dyal array
    else
        right = mid - 1;            // ila kan dak lwast kbar mn target
                                    // larray ghatwli badya mn lwast - 1 7tal awal dyal array

    return ft_binary_search(arr, left, right, target); // kol mra kan3yata 3la function b7odod jdida
                                                       // 7ta l9a target
}