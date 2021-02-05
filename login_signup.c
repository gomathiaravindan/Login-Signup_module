// Login Signup module

#include<stdio.h>
int main()
{
	int choice;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			{
				printf("Signup\n");
				break;
			 } 
		case 2:
			{
				printf("Login");
				break;
			}
	}
}
