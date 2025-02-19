#include "../../include/libft.h"

t_list	*ft_lstadd_back(t_list **lst, t_list *ne)
{
	t_list	*memb;

	if (!lst)
		return (NULL);
	memb = *lst;
	ft_lstlast(memb)->next = ne;
	return (memb);
}
