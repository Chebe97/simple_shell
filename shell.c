#include <stdio.h>
#include <unistd.h>

/**
 *main - shell scripting
 *
 *load config file (settings set by the user)
 *
 *run a REPL(read, execute, print) loop
 *
 *shutdown clean up (e.g. release memory resources)
 *
 *Return: Always 0
 */

int main(void)
{
    char *argv[] = {"/bin/ls", "-l", ".", NULL};

    if (execve(argv[0], argv, NULL) == -1)
      {
	perror("Error:");
      }
    
    return 0;
}

