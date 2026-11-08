#include"student.h"
void add(SLL **ptr)
{
	int roll=1;
	SLL *new,*temp;
	new=malloc(sizeof(SLL));
	while(1){
	temp=*ptr;
	while(temp){
		if(temp->rollno==roll)
			break;
			temp=temp->next;}
	if(temp==0)
		break;
	roll++;
	}
	new->rollno=roll;
	printf("enter name and percentage\n");
	scanf("%s%f",new->name,&new->percentage);
	if((*ptr==0) || ((new->rollno)<((*ptr)->rollno)))
	{
	new->next=*ptr;
	*ptr=new;
	}
	else
	{
		SLL *pos=*ptr;
		while((pos->next!=0) && (new->rollno > pos->next->rollno))
		pos=pos->next;
		new->next=pos->next;
		pos->next=new;
	}
}
