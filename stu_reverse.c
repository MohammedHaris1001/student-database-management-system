#include"student.h"
void rev(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("no  records found\n");
		return;
	}
	SLL *curr=*ptr,*prev=0,*next=0;
	while(curr)
	{
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	*ptr=prev;
	printf("list reversed successfully\n");
}




