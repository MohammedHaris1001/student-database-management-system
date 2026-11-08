#include"student.h"
void del_all(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("no records found\n");
		return;
	}
	SLL *del=*ptr;
	int c=1;
	while(del)
	{
		*ptr=del->next;
		printf("node pos:%d deleted\n",c++);
		sleep(1);
		free(del);
		del=*ptr;
	}
	printf("all records deleted\n");
}

