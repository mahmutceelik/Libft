/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macelik <macelik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:37:24 by macelik           #+#    #+#             */
/*   Updated: 2023/02/22 14:00:12 by macelik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

 /*     FT_İSALPHA

 int main()
 {
    int m = 'm';
    printf("%d",ft_isalpha(m));
 }
*/

/*      FT_ISDIGIT

int main()
{
    int m = '9';
    printf("%d",ft_isdigit(m));
}
*/

/*      FT_İSALNUM
int main()
{
    int m = '\t';
    printf("%d",ft_isalnum(m));
}
*/

/*      FT_ISASCII

int main()
{
    int m = 'A';
    printf("%d",ft_isascii(m));
}
*/

/*      FT_ISPRINT

int main()
{
    int m = '\t';
    printf("%d",ft_isprint(m));

}
*/

/*      FT_STRLEN

int main()
{
    char m[]="ahmet";
    int result = ft_strlen(m);
    printf("%d",result);
}
*/

/*      FT_MEMSET

int main()
{
    char m[] = "ahmet";
    ft_memset(m, 'm', 3);
    printf("%s",m);
}

int main()
{
    int m[]= {};
     ft_memset(m, 0, 6);
     printf("%d",m[1]);
}

*/


/*      FT_BZERO

int main()
{
    char x[] = "mahmut";
    ft_bzero(x, 6);
    printf("%s",x);
*/

/*      FT_MEMCPY

int main()
{
    char dst[]= "aabbcc";
    ft_memcpy(dst+2,dst,3);
    printf("%s",dst);
}
*/

/*      FT_MEMMOVE

int main()
{
    char dst[]= "aabbcc";
    ft_memmove(dst+2,dst,3);
    printf("%s",dst);
}
*/

/*      FT_STRLCPY

int main()
{
    char    dst[] = "mahmut";
    char    src[] = "baran";
    printf("%zu",ft_strlcpy(dst, src, 3));
}
*/

/*      FT_STRLCAT

int main()
{
    char    x[] = "mahmut";
    char    y[] = "aykut";
    printf("%zu",ft_strlcat(x, y, 0));
}

/*      FT_TOUPPER

int main()
{
    char c = 'a';
    printf("%c",ft_toupper(c));
}
*/

/*      FT_TOLOWER

int main()
{
    char c = 'A';
    printf("%c",ft_tolower(c));
}
*/

/*      FT_STRCHR

int main()
{
    char    x[] = "mahmut,celik.mis";
    printf("%s", ft_strchr(x, ','));
}
*/

/*      FT_STRRCHR

int main()
{
    char dst[] = "mahmut.celik.mis";
    printf("%s",ft_strrchr(dst, '.'));

}

/*      FT_STRNCMP

int main()
{
    char dst[] = "alı";
    char s[] = "alım";
    printf("%d",ft_strncmp(dst,s,4));
}

/*      FT_MEMCHR

int main()
{
    char x[] = "mahmut.celik.mis";
    printf("%s", (char *)ft_memchr(x, '.', 12));
}
*/

/*      FT_MEMCMP

int	main()
{
	int	array[] = {1,2,3};
	int	arr[] = {4,5,6};
	printf("%d", ft_memcmp(array, arr, 2));
}

/*      FT_STRNSTR

int main()
{
    char hay[] = "mahmutcelikzeynep";
    char need[] = "cel";
    printf("%s",ft_strnstr(hay, need, 9));

}
*/

/*      FT_ATOI

int main()
{
    char m[] = "-42";
    printf("%d",ft_atoi(m));

}
*/

/*      FT_CALLOC









*/

/*      FT_STRDUP

int main()
{
    char x[] = "Mahmut";
    printf("%s",ft_strdup(x));
}
*/

/*      FT_SUBSTR

int main()
{
    char m[] = "pizzakolahamburger";
    printf("%s",ft_substr(f, 2, 3,));
}
*/

/*      FT_STRJOİN

int main()
{
    char m[]="mahmut";
    char a[]= "aykut";
    printf("%s",ft_strjoin(m, a));
}
*/

/*      FT_STRTRİM

int main()
{
    char    m[] = "??how??do??i??shine";
    printf("%s", ft_strtrim(m, "??"));
}
*/

/*      FT_SPLİT

int main()
{
    char **s;
    s = ft_split("mahmut.celik", '.');
    while (*s)
    {
        printf("%s\n", *s);
        s++;
    }
}
*/

/*      FT_ITOA

int main()
{
    int m = 42;
    printf("int: %d\n",m);
    printf("str: %s", ft_itoa(m));
}
*/

/*      FT_STRMAPİ
void mak(unsigned int i, char *str)
 {
     i = 0;
     str[i] = str[i] - 32;
 }
 int main()
 {
    char str[] = "mahmut";
     ft_striteri(str, mak);   
     printf("%s", str);
     return (0);
 }
 */

/*      FT_STRİTERİ

/*char    buyut(unsigned int i, char str)
{
    (void)i;
    str = str - 32;
    return (str);
}
int main()
{
    char str[] = "mahmut";
    printf("%s",  ft_strmapi(str, &buyut));
}

*/


/*      FT_PUTCHAR_FD

int main(void)
{
    char m[] = 'm' ;
    int fd = open("mahmut.celik", O_RDWR | O_CREAT, 0777);
    ft_putstr_fd(z, fd);
}

*/

/*      FT_PUTSTR_FD

int main()
{
    char z[] = "mahmut";
    int fd = open("mahmut.celik", O_RDWR | O_CREAT, 0777);
    ft_putstr_fd(z, fd);
}

*/

/*      FT_PUTENDL_FD

int main()
{
    char z[] = "mahmut";
    int fd = open("mahmut.celik", O_RDWR | O_CREAT, 0777);
    ft_putnbr_fd(z, fd);
}

/*      FT_PUTNBR_FD

int main()
{
    int m = 424242;
    int fd = open("mahmut.celik", 0_RDWR | 0_CREAT, 0777);
    ft_putnbr_fd(x,fd);
}