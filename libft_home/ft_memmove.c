void *ft_memmove(void *dest, void *str, int len)//size_t に変更する
{
    unsigned char *dest1;
    unsigned char *str1;

    dest1 = (unsigned char *)dest;
    str1 = (unsigned char *)str;

    while(len--)
    {
        *dest1 = *str1;
        dest1++;
        str1++;
    }
    return(dest);
}

#include <string.h>
#include <unistd.h>
int main()
{
    char dest[30]= {0};
    char str[30] = "Hello";
    memmove(dest,str,3);
    write(1,dest,5);
    write(1,"\n",1);

    char dest1[30]= {0};
    char str1[30] = "Hello";
    ft_memmove(dest1,str1,3);

    write(1,dest1,5);
    write(1,"\n",1);
}