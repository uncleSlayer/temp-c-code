#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (strcmp(argv[1], "-r") == 0)
	{
		printf("the flag given was: %s\n", argv[1]);
		char content[1000];
		FILE *stream = fopen(argv[2], "r");

		if (!stream)
		{
			printf("error opening file\n");
		}
		else
		{

			printf("opened the %s file successfully \n", argv[2]);
			printf("__________________________________________________\n");
			printf("\n");

			while ((fgets(content, sizeof(content), stream)) != NULL)
			{
				printf("%s", content);
			}
		}

		/* code */
	} else{
		printf("if failed \n");
	}
	return 0;
}
