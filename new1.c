#include<stdio.h>
int main()
{ 
	char a[20], b[20];
	int e, f, g, h, c,d;
	printf("Enter ur User Name\n");
	scanf("%s",a);
	printf("Your user name is %s\n", a);
	printf("Enter ur pass in numbers\n");
	scanf("%d",&c);
	printf("re-enter your pass\n");
	scanf("%d",&d);
	printf("Enter your email \n");
	 scanf("%s",b);
	if (c == d)
	
	{
		printf("Login Done\n.\n.\n.\n.\n.\n.\n.\n");
	}
	else 

	{
		printf("Login Unsuccesful\n");
	}
         printf("Forgpt password?\nEnter 0 to change it\n");
	scanf("%d",&e);
	printf("Your OTP is 7890");
	printf("Reset your pass \n Enter your OTP\n");
	scanf("%d",&f);
	if(f=7890)
		{
			printf("Enter Your New pass Only in Numbers\n");
			scanf("%d",&g);
		
			printf("Re-Enter\n");
                	scanf("%d",&h);
		}
	else
		{	
			printf("ESSION ABORTED\n TRY LATER");
		}
	
		
		if(g==h)
		{
			printf("Password Changed");
		}
		else
		{
		 	printf("SESSION ABORTED\n TRY LATER");
		}
	return 0;
	//This Program needs to be edited...It don't work perfctly

}
