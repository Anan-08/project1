#include<stdio.h>
int main()
{
float a,b;
char ch;
printf("Enter two numbers: ",a,b);
scanf("%f %f",&a,&b);
printf("Enter an operator:");
scanf(" %c ",&ch);
switch(ch)
{
case'+':
{
printf("Result= %f",a+b);
break;
}
case'-':
{
printf("Result = %f",a-b);
break;
}
case'*':
{
printf("Result = %f",a*b);
break;
}
case'/':
{
if(b==0)
{
printf("0" );
}
else
{
printf("Result= %f",a/b);
}
break;
}
default:
{
printf("Invalid operation");
}
}
return 0;
}