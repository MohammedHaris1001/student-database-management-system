#include"student.h"
void save(SLL *ptr)
{
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	FILE *fp;
	fp=fopen("student.dat","w");
	if(fp==0)
	{
		printf("student record not found\n");
		return;
	}
	while(ptr)
	{
		fprintf(fp,"%d %s %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("data saved in file\n");
	fclose(fp);
}


void readfile(SLL **ptr)
{
	SLL *new;
	FILE *fp;
	fp=fopen("student.dat","r");
	if(fp==0)
	{
		printf("filenot present\n");
		return;
	}
	while(1)
	{
		new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage)==-1)
			break;
			new->next=0;
			if(*ptr==0)
				*ptr=new;
			else
			{
				SLL *last=*ptr;
				while(last->next)
					last=last->next;
					last->next=new;
			}
	}
}


