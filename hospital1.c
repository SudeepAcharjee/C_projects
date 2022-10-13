#include<stdio.h>
int main()
{ 
   int age, phone, dept, dept2, dept3, dept4, dept5, book;
   char name[100], sex[10]; 
   printf("enter ur name ");
   scanf("%s", name);
   printf("enter ur age ");
   scanf("%d", &age);
   printf("enter ur sex ");
   scanf("%s", sex);
   printf("enter ur ph.No ");
   scanf("%d", &phone);
   printf("Forc General department enter 1 or press 5 to skip \n Enter:  "); 
   scanf("%d", &dept);
   if (dept == 1)
	     {
		
		    printf(" General department selected \n ");
		    printf("The list of doctors are: \n a) Dr. Subhas das (9am to 12pm) \n b) Dr. Chandra Nayak (12pm to 5pm) \n c) Dr. Raju Prasad (5pm to 12am)\n" );
	     }	   
   printf("For Emergency department enter 2 or press 5 to skip\n Enter: "); 
   scanf("%d", &dept2);
   if (dept2 == 2)
	     {
		
		    printf(" Emergency department selected \n ");
		    printf("The list of doctors are: \n a) Dr. Shayam kumar (9am to 12pm) \n b) Dr. Bibek Dey (12pm to 5pm) \n c) Dr. Rajen Boro (5pm to 12am) \n" );
	     }
   printf("For dental department enter 3 or press 5 to skip \n Enter :");
 scanf("%d", &dept3);  
   if (dept3 == 3)
             {

                    printf(" Dental department selected \n ");
                    printf("The list of doctors are: \n a) Dr. Subhas das (9am to 12pm) \n b) Dr. Chandra Nayak (12pm to 5pm) \n c) Dr. Raju Prasad (5pm to 12am)\n" );
             }
   printf("For ETN department enter 4 or press 5 to skip\n Enter :");
 scanf("%d", &dept4);
   if (dept4 == 4)
             {
		  printf(" ENT department selected \n ");
                  printf("The list of doctors are: \n a) Dr. Subhas das (9am to 12pm) \n b) Dr. Chandra Nayak (12pm to 5pm) \n c) Dr. Raju Prasad (5pm to 12am)\n" );
printf("For Cancer department enter 5 or press 6 to skip\n Enter :");
 scanf("%d", &dept5);
	     }
   if (dept5 == 5)
             {
                  printf(" cancer department selected \n ");
                  printf("The list of doctors are: \n a) Dr. Subhas das (9am to 12pm) \n b) Dr. Chandra Nayak (12pm to 5pm) \n c) Dr. Raju Prasad (5pm to 12am)\n" );

	     }
	     else
	     {
		   printf("select properly \n");
	     }
   printf("For online booking press 5: ");
   scanf("%d", &book);
   if (book == 5)
         { 
            printf("Your booking done %s\n", name);
            printf("You will be verfied by ur ph no.");
		 }
   else 
       printf("error in booking");
   return 0;
}
