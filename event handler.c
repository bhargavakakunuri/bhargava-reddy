#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int ch,ch1,i,count=0,ch2,ch3,ch4;
	char name[20],reg[20],mail[30],num[10];
      printf("\t\t\t\t\tEVENT MANAGEMENT\n");
      printf("\t\t\t\t\t'''''''''''''''''\n");
	printf("1.College events :\n2.Sports events  :\n3.Charity Events :\nPress Any key to Exit\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\t\t\t\t\t A..Youth Vibe.....\n");
			printf("1.DJ.Night\n2.Skate Dance\n3.Traditional Dances\n4.Folk Dance\n5.Stand-up Comedy\n\n");
			printf("Enter your choice : ");
			scanf("%d",&ch1);
			switch(ch1)
			{
				case 1:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				   printf("Enter the E-mail Id :");
				   scanf("%s",&mail);
				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   return(0);
				case 2:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				   printf("Enter the E-mail Id :");
				   scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				   return(0);
				case 3:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				   printf("Enter the E-mail Id :");
				   scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				   return(0);
				case 4:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				   printf("Enter the E-mail Id :");
				   scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				   return(0);
				case 5:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				   printf("Enter the E-mail Id :\n");
				   scanf("%s",&mail);
				   return(0);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				default :
					printf("Please Enter Correct Choice ");
					
					return(0);
					
			}
	case 2:
			printf("\t\t\t\t\t B..Sports Events.....\n");
		printf("1.Indoor Games\n2.Outdoor Games\n");
		printf("Enter your choice : ");
		scanf("%d",&ch2);
		if(ch2==1)
		{
			printf("1.Basket Ball\n2.Chess\n3.Table Tennis\n");
			printf("Enter your choice : ");
			scanf("%d",&ch3);
			switch(ch3)
			{
				
				case 1:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				   printf("Enter the E-mail Id :");
				   scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				   return(0);
				case 2:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
                    printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				case 3:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				    printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				default :
					printf("Please Enter Correct Choice ");
					return(0);
					
			}
		}
		else
		{
			printf("1.Foot-Ball\n2.Cricket\n3.American Foot-Ball\n");
			printf("Enter your choice : ");
			scanf("%d",&ch3);
			switch(ch3)
			{
				
				case 1:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
				    printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				case 2:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
					printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				case 3:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
					printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				default :
					printf("Please Enter Correct Choice ");
					return(0);
					
		}
	}
	case 3:
		{	
			printf("\t\t\t\t\t C..Charity Events.....\n");
			printf("1.Blood donation Camp\n2.Joy Of Giving\n3.Pulse Polio\n");
			printf("Enter your choice : ");
			scanf("%d",&ch4);
			switch(ch4)
			{
				case 1:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
					printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				case 2:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
					printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				case 3:
					printf("Enter Your Name :");
					scanf("%s",name);
					printf("Enter Your Registration Number :");
					scanf("%s",&reg);
					printf("Enter Your Mobile Number :");
					scanf("%s",&num);
					printf("Enter the E-mail Id :");
				    scanf("%s",&mail);				   
				   
				   
				   printf("\n\nYou have Sucessfully registered :\n");
				   printf("Your Name : %s\n",name);
				   printf("Your Registration Number Is : %s\n",reg);
				   printf("Your Mobile Number is : %s\n",num);
				   printf("Your E-mail Id : %s\n",mail);
				   
				    return(0);
				default :
					printf("Please Enter Correct Choice ");
					return(0);
			}	
		}
	}
}
