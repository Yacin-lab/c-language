#include <stdio.h>

int ft_sum_range(int start, int end)
{
    if(start > end)
        return(0);
    if(end == start)
        return (start);
    
    return end + ft_sum_range(start, end - 1);

    // 3 + f(-1,2)   ->  2 + f(-1,1)   ->  1 + f(-1,0)    ->  0 + f(-1,-1)  <-  return -1
    //       |                 |                 |                 |
    //       v                 v                 v                 v
    // 3 +  [2] = 5  <-  2 +  [0] = 2  <-  1 +  [-1] = 0  <-  0 + [-1] = -1
}

int main(void)
{
    printf("%d\n", ft_sum_range(-1, 3));
    return(0);
}