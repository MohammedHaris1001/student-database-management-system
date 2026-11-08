#include"student.h"
void mod(SLL *ptr,char choice)
{
	SLL *temp;
		int c=0;
	if(ptr==0)
	{
		printf("no records found\n");
		return;
	}
	if(choice=='r' || choice=='R')
	{
		int num;
		printf("enter rollno\n");
		scanf("%d",&num);
		temp=ptr;
		while(temp)
		{
			if(num==temp->rollno)
			{
				printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);	printf("enter updated name and rollno\n");
				scanf("%s%f",temp->name,&temp->percentage);
			}
			temp=temp->next;
		}
		printf("rollno not found\n");
	}
	else if(choice=='n' || choice=='N')
	{
		char name[20];
		printf("enter name\n");
		scanf("%s",name);
		temp=ptr;
		while(temp)
		{
			if(strcmp(temp->name,name)==0)
			{
				c++;
				printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
			}
			temp=temp->next;
		}
		if(c==0)
		{
			printf("name not found\n");
			return;
		}
		else if(c==1)
		{
			temp=ptr;
			while(temp)
			{
				if(strcmp(temp->name,name)==0)
				{
					printf("enter updated name and percentage\n");
					scanf("%s%f",temp->name,&temp->percentage);

				}
				temp=temp->next;
			}
		}
		else if(c>1)
		{
			int num1;
			printf("enter rollno\n");
			scanf("%d",&num1);
			temp=ptr;
			while(temp)
			{
				if(num1==temp->rollno)
				{
					printf("enter updated name and perecntage\n");
					scanf("%s%f",temp->name,&temp->percentage);
				}
				temp=temp->next;
			}
			printf("rollno not found\n");
		}
	}
	else if(choice=='p' || choice=='P')
	{

		float num2;
		printf("enter percentage\n");
			scanf("%f",&num2);
		temp=ptr;
		while(temp)
		{
			if(num2==temp->percentage)
			{
				c++;
				printf("%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
			}
			temp=temp->next;
		}
		if(c==0)
		{
			printf("percentage not found\n");
			return;
		}
		else if(c==1)
		{
			temp=ptr;
			while(temp)
			{
				if(num2==temp->percentage)
				{
					printf("enter updated name and percentage\n");
					scanf("%s%f",temp->name,&temp->percentage);
				}
				temp=temp->next;
			}
		}
		else if(c>1)
		{
			int num3;
			printf("enter rollno\n");
			scanf("%d",&num3);
				temp=ptr;

			while(temp)
			{
				if(num3==temp->rollno)
				{
					printf("enter updated name and perecnatage\n");
					scanf("%s%f",temp->name,&temp->percentage);
				}
				temp=temp->next;
			}
			printf("rollno not found\n");
		}
	}
}




	

