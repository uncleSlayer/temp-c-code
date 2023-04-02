#include <stdio.h>

int main(int argc, char *argv[])
{

	if (argc == 2)
	{
		char content[1000];
		FILE *stream = fopen(argv[1], "r");

		if (!stream)
		{
			printf("error opening file\n");
		} else {

			printf("opened the %s file successfully \n", argv[1]);
			printf("__________________________________________________\n");
			printf("\n");

			while ((fgets(content, sizeof(content), stream)) != NULL)
			{
				printf("%s", content);
			}
			
		}
	}
	else
	{
		printf("please give the file to read as arguement to gigacat.\n");
	}
	return 0;
}
