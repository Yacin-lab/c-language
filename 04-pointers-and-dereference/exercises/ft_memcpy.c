#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
    size_t i = 0;
    // Cast the void pointers to char pointers for byte-by-byte access
    unsigned char *temp_dest = dest;      // drt had temp_ptr type char bach yb9a ychof byte by byte
    const unsigned char *temp_src = src;    // matalan 3ndi int (4bytes) aywsl l kola byte bohdo w ycopyh

    // Copy 'n' bytes from source to destination
    while (i < n)
    {
        *(temp_dest + i) = *(temp_src + i);
        i++;
    }
    return (dest);
}

int main(void) {
char src[] = "Hello";
char dest[10];

ft_memcpy(dest, src, 6); // sizeof(src) = 1 * 6

printf("%s\n", dest);

    return (0);
}