// Login Signup module

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct login_signup *ls;
struct login_signup
{
	char name[30], email[30],dob[10],pwd[40],cnfrm_pwd[40], father[30];
	char city[30];
	int age;
	char mobile[10], whatsup[10];
}details[2];

void signup(int);
void login(ls,char*, char*,int);
int validate(ls,int);
void display(ls,int);
int main()
{
	int choice,i;
	char lemail[30],lpwd[30];
	printf("\t\t\tWelcome to Gomathi's website!!\n");
	printf("\t\t\t\tSignup\t");
	printf("Login\n");
	for(i=0;i<2;i++)
	{
	
	printf("Enter a choice Signup or Login:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
			{
			    signup(i);
			    break;
		    }
		case 2:
			{
				printf("Enter your email id:\n");
				scanf("%s",lemail);
				printf("Enter your lpwd:\n");
				scanf("%s",lpwd);
				login(details,lemail,lpwd,i);
				break;
			}
		case 3:
			{
				exit(1);
			}
		default:
			{
				printf("Please enter a valid operation!!");
			}
	}
}
}

//Collecting data from the user
void signup(int i)
{
	int j;
	
	
		printf("Enter your name:\n");
		scanf("%s",details[i].name);
		printf("----------------------\n");
		printf("Enter your age:\n");
		scanf("%d",&details[i].age);
		printf("----------------------\n");
		printf("Enter your mobile number:\n");
		scanf("%s",details[i].mobile);
		printf("----------------------\n");
		printf("Enter your whatsup number:\n");
		scanf("%s",details[i].whatsup);
		printf("----------------------\n");
		printf("Enter your father's name:\n");
		scanf("%s",details[i].father);
		printf("----------------------\n");
		printf("Enter your date of birth:\n");
		scanf("%s",details[i].dob);
		printf("Enter your home town:\n");
		scanf("%s",details[i].city);
		printf("----------------------\n");
		printf("Enter your email-id:\n");
		scanf("%s",details[i].email);
		printf("----------------------\n");
		printf("Enter your password:\n");
		scanf("%s",details[i].pwd);
		printf("----------------------\n");
		printf("Confirm password:\n");
		scanf("%s",details[i].cnfrm_pwd);
		printf("----------------------\n");
		

	  j = validate(details,i);
	  if(j)
	  {
	  	printf("Welcome %s\n",details[i].name);
	  }
	  
}

int validate(ls details, int i)
{
	int j = 0,flag = 0;
	for(j=0;details[i].name[j]!='\0';j++)
	{
		if(!((details[i].name[j] >= 'a' && details[i].name[j]!= 'z') || details[i].name[j] >= 'A' && details[i].name[j] <= 'Z' ))
		{
			printf("Enter a valid name!!\n");
			break;
		}
		else
		{
			continue;
		}
	}
	if(details[i].age <= 0 && details[i].age >= 100)
	{
		printf("Please enter a valid age!!\n");
	}
	if(strlen(details[i].mobile) <= 10)
	{
		printf("Please enter a valid mobile number!!\n");
	}
	if(strlen(details[i].whatsup) <= 0 && strlen(details[i].whatsup) > 10)
	{
		printf("Please enter a valid whatsup number!!\n");
	}
		for(j=0;details[i].father[j]!='\0';j++)
	{
		if(!((details[i].father[j] >= 'a' && details[i].father[j]!= 'z') || details[i].father[j] >= 'A' && details[i].father[j] <= 'Z' ))
		{
			printf("Enter a valid name!!\n");
			break;
		}
		else
		{
			continue;
		}
	}
	
	if(strlen(details[i].pwd) >= 8)
	{
		for(j=0;j < strlen(details[i].pwd);j++)
		{
			if(!((details[i].pwd[j] >= 'a' && details[i].pwd[j]!= 'z') || (details[i].pwd[j] >= 'A' && details[i].pwd[j] <= 'Z')) && (details[i].pwd[j] >= '!' && details[i].pwd[j] <= '9'))
			{
				flag = 1;
				
			}
		}
		if(flag==1)
		{
			if((strcmp(details[i].pwd,details[i].cnfrm_pwd)))
			{
				printf("Please enter correct password!!\n");
				
			}
			else
			{
				return 1;
			}
		}
		else
		{
		
			printf("Please give some alphanumeric characters for strong password!!");
			return 0;
		}
	}
		
	
	if(strlen(details[i].pwd) < 8)
	{
		printf("Please enter atlease 8 characters!!");
		return 0;
	}
	
	return 1;
}

void login(ls details,char *lemail, char *lpwd,int i)
{
	int j;
	for(j = 0;j<i-1;j++)
	{
		if(!(strcmp(details[j].email,lemail)))
		{
			if(!(strcmp(details[j].pwd, lpwd)))
			{
					printf("Welcome %s",details[j].name);
			}
			else
			{
				printf("Invalid password!!");
			}
		}
		else
			{
				printf("Account does not exist, please signup!!");
			
		    }	
		}
	
		
	
	
}

/*void display(ls details,int i)
{
	
		printf("%s\n",details[i].name);
		printf("%d\n",details[i].age);
		printf("%s\n",details[i].mobile);
		printf("%s\n",details[i].whatsup);
		printf("%s\n",details[i].father);
		printf("%s\n",details[i].dob);
		printf("%s\n",details[i].email);
		printf("%s\n",details[i].pwd);
		printf("%s\n",details[i].cnfrm_pwd);
		printf("%s\n",details[i].city);

}*/
