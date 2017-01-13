int rand(void)
{
	static int i = 0;

	i++;
	switch (i)
       	{
	case 1:
		return (8);
	case 2:
		return (8);
	case 3:
		return (7);
	case 4:
		return (9);
	case 5:
		return (23);
	case 6:
		return (74);
	default:
		return (i);
	}
}
