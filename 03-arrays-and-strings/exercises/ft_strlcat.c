#include <stdio.h>

size_t ft_strlen(const char *str) {
  size_t len;
  
  len = 0;
  while(str[len])
    len++;
  return len;
}

// RETURN VALUES:
// Like snprintf(3), strlcat() function return the 'total length of 
// the string it tried to create'. That means the initial length of 
// dst plus the length of src.
//     .If the return value is >= dstsize, the output string has been truncated.
//     .It is the caller's responsibility to handle this.
size_t ft_strlcat(char *dest, const char *src, size_t size) {    // size_t t9riban == unsigned int 7it int y9dr ykon sghir bzaaf awla negative 
    size_t i = 0;                                                // size_t designed for memory sizes katsta3mal f length / size / index / memory count
    size_t remainingSpace;
    size_t src_len = ft_strlen(src);
    size_t dst_len = 0;
    
    // 7sbt lendest bhad tari9a 7it momkin dest mykonch fih '\0'
    while(dest[dst_len] && dst_len < size)
        dst_len++;
    
    // Ila kan dstsize sgher men l-asl dyal dst, rejja3 len_src + dstsize (y3ni kan3tabro dst_len == dstsize)
    // had return kat3ni len dyal dest li kant ghat9ad kon kan size dyal buffer kbir
    // fach kayji size <= dstlen y3ni gal lik had size li bghit safi (wakha dest twil) w bghit iji morah src
    // ya3ni total len hna ghaykon size + src_len
    if(size <= dst_len)
        return (size + src_len);
    
    // Hadi hya space li b9at mn buffer  - 1 bach nkhaliw blast '\0'
    remainingSpace = size - dst_len - 1;
    while(src[i] != '\0' && remainingSpace > 0) {      // or dst_len + i < size - 1
        dest[dst_len + i] = src[i];
        remainingSpace--;
        i++;
    }
    // ila kan remainingspace = 0 ghadi yktb '\0' f index destLen (y3ni mn ba3d akhir char, 7it kaybda mn 0)
    dest[dst_len + i] = '\0';

    return (dst_len + src_len);
}

int main(void) {
    char *src = "World!";
    char buffer[20] = "hello, ";
    size_t size = 20;
    size_t return_len;

    printf("\nBuffer 9bel: [%s]\n", buffer);

    // Appends "World!" to "Hello, " ila kant 3ndi space kafya l src f buffer. else
    // copy 7tal max size dyal buffer.
    // w rja3 tol dyal src w dest fkilta l7alatayn (ya3ni hada howa len dyal buffer li ghat9ad)
    return_len = ft_strlcat(buffer, src, size);    // destsize = size = 20

    printf("Buffer men be3d: [%s]\n", buffer);
    printf("Return value (tried to create): %zu\n", return_len);
    printf("Size lli 3tinah: %zu\n\n", size);

    if (return_len >= size)
        printf("⚠️ Warning: String truncated! (Khssk %zu spaces (size))\n", return_len + 1);
    else
        printf("✅ Success: String concatenated perfectly.\n");

    return (0);
}