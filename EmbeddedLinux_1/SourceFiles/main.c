#include <addition.h>
#include <subtraction.h>
#include <multiplication.h>
#include <division.h>
#include <modulus.h> 
#include <stdio.h>

int main()
{
  float a,b;
  printf("Enter first number: ");
  scanf("%f",&a);
  printf("Enter second number: ");
  scanf("%f",&b);
  printf("%0.2f+%0.2f= %0.2f\n",a,b,add(a,b));
  printf("%0.2f-%0.2f= %0.2f\n",a,b,sub(a,b));
  printf("%0.2f*%0.2f= %0.2f\n",a,b,multiply(a,b));
  printf("%0.2f/%0.2f= %0.2f\n",a,b,divide(a,b));
  printf("%0.2f%%%0.2f= %d\n",a,b,modulus((int)a,(int)b));
}
