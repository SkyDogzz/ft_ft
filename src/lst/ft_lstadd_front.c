#include "../../include/libft.h"

t_list	*ft_lstadd_front(t_list **lst, t_list *ne)
{
	t_list	*memb;

	if (!lst)
		return (NULL);
	memb = *lst;
	ne->next = memb;
	return (ne);
}
