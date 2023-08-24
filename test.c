push
pall
#include <stdio.h>
int main()
{
	char *str = "hello world\0";
	while (str)
	{
		if (str == "h" || str == "e")
			continue;
		if (str == "llo")
			printf("%s\n", str);
		str++;
	}
}
