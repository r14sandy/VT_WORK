#include"header.h"
main()
{
	int fd1,fd2,s,i,j,h,m;
	char wrbuf[100],rdbuf[100];
	if(mkfifo("fifo1",0660)==-1)
		perror("mkfifo");
	if(mkfifo("fifo2",0660)==-1)
		perror("mkfifo");
	fd1=open("fifo1",O_RDWR);
//	fd2=open("fifo2",O_RDWR);
	while(1)
	{
	if(fork())
	{
		puts("enter msg to chat2:");
		gets(wrbuf);
		write(fd1,wrbuf,strlen(wrbuf)+1);
	}
	else
	{
		read(fd1,rdbuf,100);
		if(strcmp(rdbuf,"p")==0)
		{
			s=s;
		}
		else
		{
			printf("chat2:%s\n",rdbuf);
			for(i=0;i<100000;i++)
				for(j=0;j<10000;j++);
			system("clear");
			printf("%d:%d:%d\n",h,m,s);
			s++;
			if(s==60)
			{
				s=0;
				m++;
			}
			if(m==60)
			{
				s=0;
				h++;
			}
		//	read(fd2,rdbuf,100);
		//	printf("chat2:%s\n",rdbuf);
		}
	}

	}
}
