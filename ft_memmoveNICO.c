#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    if (!dest || !src)
        return (NULL);
    
    while (n > 0)
        {
            ((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
            n--;
        }
    
    return (dest);
}

int main()
{
    char str1[50] = "I am going from Delhi to Gorakhpur";
    char str2[50] = "I am going from Delhi to Gorakhpur";
    //Use of memmove
    printf( "Fonction testee:\tLe memmove officiel with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 11 );
    printf( "Destination:\t%s\n", str1 + 5 );
    memmove( str1 + 5, str1 + 11, 29 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%ld characters\n\n", strlen( str1 ) );
    //Use of ft_memmove
    printf( "Fonction testee:\tLe memmove de Nico avec overlap\n" );
    printf( "Orignal :\t%s\n",str2);
    printf( "Source:\t\t%s\n", str2 + 11 );
    printf( "Destination:\t%s\n", str2 + 5 );
    ft_memmove( str2 + 5, str2 + 11, 29 );
    printf( "Result:\t\t%s\n", str2 );
    printf( "Length:\t\t%ld characters\n\n", strlen( str2 ) );
    return 0;
}