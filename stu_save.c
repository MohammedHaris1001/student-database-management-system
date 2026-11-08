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

