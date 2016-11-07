#include<stdio.h>
#include<stdlib.h>
int main()
{
	int pid;
	int status=0;
	int sonpid,parentpid,i;
	for(i=1;i<=3;i++)
	{
		pid=fork();
		if(pid!=0)
		{
			printf("parent:sonpid->%d\n",pid);
			pid=wait(&status);		
		}
		else
		{
			parentpid=getppid();
			sonpid=getpid();
			printf("son:parentpid->%d   sonpid->%d\n",parentpid,sonpid);
			exit(status);
		}
	}
}
