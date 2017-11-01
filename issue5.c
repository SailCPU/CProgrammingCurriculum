void issue5()
{
   float a,b,c;
   printf("Enter first number:");
   scanf("%f",&a);
   printf("Enter second number:");
   scanf("%f",&b);
   c=a;
   a=b;
   b=c;
   printf("After swapping, firstNumber =%f\nAfter swapping, secondNumber = %f",a,b);
}
