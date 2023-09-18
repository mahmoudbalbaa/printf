int pf_bin(va_list args)
{
	int i, l;

	i = va_arg(args, int);
	l = print_number(i);
	return (l);
}
