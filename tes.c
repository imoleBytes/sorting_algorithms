void insertion_sort_list(int list[])
{
	int i;


	for (i = 1; i < 10; i++)
	{
		int tmp = list[i];
		int j = i - 1;
		
		while (j >= 0 && tmp < list[j])
		{
			list[j + 1] = list[j];
			j = j - 1;
		}
		list[j + 1] = tmp;
	}
	print_array(list, 10);
}
