#include <stdlib.h>

size_t	ft_strlen_substr(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy_substr(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen_substr(src);
	if (dstsize == 0)
	{
		return (srclen);
	}
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*empty_string;
	char	*new_string;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen_substr(s);
	if (start >= s_len)
	{
		empty_string = (char *)malloc(1 * sizeof(char));
		if (empty_string == NULL)
			return (NULL);
		empty_string[0] = '\0';
		return (empty_string);
	}
	if (ft_strlen_substr(s) - start >= len)
		new_string = (char *)malloc((len + 1) * sizeof(char));
	else
		new_string = (char *)malloc((ft_strlen_substr(s) - start + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy_substr(new_string, s + start, len + 1);
	return (new_string);
}
