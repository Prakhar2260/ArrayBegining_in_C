# include <stdio.h>
int main()
{
  int num1,num2;
  char o;

  printf("ENTER THE OPERATION YOU WANT TO PERFORM \n ");
  printf("+ FOR ADDITION \n");
  printf("- FOR SUBTRACTION \n");
  printf("* FOR MULTIPLICATION \n");
  printf(" %% FOR REMAINDER \n");
  printf("/ FOR DIVISION \n");

  scanf("%c",&o);

  printf("ENTER THE FIRST NUMBER \n");
  scanf("%d",&num1);
  printf("ENTER THE SECOND NUMBER \n ");
  scanf("%d",&num2);

  switch(o)
  {
   case '+':
   printf("ADDITION OF GIVEN NUMBERS=%d\n",(num1+num2));
   break;

   case '-':
   printf("SUBTRACTION OF GIVEN NUMBERS=%d\n",(num1-num2));
   break;

   case '*':
   printf("MULTIPLICATION OF GIVEN NUMBERS=%d\n",(num1*num2));
   break;

   case '%':
   printf("REMAINDER OF GIVEN NUMBERS=%d\n",(num1%num2));
   break;

   case '/':
   printf("DIVISION OF GIVEN NUMBERS=%d\n",(num1/num2));
   break;
 }
    
}
