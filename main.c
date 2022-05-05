#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h> 
#include <fcntl.h>
#include <unistd.h>

#include "ft_strlen.c"
#include "ft_strdup.c"
#include "ft_itoa.c"
#include "ft_memcpy.c"


/* int	atoi(const char *str);

int main (void)
{
	int 	val;
	char str[20];
	
	strcpy(str, "98993489");
	val = atoi(str);
	printf("String value = %s 			Int value = %d\n", str, val);

	strcpy(str, "  	----+98993489");
	val = atoi(str);
	printf("String value = %s 		Int value = %d\n", str, val);

	strcpy(str, "98993489//");
	val = atoi(str);
	printf("String value = %s 			Int value = %d\n", str, val);

	return(0);
} */

/* void	ft_bzero(void *s, size_t n);

int main(void)
{
	char str_1[16] = "This is a test!";
	char str_2[16] = "This is a test!";
	
	printf("\nBefore memset():        %s\n", str_1);
  
	// Fill 3 characters starting from str[10] with zero bytes
	ft_bzero(str_1 + 10, 3);
	printf("ft_bzero():             %s\n", str_1);

	// Origin bzero()
	bzero(str_2 + 10, 3);
	printf("origin bzero():         %s\n", str_2);
	return (0);
} */

/* void	*ft_calloc(size_t count, size_t size)

int main (void) 
{
	int 	i;
	int		n;
	int 	*a;
		
	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a = (int *)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ ) 
		scanf("%d",&a[i]);

	printf("The numbers entered are: ");
	for (i = 0; i < n; i++) 
		printf("%d ",a[i]);
	free(a);
   
   return (0);
} */

/* int	ft_isalnum(int c);

int main()
{
	char c;
	int result;
	
	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n", c, result);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is failed, return value is %d\n", c, result);

	c = ':';
	result = ft_isalnum(c);
	printf("When %c is failed, return value is %d\n", c, result);
	
	return 0;
} */

/* int	ft_isalpha(int c);

int main(void)
{
    printf("%d ", ft_isalpha('a'));
    printf("%d ", ft_isalpha('z'));
    printf("%d ", ft_isalpha('A'));
    printf("%d ", ft_isalpha('Z'));
    printf("%d ", ft_isalpha('@'));
    printf("%d ", ft_isalpha('['));
    printf("%d ", ft_isalpha(96));
    printf("%d ", ft_isalpha('{'));
    return (0);
} */

/* int	ft_isascii(int c);

int main (void)
{
	//ascii:
	printf("%d ", ft_isascii(0));
	printf("%d ", ft_isascii('A'));
	printf("%d ", ft_isascii('\n'));
	printf("%d ", ft_isascii(127));
	//not ascii:
	printf("%d ", ft_isascii(-1));
	printf("%d ", ft_isascii(128));
	return (0);
} */

/* int	ft_isdigit(int c);

int main(void)
{
	printf("%d ", ft_isdigit('0'));
	printf("%d ", ft_isdigit('9'));
	printf("%d ", ft_isdigit('/'));
	printf("%d ", ft_isdigit(':'));
	return (0);
} */

/* int	ft_isprint(int c);

int main(void)
{
    //printable characters
	printf("%d ", ft_isprint('a'));
	printf("%d ", ft_isprint(' '));
    //control characters
	printf("%d ", ft_isprint(0));
	printf("%d ", ft_isprint(31));
    printf("%d ", ft_isprint('\n'));
	printf("%d ", ft_isprint(127));
	return (0);
} */

/* void	*ft_memchr(const void *s, int c, size_t n);

int main (void) 
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	const char ch_2 = 'W';

	char *ret;

	ret = memchr(str, ch, strlen(str));
	printf("String after |%c| is:\n%s\n\n", ch, ret);
	
	ret = memchr(str, ch_2, strlen(str));
	printf("String after |%c| is:\n%s\n", ch_2, ret);
	
	return(0);
} */

/* int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main (void) 
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "ABCDE", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if (ret > 0)
      printf("str2 is less than str1\n");
   else if (ret < 0)
      printf("str1 is less than str2\n");
   else
      printf("str1 is equal to str2\n");
   
   return(0);
} */

/* void	*ft_memcpy(void *dst, const void *src, size_t n);

int main(void)
{
	char src[16] = "This is a test!";
	char dest_1[6] = "Hello";
	char dest_2[6] = "Hello";
	
	printf("\nBefore memcpy():       	%s\n", dest_1);
  
	// My memcpy
	ft_memcpy(dest_1, src + 5, 5);
	printf("ft_memcpy():             %s\n", dest_1);

	// Origin memcpy()
	memcpy(dest_2, src + 5, 5);
	printf("origin memcpy():         %s\n", dest_2);
	return (0);
} */

/* void	*ft_memmove(void *dst, const void *src, size_t n);

int main(void)
{
	// ------------- CASE 1 -------------
	char str1[13] = "Hello";
	char str2[13] = "Hello";
	char str3[13] = "Hello";
	char			*ptr1;
	char			*ptr2;
	char			*ptr3;

	ptr1 = str1;
	ptr2 = str2;
	ptr3 = str3;

	printf("\ndest Before memmove():     	%s\n", str1);
  
	// My memmove()
	ft_memmove(ptr1 + 2, ptr1, 3);
	printf("ft_memmove():             	%s\n", ptr1);

	// Origin memmove()
	ft_memmove(ptr2 + 2, ptr2, 3);
	printf("origin memmove():         	%s\n", ptr2);

	//memcpy() without overlaping
	ft_memmove(ptr3 + 2, ptr3, 3);
	printf("memcpy()			%s\n", ptr3);

	return (0);
} */

/* void	*ft_memset(void *b, int c, size_t len);

int main(void)
{
	char str[16] = "This is a test!";
	printf("\nBefore memset(): %s\n", str);
  
	// Fill 3 characters starting from str[10] with '@'
	ft_memset(str + 10, '@', 3);
  
	printf("After memset():  %s", str);
	return (0);
} */

/* char	*ft_strchr(const char *s, int c);

int main(void)
{
	char	*str = "This is a test";
	int		c;

	c = 'i';
	printf("The first occurrence of char %c:\n%s\n\n", c, ft_strchr(str, c));
	c = 'W';
	printf("The first occurrence of char %c:\n%s\n", c, ft_strchr(str, c));
	return (0);
} */

/* char	*ft_strdup(const char *s1);
 
int main(void)
{
    char source[] = "This is a test!\n";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source);
	
	printf("Original String:		%s\n", source);

    printf("Duplicate:			%s", target);
    return (0);
} */

/* char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	char	str1[] = "Hello ";
	char	str2[] = "World!";
	char 	*join;

	join = ft_strjoin(str1, str2);

	printf("String 1:				%s\n", str1);
	printf("String 2:				%s\n", str2);
	printf("Joined:					%s\n", join);

	return (0);
} */

/* size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	main(void)
{
	char	dest[7] = "Hello ";
	char	src[6] = "World";
	size_t 	len;

	len = ft_strlcat(dest, src, 12);
	printf("Here the destination string:				%s\n", dest);
	printf("Here the return of the function (string size):		%zu\n", len);

	return (0);
} */

/* size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main(void)
{
	char	dest[12] = "Hello World";
	char	src[5] = "Test";
	int		len;

	len = ft_strlcpy(dest, src, 5);
	printf("Result:		%s\n", dest);
	printf("Length:		%d\n", len);

	return (0);
} */

/* size_t	ft_strlen(const char *s);

int main(void)
{
	char    *str = "Hello World";
	printf("The string <%s> contains %zu characters\n", str, ft_strlen(str));
	return (0);
} */

/* int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main (void) 
{
	char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "ABCDEF");
	strcpy(str2, "ABCDEF");

	ret = strncmp(str1, str2, 6);

	if (ret < 0) 
		printf("str1 is less than str2\n");
	else if (ret > 0) 
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");
	return (0);
} */

/* char	*ft_strnstr(const char	*haystack, const char *needle, size_t len);

int main(void) 
{
	char *needle = "World";
	char *haystack = "Hello World";
    
	printf("%s\n", ft_strnstr(haystack, needle, 11));
    return 0;
} */

/* char	*ft_strrchr(const char *s, int c);

int main (void) 
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	const char ch_2 = 'W';
	char *ret;

	ret = strrchr(str, ch);
	printf("String after |%c| is:\n|%s|\n\n", ch, ret);

	ret = strrchr(str, ch_2);
	printf("No character |%c| found:\n|%s|\n", ch_2, ret);
	
	return (0);
} */

/* char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	char	str[] = "@@@$@@@This is a test!@@@#";
	char 	*trim;
	char	*set = "#@$";

	trim = ft_strtrim(str, set);

	printf("Untrimmed:				%s\n", str);
	printf("Trimmed:				%s\n", trim);

	return (0);
} */

/* char	*ft_substr(char const *s, unsigned int start, size_t len);
 
int main(void)
{
    char source[] = "This is a test!\n";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_substr(source, 5, 9);
	
	printf("Original String:		%s\n", source);
    printf("Duplicate:			%s\n", target);
    return (0);
} */

/* int	ft_tolower(int c);

int main(void)
{
	int	c = 'A';
	int	d = '[';
	
	printf("Here the lowercase conversion of '%c'	: 	%c\n", c, ft_tolower(c));
	printf("Here the lowercase conversion of '%c'	:	%c\n", d, ft_tolower(d));
	return (0);
} */

/* int	ft_toupper(int c);

int main(void)
{
	int	c = 'a';
	int	d = '[';
	
	printf("Here the uppercase conversion of '%c'	: 	%c\n", c, ft_toupper(c));
	printf("Here the uppercase conversion of '%c'	:	%c\n", d, ft_toupper(d));
	return (0);
} */

/* char	**ft_split(char const *s, char c);

int	main(void)
{
	char    months[] = ",,,JAN,FEB,,MAR,APR,MAY,JUN,JUL,,AUG,SEP,OCT,NOV,DEC,,";
	int		index;
	char	delim;
	char	**split;

	printf("\nmonths=[%s]\n\n", months);
	delim = ',';
	split = ft_split(months, delim);
	index = 0;
	while (split[index] != 0)
	{
		printf("%s\n", split[index]);
		free(*(split + index));
		index++;
	}
	printf("\n");
	return (0);
} */

/* char	*ft_itoa(int n);

int	main(void)
{
	int		n;
		
	n = -2147483648;
	//n = -2147483647;
	//n = 0;
	//n = 2147483647;
	printf("Number '%d' with ft_itoa():	%s\n",n ,ft_itoa(n));
	return (0);
} */

/* char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

//change every single character to the next folowing in ASCII
char f(unsigned int i, char str)
{
	printf("My inner function: index = %d and char is = %c\n", i, str);
	return (str + 1);
}

int main(void)
{	size_t	i;
	size_t	len;

	char str[] = "Hello!";
	len = strlen(str);

	printf("The original string is:		%s\n", str);
	
 	char *result = ft_strmapi(str, f);
	 
 	printf("\nThe string after ft_strmapi is:	%s\n", result);

	i = 0;
	while (i < len)
	{
		printf("My inner function: index = %zu and char is = %c\n", i, result[i]);
		i++;
	}
 	return 0;
} */

/* void ft_striteri(char *s, void (*f)(unsigned int, char*))

//change every single character to the next folowing in ASCII
void	f(unsigned int i, char *c)
{	
	i = 1;
	*c = *c + i;
}

int main(void)
{	
	char	str[] = "aBcDeF";

	printf("Before 	ft_striteri:		%s\n", str);
	ft_striteri(str, f);
	printf("After 	ft_striteri:		%s\n", str);

 	return 0;
} */

/* void ft_putchar_fd(char c, int fd);

int main(void) 
{     
	char	c;
	int 	fd1;
	int 	fd2;

	c = '@';
	//open + write into the first file
    // if file does not have in directory 
    // then file test.txt is created. 	
	fd1 = open("test.txt", O_WRONLY | O_CREAT); 
    if (fd1 == -1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);
        // print program detail "Success or failure" 
        perror("Program");                 
    }
	ft_putchar_fd(c, fd1);
	printf("File descriptor ID:	 % d\n", fd1);

	//open + write into the second file
	fd2 = open("test2.txt", O_WRONLY | O_CREAT); 
    if (fd2 == -1) 
    { 
        printf("Error Number % d\n", errno);
        perror("Program");                 
    }
	ft_putchar_fd(c, fd2);
	printf("File descriptor ID:	 % d\n", fd2);

	close(fd1);
	close(fd2);
    return (0); 
} */

/* void ft_putstr_fd(char *s, int fd);

int main(void) 
{     
	char	s[] = "This is a test!";
	int 	fd1;

	//open + write into the first file
    // if file does not have in directory 
    // then file test.txt is created. 	
	fd1 = open("test.txt", O_WRONLY | O_CREAT); 
    if (fd1 == -1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);
        // print program detail "Success or failure" 
        perror("Program");                 
    }
	ft_putstr_fd(s, fd1);
	printf("File descriptor ID:	 % d\n", fd1);

	close(fd1);
    return (0); 
} */

/* void ft_putendl_fd(char *s, int fd);

int main(void) 
{     
	char	s[] = "This is a test!";
	int 	fd1;

	//open + write into the first file
    // if file does not have in directory 
    // then file test.txt is created. 	
	fd1 = open("test.txt", O_WRONLY | O_CREAT); 
    if (fd1 == -1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);
        // print program detail "Success or failure" 
        perror("Program");                 
    }
	ft_putendl_fd(s, fd1);
	printf("File descriptor ID:	 % d\n", fd1);

	close(fd1);
    return (0); 
} */

/* void ft_putnbr_fd(int n, int fd);

int main(void) 
{     
	int		n = -2147483648;
	int 	fd1;

	//open + write into the first file
    // if file does not have in directory 
    // then file test.txt is created. 	
	fd1 = open("test.txt", O_WRONLY | O_CREAT); 
    if (fd1 == -1) 
    { 
        // print which type of error have in a code 
        printf("Error Number % d\n", errno);
        // print program detail "Success or failure" 
        perror("Program");                 
    }
	ft_putnbr_fd(n, fd1);
	printf("File descriptor ID:	 % d\n", fd1);

	close(fd1);
    return (0); 
} */

/* t_list  *ft_lstnew(void *content);

int		main(void) //compile without Werror to check!
{
    char	content[] = "lorem ipsum dolor sit";
    
    t_list	*elem;

	elem = ft_lstnew((void *)content);
	printf("%s\n", elem->content);
	return (0);
} */

/* void ft_lstadd_front(t_list **lst, t_list *new);

#include "ft_lstnew.c"

int		main(void)
{
	char test[] = "TEST_1";
    
	t_list *struc = ft_lstnew(test);
	t_list **link;
	link = &struc;

	char test2[] = "TEST_2";
	t_list *struc2 = ft_lstnew(test2);
	ft_lstadd_front(link, struc2);

	char test3[] = "TEST_3";
	t_list *struc3 = ft_lstnew(test3);
	ft_lstadd_front(link, struc3);

	char test4[] = "TEST_4";
	t_list *struc4 = ft_lstnew(test4);
	ft_lstadd_front(link, struc4);

	t_list *link_to_struct = *link;

	printf("%s	  [1]\n", link_to_struct->content);
	printf("%s	  [2]\n", link_to_struct->next->content);
	printf("%s	  [3]\n", link_to_struct->next->next->content);
	printf("%s	  [4]\n", link_to_struct->next->next->next->content);
} */

/* int ft_lstsize(t_list *lst);
#include "ft_lstadd_front.c"
#include "ft_lstnew.c"

int		main(void)
{
    int     len;
	t_list **link;
	char    test[] = "TEST_1";

	t_list *struc = ft_lstnew(test);
	t_list *struc2 = ft_lstnew(test);
	link = &struc;

	ft_lstadd_front(link, struc2);
    len = ft_lstsize(struc);
    printf("Length of the list: %d\n", len);
    return (0);
} */

/* t_list *ft_lstlast(t_list *lst);

int		main(void)
{
	char	str[] = "This is a test!";
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;
	t_list	*elem5;
	t_list	*elem6;
	t_list	*ret;

	if(!(elem1 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem2 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem3 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem4 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem5 = malloc(sizeof(t_list))))
		return (0);
	if(!(elem6 = malloc(sizeof(t_list))))
		return (0);

	elem1->next = elem2; //dereference of the elements
	elem2->next = elem3;
	elem3->next = elem4;
	elem4->next = elem5;
	elem5->next = elem6;
	elem6->next = NULL; //element 6 is the last
	elem6->content = (void *)str;
	ret = ft_lstlast(elem1);
	printf("\n%s\n", (char *)ret->content);

	return (0);
} */

/* void	ft_lstadd_back(t_list **lst, t_list *new);
#include "ft_lstnew.c"
#include "ft_lstlast.c"

int		main(void)
{
	char test[] = "TEST_1";
    
	t_list *struc = ft_lstnew(test);
	t_list **link;
	link = &struc;

	char test2[] = "TEST_2";
	t_list *struc2 = ft_lstnew(test2);
	ft_lstadd_back(link, struc2);

	char test3[] = "TEST_3";
	t_list *struc3 = ft_lstnew(test3);
	ft_lstadd_back(link, struc3);

	char test4[] = "TEST_4";
	t_list *struc4 = ft_lstnew(test4);
	ft_lstadd_back(link, struc4);

	t_list *link_to_struct = *link;

	printf("%s	  [1]\n", link_to_struct->content);
	printf("%s	  [2]\n", link_to_struct->next->content);
	printf("%s	  [3]\n", link_to_struct->next->next->content);
	printf("%s	  [4]\n", link_to_struct->next->next->next->content);
} */

/* void ft_lstdelone(t_list *lst, void (*del)(void*));
#include "ft_lstnew.c"

void	ft_del(void *mem)
{
     if (mem)
    {
        free(mem);
        mem = NULL;
    }
}

int		main(void) //compile without Werror to check!
{
    char	content[] = "This is a test!";
    
    t_list	*elem;
	size_t	len;

	len = ft_strlen(content);
	elem = (void *) malloc(sizeof(void) * len + 1);
	if (!elem)
		return (0);
	
	elem = ft_lstnew((void *)content);
	printf("Before delete:	\n%s", elem->content);
	
	ft_lstdelone(elem, ft_del);
	printf("\nAfter delete:	\n%s\n", elem->content);

	return (0);
} */

/* void	ft_lstclear(t_list **lst, void (*del)(void *));
#include "ft_strlen.c"
#include "ft_lstnew.c"
#include "ft_lstdelone.c"

#include <stdio.h>

void	ft_del(void *mem)
{
    if (mem)
        mem = NULL;
}

int		main(void) //compile without Werror to check!
{
    char	content[] = "This is a test!";
    
    t_list	*elem;
	t_list	**link;
	size_t	len;

	len = ft_strlen(content);
	elem = (void *) malloc(sizeof(void) * len + 1);
	if (!elem)
		return (0);
	
	elem = ft_lstnew((void *)content);
	link = &elem;
	printf("Before delete:	\n%s\nAfter delete:	\n", elem->content);
	
	ft_lstclear(link, ft_del);
	printf("%s\n", elem->content);

	return (0);
} */

/* void	ft_lstiter(t_list *lst, void (*f)(void *));
#include "ft_lstnew.c"
#include "ft_lstadd_back.c"
#include "ft_lstlast.c"
#include "ft_lstdelone.c"

void	*f(void *elem)
{	
	char	new_content[] = "New test!";
	strcpy(elem, new_content);
	return (elem);
}

int	main(void)
{
	char test[] = "TEST_1";
    
	t_list *struc = ft_lstnew(test);
	t_list **link;
	link = &struc;

	char test2[] = "TEST_2";
	t_list *struc2 = ft_lstnew(test2);
	ft_lstadd_back(link, struc2);
	t_list *link_to_struct = *link;

	ft_lstiter(link_to_struct, f((void *) link_to_struct));

	printf("%s	  [1]\n", link_to_struct->content);
	printf("%s	  [2]\n", link_to_struct->next->content);
} */

/* t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#include "ft_lstadd_front.c"
#include "ft_lstclear.c"
#include "ft_lstnew.c"
#include "ft_lstdelone.c"

void *negate(void *i)
{
    int *x = i;
    *x = *x * (-1);
    return (x);
}

void	print_lst(t_list *lst)
{
	while (lst)
	{
		printf("[%d] -> ", *((int *)(lst->content)));
		if (lst->next)
			lst = lst->next;
		else
			break ;
	}
	printf("(null)\n");
}

void  reset(void *i)
{
    int *x = i;
    *x = -1;
}

int main(void) 
{
    int x0 = 0;
    int x1 = 1;
    int x2 = 2;
	int x3 = 3;
    t_list *lst = ft_lstnew(&x0);
    t_list *n1 = ft_lstnew(&x1);
    t_list *n2 = ft_lstnew(&x2);
    t_list *n3 = ft_lstnew(&x3);

    ft_lstadd_front(&lst, n1);
    ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n3);

	print_lst(lst);
	t_list *map = ft_lstmap(n3, negate, reset);

	print_lst(lst);
    return (0);
} */
