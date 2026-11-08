#include"student.h"
int main()
{
	SLL *headptr=0;
	char ch,choice;
	while(1)
	{
		printf("**********STUDENT RECORD MENU************\n");
		printf("a/A : Add new record\n");
		printf("d/D : Delete a record\n");
		printf("s/S : Show the list\n");
		printf("m/M : Modify a record\n");
		printf("v/V : Save records\n");
		printf("t/T : sort the list\n");
		printf("l/L : Delete all the records\n");
		printf("r/R : Reverse the list\n");
		printf("e/E : Exit\n");

		printf("Enter your choice\n");
		scanf(" %c",&ch);

		switch(ch)
		{
			case'a':
			case'A':
			       add(&headptr);break;
			case'd':
			case'D':
			  printf("r/R : enter rollno to delete\n");
				printf("n/N : enter name to delete\n");
				printf("enter your choice\n");
				scanf(" %c",&choice);
				del(&headptr,choice);break;
			case's':
			case'S':
				show(headptr);break;
			case'm':
			case'M':
				printf("r/R : Search by rollno\n");
				printf("n/N : Search by name\n");
				printf("p/P : Search by percentage\n");
				printf("enter your choice\n");
				scanf(" %c",&choice);
				mod(headptr,choice);break;
			case'v':
			case'V':
				save(headptr);break;
			case't':
			case'T':
				printf("n/N : Sort with name\n");
				printf("p/P : Sort with percentage\n");
				printf("enter your choice\n");
				scanf(" %c",&choice);
				sort(headptr,choice);break;
			case'l':
			case'L':
				del_all(&headptr);break;
			case'r':
			case'R':
				rev(&headptr);break;
			case'e':
			case'E':
				printf("s/S : save and exit\n");
				printf("e/E : exit without saving\n");
				printf("enter your choice\n");
				scanf(" %c",&choice);
				if(choice=='s' || choice=='S'){
					save(headptr);
					del_all(&headptr);
					exit(0);}
				else if(choice=='e' || choice=='E'){
					del_all(&headptr);exit(0);}
		      	default:printf("invalid option\n");
		}
	}
}

			

