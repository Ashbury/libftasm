#include "libftasm.h"

static void	test_ft_bzero(void)
{
	char	str[27] = "abcdefghijklmnopqrstuvwxyz";
	int		result = 1;

	puts("Testing ft_bzero:");
	ft_bzero(str, 1);
	if (str[0] || str[1] != 'b')
		result = 0;
	ft_bzero(str, 25);
	for (size_t i = 0; i < 25; i++)
		if (str[i] != '\0')
			result = 0;
	if (str[25] != 'z')
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_isalnum(void)
{
	int		result = 1;

	puts("Testing ft_isalnum:");
	if (ft_isalnum(0) != isalnum(0))
		result = 0;
	if (ft_isalnum(-42) != isalnum(-42))
		result = 0;
	if (ft_isalnum('a') != isalnum('a'))
		result = 0;
	if (ft_isalnum('9') != isalnum('9'))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_isalpha(void)
{
	int		result = 1;

	puts("Testing ft_isalpha:");
	if (ft_isalpha(0) != isalpha(0))
		result = 0;
	if (ft_isalpha(-42) != isalpha(-42))
		result = 0;
	if (ft_isalpha('a') != isalpha('a'))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_isascii(void)
{
	int		result = 1;

	puts("Testing ft_isascii:");
	if (ft_isascii(0) != isascii(0))
		result = 0;
	if (ft_isascii(-42) != isascii(-42))
		result = 0;
	if (ft_isascii(42) != isascii(42))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_isdigit(void)
{
	int		result = 1;

	puts("Testing ft_isdigit:");
	if (ft_isdigit(0) != isdigit(0))
		result = 0;
	if (ft_isdigit(-42) != isdigit(-42))
		result = 0;
	if (ft_isdigit('9') != isdigit('9'))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_isprint(void)
{
	int		result = 1;

	puts("Testing ft_isprint:");
	if (ft_isprint(0) != isprint(0))
		result = 0;
	if (ft_isprint(-42) != isprint(-42))
		result = 0;
	if (ft_isprint(42) != isprint(42))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_islower(void)
{
	int		result = 1;

	puts("Testing ft_islower:");
	if (ft_islower(0) != islower(0))
		result = 0;
	if (ft_islower(-42) != islower(-42))
		result = 0;
	if (ft_islower('a') != islower('a'))
		result = 0;
	if (ft_islower('A') != islower('A'))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_isupper(void)
{
	int		result = 1;

	puts("Testing ft_isupper:");
	if (ft_isupper(0) != isupper(0))
		result = 0;
	if (ft_isupper(-42) != isupper(-42))
		result = 0;
	if (ft_islower('a') != islower('a'))
		result = 0;
	if (ft_islower('A') != islower('A'))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_strcat(void)
{
	int	result = 1;
	char str1[50] = "tata";
	char str2[50] = "toto";
	char str3[50] = "tata";
	char str4[50] = "toto";

	puts("Testing ft_strcat:");

	if (strcmp(ft_strcat(str1, str2),strcat(str3, str4)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	str2[0] = '\0';
	str4[0] = '\0';
	if (strcmp(ft_strcat(str1, str2),strcat(str3, str4)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	if (strcmp(ft_strcat(str2, str1),strcat(str4, str3)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_tolower(void)
{
	int	result = 1;

	puts("Testing ft_tolower:");
	if (ft_tolower('a') != tolower('a'))
		result = 0;
	if (ft_tolower('A') != tolower('A'))
		result = 0;
	if (ft_tolower(42) != tolower(42))
		result = 0;
	if (ft_tolower(2197) != tolower(2197))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_toupper(void)
{
	int	result = 1;

	puts("Testing ft_toupper:");
	if (ft_toupper('a') != toupper('a'))
		result = 0;
	if (ft_toupper('A') != toupper('A'))
		result = 0;
	if (ft_toupper(42) != toupper(42))
		result = 0;
	if (ft_toupper(2197) != toupper(2197))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_memcpy(void)
{
	int	result = 1;
	char str1[50] = "tata";
	char str2[50] = "toto";
	char str3[50] = "tata";
	char str4[50] = "toto";

	puts("Testing ft_memcpy:");

	if (strcmp(ft_memcpy(str1, str2, 0),memcpy(str3, str4, 0)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	if (strcmp(ft_memcpy(str1, str2, 4),memcpy(str3, str4, 4)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	str2[0] = '\0';
	str4[0] = '\0';
	if (strcmp(ft_memcpy(str1, str2, 4),memcpy(str3, str4, 4)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	if (strcmp(ft_memcpy(str2, str1, 10),memcpy(str4, str3, 10)))
		result = 0;
	if (strcmp(str1, str3) || strcmp(str2, str4))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_memset(void)
{
	int	result = 1;
	char str[50];

	puts("Testing ft_memset:");
	ft_memset(str, '\0', 50);
	for(size_t i = 0; i < 50; i++)
		if (str[i] != '\0')
			result = 0;
	ft_memset(str, '*', 9);
	for(size_t i = 0; i < 9; i++)
		if (str[i] != '*')
			result = 0;
	if (str[9] != '\0')
		result = 0;
	ft_memset(str, 'a', 1);
	if (str[0] != 'a' || str[1] != '*')
		result = 0;
	ft_memset(str, 'z', 0);
	if (str[0] != 'a' || str[1] != '*')
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_strdup(void)
{
	int	result = 1;
	char *str1;
	char *str2;

	puts("Testing ft_strdup:");
	str1 = ft_strdup("");
	str2 = strdup("");
	if (strcmp(str1, str2))
		result = 0;
	free(str1);
	free(str2);
	str1 = ft_strdup("This is quite a long string");
	str2 = strdup("This is quite a long string");
	if (strcmp(str1, str2))
		result = 0;
	free(str1);
	free(str2);
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_strlen(void)
{
	int	result = 1;

	puts("Testing ft_strlen:");
	if (ft_strlen("") != strlen(""))
		result = 0;
	if (ft_strlen(" ") != strlen(" "))
		result = 0;
	if (ft_strlen("This is quite a long string") != strlen("This is quite a long string"))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_strcmp(void)
{
	int	result = 1;

	puts("Testing ft_strcmp:");
	if (ft_strcmp("test", "test") != strcmp("test", "test"))
		result = 0;
	if (ft_strcmp("", "tata") != strcmp("", "tata"))
		result = 0;
	if (ft_strcmp("tata", "") != strcmp("tata", ""))
		result = 0;
	if (ft_strcmp("Ceci est un test", "Ceci est un tesk") != strcmp("Ceci est un test", "Ceci est un tesk"))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_lstadd(void)
{
	t_list	*head;
	t_list	l1;
	t_list	l2;
	t_list	l3;
	int	result = 1;

	puts("Testing ft_lstadd:");
	head = &l2;
	l1.content = "l1";
	l2.content = "l2";
	l2.next = &l3;
	l3.content = "l3";
	l3.next = NULL;
	ft_lstadd(&head, &l1);
	if (strcmp(head->content, "l1") || strcmp(head->next->content, "l2"))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	del(void *ptr, size_t nb)
{
	(void)nb;
	free(ptr);
}

static void	test_ft_lstdel(void)
{
	t_list	*l1;
	t_list	*l2;
	int	result = 1;

	puts("Testing ft_lstdel:");
	l1 = malloc(sizeof(t_list));
	l2 = malloc(sizeof(t_list));
	l1->content = ft_strdup("l1");
	l1->next = l2;
	l2->content = ft_strdup("l2");
	l2->next = NULL;
	ft_lstdel(&l1, &del);
	if (l1 != NULL)
		result = 0;
	ft_lstdel(&l1, &del);
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static t_list	*foo(t_list *elem)
{
	t_list	*ret;

	ret = malloc(sizeof(t_list));
	ret->content = elem->content;
	ret->content_size = elem->content_size + 3;
	ret->next = NULL;
	return (ret);
}

static void	del2(void *ptr, size_t nb)
{
	(void)ptr;
	(void)nb;
}

static void	test_ft_lstmap(void)
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	t_list	*new;
	int	result = 1;

	puts("Testing ft_lstmap:");
	l1 = malloc(sizeof(t_list));
	l2 = malloc(sizeof(t_list));
	l3 = malloc(sizeof(t_list));

	l1->content = NULL;
	l1->content_size = 1;
	l1->next = l2;
	l2->content = NULL;
	l2->content_size = 2;
	l2->next = l3;
	l3->content = NULL;
	l3->content_size = 3;
	l3->next = NULL;
	new = ft_lstmap(l1, &foo);
	if (new == NULL || new->content_size != 4
		|| new->next == NULL || new->next->content_size != 5
		|| new->next->next == NULL || new->next->next->content_size != 6
		|| new->next->next->next != NULL)
		result = 0;
	ft_lstdel(&l1, &del2);
	ft_lstdel(&new, &del2);
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_strrev(void)
{
	int	result = 1;
	char	str1[1] = "";
	char	str2[2] = "1";
	char	str3[3] = "12";
	char	str4[4] = "123";
	
	puts("Testing ft_strrev:");
	if (strcmp(ft_strrev(str1), ""))
		result = 0;
	if (strcmp(ft_strrev(str2), "1"))
		result = 0;
	if (strcmp(ft_strrev(str3), "21"))
		result = 0;
	if (strcmp(ft_strrev(str4), "321"))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_puts(void)
{
	int	result = 1;

	puts("Testing ft_puts:");
	if (ft_puts("tata") != puts("tata"))
		result = 0;
	if (ft_puts("tata\n") != puts("tata\n "))
		result = 0;
	if (ft_puts(NULL) != puts(NULL))
		result = 0;
	if (ft_puts("") != puts(""))
		result = 0;
	if (result)
		puts("Tests passed.\n");
	else
		puts("Tests failed.\n");
}

static void	test_ft_putnbr(void)
{
	puts("Testing ft_putnbr:");
	ft_putnbr(0);
	ft_putnbr(-42);
	ft_putnbr(42);
	ft_putnbr(INT_MIN);
	ft_putnbr(INT_MAX);
	ft_putnbr(INT_MAX + 1);
	ft_putnbr(INT_MIN - 1);
	puts("Tests passed.\n");
}

static void	test_ft_cat(char *file)
{
	int	fd;

	puts("Testing ft_strcat:");
	fd = open(file, O_RDONLY);
	if (fd < 1)
	{
		puts("Error while opening the test file");
		return ;
	}
	ft_cat(fd);
	close(fd);
	ft_cat(0);
	puts("Tests passed.\n");
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return 1;

	test_ft_bzero();
	test_ft_isalnum();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isdigit();
	test_ft_isprint();
	test_ft_islower();
	test_ft_isupper();
	test_ft_strcat();
	test_ft_tolower();
	test_ft_toupper();
	test_ft_memcpy();
	test_ft_memset();
	test_ft_strdup();
	test_ft_strlen();
	test_ft_strcmp();
	test_ft_lstadd();
	test_ft_lstdel();
	test_ft_lstmap();
	test_ft_strrev();
	test_ft_puts();
	test_ft_putnbr();
	test_ft_cat(av[1]);
	return 0;
}
