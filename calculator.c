/**
 * Author:
 * Date:
 *
 * This programs provides basic calculator functionality
 * allowing a user to enter two operands and to compute
 * various calculated values.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include<math.h>

int main(int argc, char **argv) {

  double a, b, result;
  int choice;

  printf("Enter operand a: ");
  scanf("%lf", &a);

  printf("Enter operand b: ");
  scanf("%lf", &b);

  printf("Enter operation:\n");
  printf("(1) Addition\n");
  printf("(2) Subtraction\n");
  printf("(3) Multiplication\n");
  printf("(4) Division\n");
  printf("(5) Minimum\n");
  printf("(6) log_a(b)\n");
  scanf("%d", &choice);

  if(choice == 1) {
    printf("%f", a + b);
  } else if(choice == 2) {
    result = a - b;
    printf("%f", result);
  } else if(choice == 3) {
    result =a*b;
    printf("result %f", result);
    //TODO: handle this case (multiplication)
    result = a*b;
  } else if(choice == 4) {
    if(b!=0)
    {
      result = a/b;
      printf("result: %f",result);
    }
    else
    {
      printf("Error : division by zero is not allowed");
    }
    //TODO: handle this case (division)
    result = a/b;
  } else if(choice == 5) {
    result = (a<b) ? a:b;
    printf("result:%f", result);
    //TODO: handle this case (minimum)
    result =min(a,b);
  } else if(choice == 6) {
    if(a>0 && a!=1 && b>0)
    {
      result=log(b)/ log(a);
      printf("result:%f", result);
    }
    else
    {
     printf("error");
    }
    //TODO: handle this case (log_a(b))
    if(a>0 && b>0)
    {
      result = log(a)/log(b);
      printf("%f" ,result);
    }
    else
    {
      printf("Error , you entered a negative value");
    }
  } else {
    printf("Please input a valid operator next time");
  }

  return 0;
}
