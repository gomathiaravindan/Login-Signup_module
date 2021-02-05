// Login Signup module

#include<stdio.h>
#include<stdlib.h>
typedef struct login_signup *ls;
struct login_signup
{
	char name[30], email[30],dob[10],pwd[40],cnfrm_pwd[40], father[30];
	char city[30];
	int age;
	long long int mobile, whatsup;
}details[2];

void signup(int);
//void login();
void validate(ls);
void display(ls,int);
int main()
{
	int choice,i;
	
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
			
				void login();
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
		scanf("%lld",&details[i].mobile);
		printf("----------------------\n");
		printf("Enter your whatsup number:\n");
		scanf("%lld",&details[i].whatsup);
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
		

	
}

/*void display(ls details,int i)
{
	
		printf("%s\n",details[i].name);
		printf("%d\n",details[i].age);
		printf("%lld\n",details[i].mobile);
		printf("%lld\n",details[i].whatsup);
		printf("%s\n",details[i].father);
		printf("%s\n",details[i].dob);
		printf("%s\n",details[i].email);
		printf("%s\n",details[i].pwd);
		printf("%s\n",details[i].cnfrm_pwd);
		printf("%s\n",details[i].city);

}*/
