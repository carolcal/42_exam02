int	ft_list_size(t_list *begin_list)
{
	int	size;
	t_list	temp;

	if(!begin_list)
		return (NULL);
	size = 0;
	temp = begin_list;
	while(temp->next)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
