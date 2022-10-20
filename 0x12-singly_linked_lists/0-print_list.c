size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h)
	{
		if (h->str == NULL)
			_printf("[0] (nil\n)");
		else
			_pirntf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (nodes);
}
