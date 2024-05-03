#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - creates 5 zombie processes
 *
 * Return: Always 0 on success, 1 on error
 */
int main(void)
{
	pid_t child_pid;
	int i;

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error: Fork failed");
			exit(1);
		}
		else if (child_pid == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			exit(0);
		}
	}

	infinite_while(); /* Keep parent process running */

	return (0);
}

/**
 * infinite_while - puts the process in an infinite loop
 *
 * Return: never returns (0)
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0); /* This line is not actually reached */
}
