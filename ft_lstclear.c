/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didias-d <didias-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 20:51:02 by didias-d          #+#    #+#             */
/*   Updated: 2026/10/13 20:51:02 by didias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_list;

	if (lst == NULL || del == NULL)
		return ;

	while (*lst != NULL)
	{
		next_list = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_list;
	}
}