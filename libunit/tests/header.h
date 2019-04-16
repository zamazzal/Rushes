/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamazzal <zouhir.amazzal@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:45:31 by zamazzal          #+#    #+#             */
/*   Updated: 2018/12/02 08:02:10 by zamazzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include "libft.h"
# include "libunit.h"
# include "colors.h"

int		atoi_basic1(void);
int		atoi_basic2(void);
int		atoi_basic3(void);
int		atoi_basic4(void);
int		atoi_basic5(void);
int		atoi_basic6(void);
int		atoi_basic7(void);
int		atoi_basic8(void);
int		atoi_basic9(void);
int		atoi_basic10(void);
int		atoi_basic11(void);
int		atoi_basic12(void);
int		atoi_basic13(void);
int		atoi_basic14(void);
int		atoi_basic15(void);
int		atoi_basic16(void);
int		isalnum_basic1(void);
int		isalpha_basic1(void);
int		isascii_basic1(void);
int		isdigit_basic1(void);
int		isprint_basic1(void);
int		strchr_basic1(void);
int		strchr_basic2(void);
int		strchr_basic3(void);
int		strchr_basic4(void);
int		strchr_null(void);
int		strdup_basic1(void);
int		strdup_basic2(void);
int		strdup_basic3(void);
int		strdup_hard(void);
int		strdup_null(void);
int		strlen_basic1(void);
int		strlen_basic2(void);
int		strlen_basic3(void);
int		strlen_null(void);
int		strlen_big(void);
int		strncat_basic1(void);
int		strncat_basic2(void);
int		strncat_basic3(void);
int		strncat_basic4(void);
int		strncat_hard(void);
int		strncat_null(void);
int		strncmp_basic1(void);
int		strncmp_basic2(void);
int		strncmp_basic3(void);
int		strncmp_basic4(void);
int		strncmp_hard(void);
int		strncmp_null1(void);
int		strncmp_null2(void);
int		strncmp_null3(void);
int		strncpy_basic1(void);
int		strncpy_basic2(void);
int		strncpy_basic3(void);
int		strncpy_basic4(void);
int		strncpy_null(void);
int		strnstr_basic1(void);
int		strnstr_basic2(void);
int		strnstr_basic3(void);
int		strnstr_basic4(void);
int		strnstr_null(void);
int		strrchr_basic1(void);
int		strrchr_basic2(void);
int		strrchr_basic3(void);
int		strrchr_basic4(void);
int		strrchr_null(void);
int		strstr_basic1(void);
int		strstr_basic2(void);
int		strstr_basic3(void);
int		strstr_null1(void);
int		strstr_null2(void);
int		strstr_null3(void);
int		tolower_basic(void);
int		tolower_null(void);
int		toupper_basic(void);
int		toupper_null(void);
int		test_isprint(int c);
char	*test_strcat(char *s1, const char *s2);
char	*test_strchr(const char *s, int c);
int		test_strcmp(const char *s1, const char *s2);
char	*test_strcpy(char *dst, const char *src);
char	*test_strdup(const char *s1);
size_t	test_strlcat(char *dst, const char *src, size_t size);
char	*test_strncat(char *s1, const char *s2, size_t n);
char	*test_strnstr(const char *haystack, const char *needle, size_t len);
char	*test_strrchr(const char *s, int c);
char	*test_strstr(const char *haystack, const char *needle);
int		test_tolower(int c);
int		test_toupper(int c);
void	*test_memset(void *b, int c, size_t len);
int		test_atoi(const char *str);
int		test_isalnum(int c);
int		test_isascii(int c);
int		test_isalpha(int c);
int		test_isdigit(int c);
char	*test_strncpy(char *dst, const char *src, size_t len);
int		test_strncmp(const char *s1, const char *s2, size_t n);
size_t	test_strlen(const char *str);
int		toupper_launcher(void);
int		tolower_launcher(void);
int		strstr_launcher(void);
int		strrchr_launcher(void);
int		strnstr_launcher(void);
int		strncpy_launcher(void);
int		strncmp_launcher(void);
int		strcat_launcher(void);
int		strlen_launcher(void);
int		strdup_launcher(void);
int		strchr_launcher(void);
int		strchr_launcher(void);
int		isprint_launcher(void);
int		isdigit_launcher(void);
int		isascii_launcher(void);
int		isalpha_launcher(void);
int		isalnum_launcher(void);
int		atoi_launcher(void);
int		strncat_launcher(void);

#endif
