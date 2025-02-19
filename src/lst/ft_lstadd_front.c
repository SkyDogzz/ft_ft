#include "../../include/libft.h"

t_list	*ft_lstadd_front(t_list *alst, t_list *ne)
{
	ne->next = alst;
	return (ne);
}
