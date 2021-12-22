//EVALUATION OF POSTFIX EXPRESSION

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20

float stack[MAX];
int top=-1;
void push(float);
float pop();

float eval(char [],float[]);
float powd(float,float);//a^b=ab^

void main()
{
 int i=0;
 char suffix[MAX];
 float value[MAX],result;
 clrscr();
 printf("\n\nEnter a valid postfix expression :: ");
 gets(suffix);

 while (suffix[i]!='\0')
 {
  if(isalpha(suffix[i]))
  {
   fflush(stdin);
   printf("\nEnter the value of %c",suffix[i]);
   scanf("%f",&value[i]);
  }
  i++;
 }

 result=eval(suffix,value);
 printf("The result of %s=%f",suffix,result);
 getch();
}

float eval(char suffix[],float data[])
{
 int i=0;
 float op1,op2,res;
 char ch;

 while(suffix[i]!='\0')
 {
  ch=suffix[i];
  if(isalpha(suffix[i]))
  {
   push(data[i]);
  }
  else
  {
   op2=pop();
   op1=pop();
   switch(ch)
   {
    case '+' : push(op1+op2);
	       break;
    case '-' : push(op1-op2);
	       break;
    case '*' : push(op1*op2);
	       break;
    case '/' : push(op1/op2);
	       break;
    case '^' : push(powd(op1,op2));
	       break;
    default:   printf("\n Undefined symbol!!!!!");
	       getch();
	       exit(0);
   }
  }
  i++;
 }
 res=pop();
 return(res);
}

void push(float num)
{
 if(top==MAX-1)
 {
  printf("\n Overflow!!!!!");
  getch();
  exit(0);
 }
 top=top+1;
 stack[top]=num;
}

float pop()
{
 float num;
 if(top==-1)
 {
  printf("\n Underflow!!!!!!!!!!!!");
  getch();
  exit(0);
 }
 num=stack[top];
 top=top-1;
 return(num);
}

float powd(float a,float b)
{
 float res=1.0;
 int i;
 for(i=1;i<=b;i++)
  res=res*a;
 return res;
}


















