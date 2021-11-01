char *strcpy(char *dest, const char *src)
{
	int index;
	index = 0;

	while(src != '\0')
	{
		dest[index] = src;
		src++;
		index++;
	}
	dest = '\0';
	return(dest);
}
