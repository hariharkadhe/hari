#include<stdio.h>

int main()
{
   int Rollno;
   
   printf("\n-----------------------------------");
   printf("\nEnter The Rollno Between 0 To 100:");
   
   printf("\nEnter The Rollno: ");
   scanf("%d", &Rollno);
   
   if(Rollno>100)
   {
    /* Rollno greater than 100 */
    printf("\nDon't Be Smart Enter valid Rollno Between Limit\n");
   }
   else
   {
   switch(Rollno/10)
   {
       case 10 :
       case 9 :
           /* Rollno between 90-100 */
           printf("\n Student information is:\n name:Harihar Kadhe\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS23106");
           break;
       case 8 :
            /*Rollno between 80-89 */
           printf("\n Student information is:\n name:Sarvesh Nakhale\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS23123" );
           break;
       case 7 :
           /* Rollno between 70-79 */
           printf("\n Your Grade is: CStudent information is:\n name:Mehul Shukla\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS23095" );
           break;
       case 6 :
           /* Rollno between 60-69 */
           printf("\n Student information is:\n name:Vivek Jain\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS23094" );
           break;
       case 5 :
            /* Rollno between 50-59 */
           printf("\n Student information is:\n name:Gaurav Satpute\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS23107" );
           break;
       case 4 :
           /* Rollno between 40-59 */
           printf("\n Student information is:\n name:Amit Tiwari\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS231091");
           break;
       default :
           /* Rollno less than 40 */
           printf("\n Student information is:\n name:Vivek kothekar\n Collage name:SBJITMR\n Branch: CSE\n Section: B\n USN no: CS23110\n");
   }
 }

   getch();
   return 0;
}
