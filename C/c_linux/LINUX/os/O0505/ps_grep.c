#include"header.h"
main()
{
	int p[2];
	pipe(p);
	if(fork())
	{
		close(0);
		dup(p[0]);
		close(p[1]);
		system("grep tty1");

	}
	else
	{
		close(1);
		dup(p[1]);
		close(p[0]);
		system("ps -e");
	}

}
