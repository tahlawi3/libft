#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	void	*c;

	new_l = 0;
	while (lst)
	{
		c = f(lst->content);
		new_n = ft_lstnew(f(lst->content));
		if (new_n == 0)
		{
			del(c);
			ft_lstclear(&new_l, del);
			return (0);
		}
		ft_lstadd_back(&new_l, new_n);
		lst = lst->next;
	}
	return (new_l);
}
