#include <stdio.h>

#define COMMAND(NAME) {#NAME, NAME##_command}
#define paster(n) printf("token"#n" = %d\n", token##n)

struct command
{
	char *name;
	void (*function) (void);
};

void quit_command()
{
	printf("I am quit command!\n");
}

void help_command()
{
	printf("I am help command!\n");
}

int main(void)
{
	int num = 0;
	int token9 = 9;

	paster(9);

	struct command commands[] = {
		COMMAND(quit),
		COMMAND(help),
	};

	commands[0].function();
	printf("command is %s\n", commands[0].name);
	printf("command is %s\n", commands[1].name);

	return 0;
}



