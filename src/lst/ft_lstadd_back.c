#include "../../include/libft.h"

t_list	*ft_lstadd_back(t_list *alst, t_list *ne)
{
	ft_lstlast(alst)->next = ne;
	return (alst);
}
