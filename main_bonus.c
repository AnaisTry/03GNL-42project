# include "get_next_line/get_next_line_bonus.h"
# include <fcntl.h>
# include <stdio.h>

int	main(int argc, char **argv)
{
	char	*line;
	int		fd[3];
	

	// (void)argc;
	// (void)argv;
	// fd = 0;
	if (argc < 2)
	{
		printf("Usage: ./<program>.out fd\n");
		exit(1);
	}

	// check size of buffer
	// printf ("BUFFER_SIZE = %d\n", BUFFER_SIZE);
	
	//open files
	int j;
	for(j = 0; j <= 2; j++)
	{
	fd[j] = open(argv[j + 1], O_RDONLY);
	printf("fd[%d] = %d\n\n",j ,fd[j]);
		if (fd[j] < 0)
		{
			printf("Could not open file.\n");
			exit(1);
		}
	}
	// print each line until EOF
	int 	i = 0;
	int k;
	for (j = 0; j <= 2 ; j++)
	{
		while (1)
		{
			i++;
			printf("start of loop\n");
			for (k = 0; k <= 2; k++)
			{
				line = get_next_line(fd[k]);
				// line = get_next_line(fd);
				if (!line)
					break;
				printf("line %d of fd[%d] : %s", i, k, line);
			}
			if (!line)
				break;
			printf("\nend of loop\n");
			free(line);
		}
	}
	// close files
	for (j = 0; j <=2; j++)
	{
		if (close(fd[j]) < 0)
		{
			printf("Could not close the file %d.\n", j);
			exit(1);
		}
	}
	return (0);
}
