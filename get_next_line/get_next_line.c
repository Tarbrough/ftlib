#include "get_next_line.h"

char	*get_line(t_list *list)
{
	int		len;
	char	*next;

	if (list == NULL)
		return(NULL);

	len = get_length(list);
	next = malloc(len + 1)
}

void	append(t_list **list, char *buf)
{
	t_list *new;
	t_list	*last;

	last = find_last(*last);
	new = malloc(sizeof(t_list));

	if(!new)
		return;

	if(!last)
		*list = new;
	else
		last->next = new;

	new->buffer = buf;
	new->next = NULL;
}

void	create_list(t_list **list, int fd)
{
	int		char_read;
	char	*buf;
	
	while(!find_newline(*list))
	{
		buf = malloc(BUFFER_SIZE + 1);
		if(!buf)
			return;

		char_read = read(fd, buf, BUFFER_SIZE);
		if(!char_read)
		{
			free(buf);
			return;
		}
		buf[char_read] = '\0';
		append(list, buf);
	}
}

char *get_next_line(int fd)
{
    static t_list	*list = NULL;
	char			*next_line;

	if(fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line, 0) < 0)
		return(NULL);

	create_list(&list, fd);
	if(list == NULL)
		return(NULL);

	next_line = get_line(list);
	clean_list(&list);
	return(next_line);
}