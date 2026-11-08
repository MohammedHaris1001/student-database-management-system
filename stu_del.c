#include"student.h"
void del(SLL **ptr,char choice)
{
	if(*ptr==0)
	{
		printf("no records found\n");
		return;
	}
	if(choice=='r' || choice=='R')
	{
		int num;
		printf("enter rollno to delete\n");
		scanf("%d",&num);
		SLL *del=*ptr,*prev;
		while(del)
		{
			if(num==del->rollno)
			{
				if(*ptr==del)
					*ptr=del->next;
				else
					prev->next=del->next;
				free(del);
				return;
			}
			prev=del;
			del=del->next;
		}
		printf("rollno not found\n");
	}
	else if(choice=='n' || choice=='N')
	{
		char name[20];
		printf("enter name to delete\n");
		scanf("%s",name);
		int c=0;
		SLL*del1=*ptr;
		while(del1)
		{
			if (strcmp(name,del1->name)==0)
			{
				c++;
				printf("%d %s %f\n",del1->rollno,del1->name,del1->percentage);
			}
			del1=del1->next;
		}
		if(c==0)
		{
			printf("name not found\n");
			return;
		}
		else if(c==1)
		{
			SLL *del2=*ptr,*prev1;
			while(del2)
			{
				if(strcmp(del2->name,name)==0)
				{
					if(*ptr==del2)
						*ptr=del2->next;
					else
						prev1->next=del2->next;
					free(del2);
					return;
				}
				prev1=del2;
				del2=del2->next;
			}

		}
		else if(c>1)
		{
			int num;
			printf("enter rollno to delete\n");
			scanf("%d",&num);
			SLL *del3=*ptr,*prev2;
			while(del3)
			{
				if(num==del3->rollno)
				{
					if(*ptr==del3)
						*ptr=del3->next;
					else
						prev2->next=del3->next;
					free(del3);
					return;
				}
				prev2=del3;
				del3=del3->next;
			}
			printf("rollno not found\n");

		}
	}
}
